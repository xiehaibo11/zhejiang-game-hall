
undefined8 FUN_00ad4ec4(long param_1,byte *param_2)

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
                    /* try { // try from 00ad4f70 to 00bd4f97 has its CatchHandler @ 00ad4f70
                       catch() { ... } // from try @ 00ad4f70 with catch @ 00ad4f70
                       catch() { ... } // from try @ 00ad4ffc with catch @ 00ad4f70 */
          *(ulong *)(lVar4 + 0x218) = uVar6;
          lVar5 = *(long *)(param_1 + 0x98);
          *(ulong *)(lVar5 + 0x188) = uVar6;
          bVar1 = *param_2;
          *(uint *)(lVar4 + 0x220) = (uint)bVar1;
          *(byte *)(lVar5 + 0x180) = bVar1;
          *(undefined2 *)(lVar5 + 400) = *(undefined2 *)(param_2 + 0x10);
          return 0;
        }
                    /* try { // try from 00ad4fb0 to 00bd4fbf has its CatchHandler @ 00ad5038 */
                    /* try { // try from 00ad4fc0 to 00bd4fe3 has its CatchHandler @ 00ad5028 */
        ERR_put_error(0x14,0x120,7,"ssl/statem/statem_dtls.c",0x1aa);
        return 0x50;
      }
      if (uVar6 == *(ulong *)(*(long *)(param_1 + 0x98) + 0x188)) {
        return 0;
      }
                    /* try { // try from 00ad4f98 to 00bd4fab has its CatchHandler @ 00ad503c */
      iVar2 = 0x1b8;
      goto LAB_00ad4f20;
    }
  }
  iVar2 = 0x1a0;
LAB_00ad4f20:
  ERR_put_error(0x14,0x120,0x98,"ssl/statem/statem_dtls.c",iVar2);
  return 0x2f;
}

