vcvarsall.bat
cl.exe /O2 /std:c17 /arch:AVX2 tmpmain.c
cl.exe /O2 /std:c17 /arch:AVX2 notmpmain.c

.\tmpmain.exe > tmpmain.csv
.\notmpmain.exe > notmpmain.csv