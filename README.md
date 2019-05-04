What's this project?
====================

This is an application for counting points while playing chess session.

Inspired by [chess videos](https://www.youtube.com/channel/UC6hOVYvNn79Sl1Fc1vx2mYA) of John Bartholomew.

![Application window](./docs/mainWindow.png)

Quick start
===========

Basics
-------
Whenever the game ends, just hit one of the result buttons, proper points amount will be added to your score.

Application displays your overall score, game count and session's result history.

Configuring
-----------

By default, win is worth 1.0 point, draw is worth 0.5 point and loss is worth 0.0 point.

The application supports simple config file which allows you to change default score values bound with win / draw / loss.

Just edit the `config.cfg` file in the application's directory and rerun application. If there is no such file, you could create one by hand or run application - after first run there should be the default file generated:

    WinValue=1
    DrawValue=0.5
    LossValue=0

Saving
------

You can save scores in plain text file in order to keep tracking your progress.

Results will be saved in `results.txt` file in the application's directory.

Every time you press `Save` button, current score with timestamp will be append to the results file.

Example content of the `results.txt`:

    [05/04/19 18:18:33] Score: 1.5 / 3 Game history (newest first): 0.5, 1, 0
    [05/04/19 20:18:41] Score: 5 / 5 Game history (newest first): 1, 1, 1, 1, 1


How to get application
-----------------------

For Windows platform there is prepared build in [windows-build](./windows-build) directory.


Technical touch
===============

Application is written in C++ and uses [wxWidgets3](https://www.wxwidgets.org/) library.

GUI layout was designed in [wxFormBuilder](https://github.com/wxFormBuilder/wxFormBuilder).

Project based on [CMake](https://cmake.org/) ([CLion](https://www.jetbrains.com/clion/)).

Should be multiplatform, but was tested only under Linux Mint 18 KDE, Windows 7 and Windows 10.

I've used icon from [icons8](https://icons8.com/) - check this out, the site is amazing! :)

