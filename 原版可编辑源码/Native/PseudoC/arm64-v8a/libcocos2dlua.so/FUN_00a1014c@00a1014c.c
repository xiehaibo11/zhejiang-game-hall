
undefined8 FUN_00a1014c(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  
  if (param_3 >> 0xb == 0x1b) {
    return 0xffffffff;
  }
  if (param_3 >> 0x10 == 0) {
    if (1 < param_4) {
      *param_2 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
      return 2;
    }
  }
  else {
    if (0x10 < param_3 >> 0x10) {
      return 0xffffffff;
    }
    if (3 < param_4) {
      param_3 = param_3 - 0x10000;
      iVar1 = (param_3 >> 10) + 0xd800;
      *(char *)((long)param_2 + 3) = (char)param_3;
      *(char *)((long)param_2 + 1) = (char)iVar1;
      *(byte *)(param_2 + 1) = (byte)(param_3 >> 8) & 3 | 0xdc;
      *(char *)param_2 = (char)((uint)iVar1 >> 8);
      return 4;
    }
  }
  return 0xfffffffe;
}

