
undefined8 FUN_00de0378(long param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = **(long **)(param_1 + 0x350);
  do {
    if (param_3 < 1) {
      return 1;
    }
    lVar1 = param_3;
    if (lVar4 <= param_3) {
      lVar1 = lVar4;
    }
    iVar3 = FUN_00ddfe4c(param_1,param_2,lVar1,param_4);
    lVar2 = 0;
    if (-1 < iVar3) {
      lVar2 = lVar1;
    }
    param_2 = param_2 + lVar1;
    param_3 = param_3 - lVar2;
  } while (-1 < iVar3);
  return 0xffffffff;
}

