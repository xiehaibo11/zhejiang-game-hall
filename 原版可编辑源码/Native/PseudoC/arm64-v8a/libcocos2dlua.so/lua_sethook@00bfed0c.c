
undefined8 lua_sethook(long param_1,long param_2,byte param_3,undefined4 param_4)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = param_3 & 0xf;
  lVar2 = *(long *)(param_1 + 0x10);
  if (((param_3 & 0xf) == 0) || (param_2 == 0)) {
    bVar1 = 0;
    param_2 = 0;
  }
  *(long *)(lVar2 + 0x138) = param_2;
  *(undefined4 *)(lVar2 + 0x134) = param_4;
  *(undefined4 *)(lVar2 + 0x130) = param_4;
  *(byte *)(lVar2 + 0xc1) = bVar1 | *(byte *)(lVar2 + 0xc1) & 0xf0;
  FUN_00bfe9d0(lVar2);
  return 1;
}

