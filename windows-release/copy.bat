Rem     This script is used in my IDE in the pre build phase under Windows 
Rem     to copy all necessary files to the output  directory
set "projectDir=%1%"
set "projectExe=%2%"
set "projectDir=%projectDir:\=/%"
xcopy files "%projectDir%" /f /y
xcopy files ..\windows-build /f /y
xcopy "%projectExe%" ..\windows-build\ /f /y