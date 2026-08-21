
undefined8 recordMapLine(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_3 != 0) && (DAT_0013fe10 != 0)) {
    if (param_4 == 0) {
      iVar1 = log2File(DAT_0013fe10,"%016lx-%016lx  %s [unknown:unknown]\n",param_1,param_2);
      if (iVar1 < 1) {
        return 0;
      }
    }
    else {
      iVar1 = log2File(DAT_0013fe10,"%016lx-%016lx  %s [%s:%s]\n",param_1,param_2,param_3,
                       param_4 + 0x88,param_4 + 0xa8);
      if (iVar1 < 1) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

