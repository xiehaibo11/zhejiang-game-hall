
undefined8 unzGoToFirstFile(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x88);
    uVar1 = FUN_00a0aff0(param_1,param_1 + 0x90,param_1 + 0x118,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0x70) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}

