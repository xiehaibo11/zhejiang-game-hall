
FILE * FUN_011a2dc8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  FILE *pFVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_011a2e68(param_1,0);
  if (iVar2 < 0) {
    return (FILE *)0x0;
  }
  pFVar3 = fdopen(iVar2,"r");
  if (pFVar3 != (FILE *)0x0) {
    return pFVar3;
  }
  puVar4 = (undefined4 *)__errno();
  uVar1 = *puVar4;
  iVar2 = close(iVar2);
  if (iVar2 != -1) {
    return (FILE *)0x0;
  }
  *puVar4 = uVar1;
  return (FILE *)0x0;
}

