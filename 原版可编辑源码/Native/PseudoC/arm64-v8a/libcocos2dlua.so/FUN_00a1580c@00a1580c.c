
undefined8 FUN_00a1580c(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  bVar1 = *param_3;
  if ((bVar1 - 0x21 < 9) || ((bVar1 - 0x30 & 0xff) < 0x48)) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
                    /* try { // try from 00a15844 to 00b15847 has its CatchHandler @ 00a15948 */
    if (param_3[1] - 0x21 < 0x5e) {
      iVar2 = (uint)param_3[1] + (uint)bVar1 * 0x5e;
      uVar3 = iVar2 - 0xc3f;
      if (uVar3 < 0x582) {
        if (0x33e < uVar3) {
          return 0xffffffff;
        }
        puVar4 = (ushort *)(&DAT_01312c68 + (ulong)uVar3 * 2);
      }
      else {
        if (0xff8 < uVar3 >> 1) {
          return 0xffffffff;
        }
        puVar4 = (ushort *)(&DAT_013132e6 + (ulong)(iVar2 - 0x11c1) * 2);
      }
                    /* try { // try from 00a158a0 to 00b158bb has its CatchHandler @ 00a1594c */
      if (*puVar4 != 0xfffd) {
        *param_2 = (uint)*puVar4;
        return 2;
      }
    }
  }
  return 0xffffffff;
}

