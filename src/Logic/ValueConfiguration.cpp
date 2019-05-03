//
// Created by draghan on 2019-05-03.
//

#include "ValueConfiguration.hpp"
#include <wx/wx.h>
#include <wx/fileconf.h>
#include <wx/wfstream.h>

float ValueConfiguration::winPoints() const noexcept
{
    return this->winValue;
}

float ValueConfiguration::drawPoints() const noexcept
{
    return this->drawValue;
}

float ValueConfiguration::lossPoints() const noexcept
{
    return this->lossValue;
}

bool ValueConfiguration::loadConfig(const std::string &configPath)
{
    if (!wxFile::Exists(configPath))
    {
        wxFile(configPath, wxFile::write);
    }

    wxFileInputStream readingFileStream{configPath};
    wxFileConfig config{readingFileStream};
    this->winValue = config.ReadDouble("WinValue", defaultWinValue);
    this->drawValue = config.ReadDouble("DrawValue", defaultDrawValue);
    this->lossValue = config.ReadDouble("LossValue", defaultLossValue);

    wxFileOutputStream writingFileStream{configPath};
    config.Write("WinValue", this->winValue);
    config.Write("DrawValue", this->drawValue);
    config.Write("LossValue", this->lossValue);
    config.Save(writingFileStream);

    return true;
}
