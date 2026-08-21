
ulong FUN_00c230f4(long *param_1,ulong *param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = 0xe;
  uVar4 = (uint)((long)*param_2 >> 0x2f);
  if (0xfffffff2 < uVar4) {
    if (uVar4 == 0xfffffff5) {
      uVar1 = *(ushort *)((*param_2 & 0x7fffffffffff) + 10);
      lVar2 = (ulong)uVar1 * 0x18;
      uVar4 = *(uint *)(*param_1 + lVar2);
      if ((uVar4 & 0xfc000000) == 0x30000000) {
        uVar5 = FUN_00c0e7d0(param_1,uVar4 & 0xffff | 0x20030000,8);
        return uVar5;
      }
      uVar3 = (uint)uVar1;
      if ((uVar4 >> 0x1c == 6) || (uVar4 >> 0x1c == 1)) {
        uVar5 = FUN_00c0e7d0(param_1,uVar3 | 0x20030000,8);
        return uVar5;
      }
      if ((*(ulong *)(*param_1 + lVar2) & 0xfffffffff4000000) == 0x404000000) {
        uVar3 = 0xe;
      }
      uVar5 = (ulong)uVar3;
    }
    else {
      uVar5 = 0x13;
      if (uVar4 != 0xfffffffb) {
        uVar3 = 3;
        if (1 < uVar4 + 3) {
          uVar3 = 0x11;
        }
        return (ulong)uVar3;
      }
    }
  }
  return uVar5;
}

