
ulong FUN_00c0e944(long *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  uVar1 = (uint)param_3 + 0xfb3ee249;
  uVar4 = (uVar1 ^ (uint)param_3) - (uVar1 >> 0x12 | uVar1 * 0x4000);
  uVar3 = *(ushort *)
           ((long)param_1 + ((ulong)((uVar4 ^ uVar1 >> 0xd) - (uVar4 >> 0x13)) & 0x7f) * 2 + 0xd8);
  while( true ) {
    if (uVar3 == 0) {
      *param_2 = lVar6;
      return 0;
    }
    lVar5 = (ulong)uVar3 * 0x18;
    lVar2 = lVar6 + lVar5;
    if ((param_3 == *(long *)(lVar2 + 0x10)) &&
       ((param_4 >> (ulong)(*(uint *)(lVar6 + lVar5) >> 0x1c) & 1) != 0)) break;
    uVar3 = *(ushort *)(lVar2 + 10);
  }
  *param_2 = lVar2;
  return (ulong)uVar3;
}

