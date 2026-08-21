
undefined8 FUN_00c1a5a8(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(lVar2 + 0xa0) = param_1;
  if (param_2 <= (uint)((int)*(undefined8 *)(lVar2 + 0x90) - (int)*(undefined8 *)(lVar2 + 0x98))) {
    return *(undefined8 *)(lVar2 + 0x98);
  }
  uVar1 = FUN_00c1a418(lVar2 + 0x88);
  return uVar1;
}

