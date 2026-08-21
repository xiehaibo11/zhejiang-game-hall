
undefined8 FUN_00de1014(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x350);
  uVar1 = (**(code **)(lVar3 + 0x48))();
  if ((int)uVar1 != 0) {
    if (0 < param_3) {
      lVar2 = *(long *)(lVar3 + 0x10);
      do {
        (**(code **)(lVar3 + 0x50))(param_1,param_2,lVar2);
        param_3 = param_3 - lVar2;
        param_2 = param_2 + lVar2;
      } while (0 < param_3);
    }
    uVar1 = 1;
  }
  return uVar1;
}

