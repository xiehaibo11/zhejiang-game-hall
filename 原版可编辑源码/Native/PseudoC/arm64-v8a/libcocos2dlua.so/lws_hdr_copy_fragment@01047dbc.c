
ulong lws_hdr_copy_fragment(long *param_1,void *param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  uVar4 = (ulong)*(byte *)(lVar3 + (ulong)param_4 + 0x300);
  if (uVar4 == 0) {
                    /* try { // try from 01047e88 to 01147ee7 has its CatchHandler @ 01047e88
                       catch() { ... } // from try @ 01047e88 with catch @ 01047e88
                       catch() { ... } // from try @ 01047ef4 with catch @ 01047e88 */
    return 0xffffffff;
  }
  if (0 < param_5) {
    iVar2 = 0;
    do {
      uVar4 = (ulong)*(byte *)(lVar3 + uVar4 * 8 + 0x22);
      if (uVar4 == 0) {
        return 0xffffffff;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_5);
  }
  uVar1 = *(ushort *)(lVar3 + uVar4 * 8 + 0x20);
  if ((int)(uint)uVar1 < param_3) {
    lVar5 = uVar4 * 8;
    memcpy(param_2,(void *)(*(long *)(lVar3 + 0x10) + (ulong)*(uint *)(lVar3 + lVar5 + 0x1c)),
           (ulong)uVar1);
    *(undefined1 *)((long)param_2 + (ulong)*(ushort *)(*param_1 + lVar5 + 0x20)) = 0;
    return (ulong)*(ushort *)(*param_1 + lVar5 + 0x20);
  }
  return 0xffffffff;
}

