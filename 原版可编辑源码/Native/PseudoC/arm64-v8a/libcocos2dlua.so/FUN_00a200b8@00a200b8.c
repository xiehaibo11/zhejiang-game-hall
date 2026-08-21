
undefined8 FUN_00a200b8(uint *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  bVar1 = *param_2;
                    /* try { // try from 00a200cc to 00b20117 has its CatchHandler @ 00a200cc
                       catch() { ... } // from try @ 00a200cc with catch @ 00a200cc
                       catch() { ... } // from try @ 00a2011c with catch @ 00a200cc
                       catch() { ... } // from try @ 00a2026c with catch @ 00a200cc
                       catch() { ... } // from try @ 00a20314 with catch @ 00a200cc
                       catch() { ... } // from try @ 00a203fc with catch @ 00a200cc
                       catch() { ... } // from try @ 00a20458 with catch @ 00a200cc
                       catch() { ... } // from try @ 00a204bc with catch @ 00a200cc */
  if ((bVar1 - 0x7a < 5) || (bVar1 - 0x2b < 5)) {
    if (param_3 < 2) {
                    /* try { // try from 00a2011c to 00b20257 has its CatchHandler @ 00a200cc */
      return 0xfffffffe;
    }
    if (param_2[1] - 0x21 < 0x5e) {
      iVar2 = (uint)param_2[1] + (uint)bVar1 * 0x5e;
      uVar3 = iVar2 - 0xc3f;
      if (uVar3 < 0x20ae) {
        if (0x581 < uVar3) {
          return 0xffffffff;
        }
        puVar4 = &DAT_0131b98c;
        iVar5 = -0xfeb;
                    /* try { // try from 00a20118 to 00b2011b has its CatchHandler @ 00a2050c */
      }
      else {
        puVar4 = &DAT_0131bd38;
        iVar5 = -0x2ced;
      }
      if (*(ushort *)(puVar4 + (ulong)(uint)(iVar2 + iVar5) * 2) != 0xfffd) {
        *param_1 = (uint)*(ushort *)(puVar4 + (ulong)(uint)(iVar2 + iVar5) * 2);
        return 2;
      }
    }
  }
  return 0xffffffff;
}

