vcvarsall.bat
cl.exe /O2 /std:c17 /arch:AVX2 tmpmain.vcbench.c
cl.exe /O2 /std:c17 /arch:AVX2 notmpmain.vcbench.c

echo temporary, no temporary[ms] > vcbench.csv
for /l %%i in (1,1,50) do (
  .\tmpmain.vcbench.exe >> vcbench.csv
  .\notmpmain.vcbench.exe >> vcbench.csv
  echo.>>vcbench.csv
)