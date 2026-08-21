
uint FUN_00a0fff0(long param_1,ushort *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_3 == 0xfffe) || ((param_3 & 0xfffff800) == 0xd800)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    bVar2 = param_4 < 2;
    param_4 = param_4 - 2;
    if (bVar2) {
      return 0xfffffffe;
    }
    *param_2 = 0xfffe;
    uVar3 = 2;
    param_2 = param_2 + 1;
  }
  else {
    uVar3 = 0;
  }
  if (param_3 >> 0x10 == 0) {
    if (1 < param_4) {
      *param_2 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
      *(undefined4 *)(param_1 + 0x44) = 1;
      return uVar3 + 2;
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
      *(undefined4 *)(param_1 + 0x44) = 1;
      return uVar3 | 4;
    }
  }
  return 0xfffffffe;
}

