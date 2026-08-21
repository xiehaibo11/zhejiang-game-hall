
undefined8 FUN_00ae3d78(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_2 + 8);
  if ((ulong)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18)) <= uVar6) {
    uVar3 = *(ulong *)(param_1 + 0x1f8);
    if (uVar3 < 0x454d) {
      uVar3 = 0x454c;
    }
    if (uVar6 <= uVar3) {
      if (*(long *)(*(long *)(param_1 + 0x98) + 0x198) == 0) {
        iVar2 = BUF_MEM_grow_clean(*(BUF_MEM **)(param_1 + 0x78),uVar6 + 0xc);
        if (iVar2 != 0) {
          lVar4 = *(long *)(param_1 + 0x90);
          *(ulong *)(lVar4 + 0x218) = uVar6;
          lVar5 = *(long *)(param_1 + 0x98);
          *(ulong *)(lVar5 + 0x188) = uVar6;
          bVar1 = *param_2;
          *(uint *)(lVar4 + 0x220) = (uint)bVar1;
          *(byte *)(lVar5 + 0x180) = bVar1;
          *(undefined2 *)(lVar5 + 400) = *(undefined2 *)(param_2 + 0x10);
          return 0;
        }
                    /* catch() { ... } // from try @ 00ae3dd0 with catch @ 00ae3e64 */
                    /* catch() { ... } // from try @ 00ae3d58 with catch @ 00ae3e68 */
        ERR_put_error(0x14,0x120,7,"ssl/statem/statem_dtls.c",0x1aa);
        return 0x50;
                    /* catch() { ... } // from try @ 00ae3c78 with catch @ 00ae3e80 */
      }
      if (uVar6 == *(ulong *)(*(long *)(param_1 + 0x98) + 0x188)) {
        return 0;
      }
                    /* try { // try from 00ae3e54 to 00be3e5b has its CatchHandler @ 00ae3e60 */
                    /* try { // try from 00ae3e5c to 00be3e9b has its CatchHandler @ 00ae3bfc */
      iVar2 = 0x1b8;
                    /* catch() { ... } // from try @ 00ae3e54 with catch @ 00ae3e60 */
      goto LAB_00ae3dd4;
    }
  }
                    /* try { // try from 00ae3dd0 to 00be3e0b has its CatchHandler @ 00ae3e64 */
  iVar2 = 0x1a0;
LAB_00ae3dd4:
  ERR_put_error(0x14,0x120,0x98,"ssl/statem/statem_dtls.c",iVar2);
  return 0x2f;
}

