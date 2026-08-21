
undefined8 FUN_00135500(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x40) == 0) {
    iVar1 = fflush(*(FILE **)(lVar3 + 0x20));
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(lVar3 + 0x40) = 1;
    *(undefined8 *)(lVar3 + 0x28) = 0xffffffffffffffff;
  }
  uVar2 = FUN_00135348(param_1,param_2,param_3,param_4);
  return uVar2;
}

