
undefined8 FUN_0010a60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = log2File(param_3,"%s=0x%016lx\n",param_1,param_2);
  if (iVar2 < 1) {
    return 0;
  }
  if (param_4 != -1) {
    iVar2 = DAT_0013ed98 + 1;
    bVar1 = DAT_0013ed98 == (DAT_0013ed98 / 3) * 3;
    DAT_0013ed98 = iVar2;
    if (bVar1) {
      log2Report(param_4,1,&DAT_001246d8);
    }
    log2Report(param_4,0,"  %s: 0x%016lx",param_1,param_2);
    return 1;
  }
  return 1;
}

