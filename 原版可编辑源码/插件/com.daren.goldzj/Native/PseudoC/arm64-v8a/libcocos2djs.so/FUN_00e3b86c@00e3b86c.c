
undefined8 FUN_00e3b86c(long param_1)

{
  uint uVar1;
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  uVar1 = (uint)local_c ^ (uint)local_8 ^ *(uint *)(param_1 + 0x10);
  uVar1 = uVar1 ^ uVar1 >> 10 ^ uVar1 >> 0x14;
  *(undefined8 *)(param_1 + 0x48) = 0x113000003e8;
  *(undefined8 *)(param_1 + 0x40) = 0x190000001f4;
  *(undefined8 *)(param_1 + 0x58) = 0x91d;
  *(undefined8 *)(param_1 + 0x50) = 0x11300000683;
  *(uint *)(param_1 + 0x60) = uVar1;
  if ((int)uVar1 < 0) {
    *(uint *)(param_1 + 0x60) = -uVar1;
    return 0;
  }
  if (uVar1 != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0x75bcd15;
  return 0;
}

