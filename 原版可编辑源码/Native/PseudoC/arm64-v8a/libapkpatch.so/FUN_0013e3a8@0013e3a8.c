
uint FUN_0013e3a8(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(long *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) + (param_4 - param_3);
  uVar1 = FUN_0013e3d8(*(undefined8 *)(lVar2 + 0x30),param_3);
  return uVar1 & 1;
}

