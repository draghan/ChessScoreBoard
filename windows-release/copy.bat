Rem     This script is used in my IDE in the pre build phase under Windows 
Rem     to copy all necessary files to the output  directory
set "variable=%1%"
set "variable=%variable:\=/%"
xcopy files "%variable%" /f /y