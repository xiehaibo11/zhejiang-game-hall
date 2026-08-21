
undefined4 FT_Get_Next_Char(long param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 local_24;
  
  if (param_1 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xa8);
    if ((lVar3 == 0) || (local_24 = param_2, *(long *)(param_1 + 0x20) == 0)) {
      uVar2 = 0;
      uVar1 = 0;
    }
    else {
      do {
        uVar2 = (**(code **)(*(long *)(lVar3 + 0x10) + 0x20))(lVar3,&local_24);
      } while (*(uint *)(param_1 + 0x20) <= uVar2);
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = local_24;
      }
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  return uVar1;
}

