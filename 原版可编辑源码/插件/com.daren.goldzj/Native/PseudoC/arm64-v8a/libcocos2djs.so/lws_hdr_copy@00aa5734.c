
int lws_hdr_copy(long *param_1,char *param_2,int param_3,uint param_4)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
LAB_00aa57ec:
    iVar3 = -1;
  }
  else {
    uVar5 = (ulong)*(byte *)(lVar4 + (ulong)param_4 + 0x300);
    if (uVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      do {
        lVar1 = lVar4 + uVar5 * 8;
        uVar5 = (ulong)*(byte *)(lVar1 + 0x22);
        iVar6 = iVar6 + (uint)*(ushort *)(lVar1 + 0x20);
                    /* catch() { ... } // from try @ 00aa57e4 with catch @ 00aa577c */
      } while (uVar5 != 0);
    }
    iVar3 = -1;
    if ((lVar4 != 0) && (iVar3 = -1, iVar6 < param_3)) {
      uVar5 = (ulong)*(byte *)(lVar4 + (ulong)param_4 + 0x300);
      if (uVar5 == 0) {
        iVar3 = 0;
      }
      else {
        do {
          uVar2 = *(ushort *)(lVar4 + uVar5 * 8 + 0x20);
          if (param_3 <= (int)(uint)uVar2) goto LAB_00aa57ec;
          strncpy(param_2,(char *)(*(long *)(lVar4 + 0x10) +
                                  (ulong)*(uint *)(lVar4 + uVar5 * 8 + 0x1c)),(ulong)uVar2);
          lVar4 = *param_1;
          lVar1 = lVar4 + uVar5 * 8;
          uVar2 = *(ushort *)(lVar1 + 0x20);
          uVar5 = (ulong)*(byte *)(lVar1 + 0x22);
          param_2 = param_2 + uVar2;
          param_3 = param_3 - (uint)uVar2;
                    /* try { // try from 00aa57dc to 00ba57e3 has its CatchHandler @ 00aa5818 */
        } while (uVar5 != 0);
                    /* try { // try from 00aa57e4 to 00ba58f7 has its CatchHandler @ 00aa577c */
        *param_2 = '\0';
        iVar3 = iVar6;
      }
    }
  }
                    /* catch() { ... } // from try @ 00aa57dc with catch @ 00aa5818 */
  return iVar3;
}

