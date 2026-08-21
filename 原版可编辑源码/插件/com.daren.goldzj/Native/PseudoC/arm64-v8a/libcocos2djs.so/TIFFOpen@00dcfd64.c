
long TIFFOpen(char *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  char *pcVar4;
  
  iVar1 = _TIFFgetMode(param_2,"TIFFOpen");
  if (iVar1 != -1) {
    iVar1 = open(param_1,iVar1,0x1b6);
    if (iVar1 < 0) {
      piVar3 = (int *)__errno();
      if ((*piVar3 < 1) || (pcVar4 = strerror(*piVar3), pcVar4 == (char *)0x0)) {
        TIFFErrorExt(0,"TIFFOpen","%s: Cannot open",param_1);
      }
      else {
        pcVar4 = strerror(*piVar3);
        TIFFErrorExt(0,"TIFFOpen","%s: %s",param_1,pcVar4);
      }
    }
    else {
      lVar2 = TIFFClientOpen(param_1,param_2,(long)iVar1,read,write,lseek,close,FUN_00dcfcac,
                             FUN_00dcfcd8,FUN_00dcfd58);
      if (lVar2 != 0) {
        *(int *)(lVar2 + 8) = iVar1;
        return lVar2;
      }
      close(iVar1);
    }
  }
  return 0;
}

