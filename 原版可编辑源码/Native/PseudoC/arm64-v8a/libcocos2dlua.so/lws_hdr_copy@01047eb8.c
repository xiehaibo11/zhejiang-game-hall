
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
LAB_01047f70:
    iVar3 = -1;
  }
  else {
    uVar5 = (ulong)*(byte *)(lVar4 + (ulong)param_4 + 0x300);
                    /* try { // try from 01047ee8 to 01147ef3 has its CatchHandler @ 01047f68 */
    if (uVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      do {
        lVar1 = lVar4 + uVar5 * 8;
                    /* try { // try from 01047ef4 to 01147fbf has its CatchHandler @ 01047e88 */
        uVar5 = (ulong)*(byte *)(lVar1 + 0x22);
        iVar6 = iVar6 + (uint)*(ushort *)(lVar1 + 0x20);
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
          if (param_3 <= (int)(uint)uVar2) goto LAB_01047f70;
          strncpy(param_2,(char *)(*(long *)(lVar4 + 0x10) +
                                  (ulong)*(uint *)(lVar4 + uVar5 * 8 + 0x1c)),(ulong)uVar2);
          lVar4 = *param_1;
          lVar1 = lVar4 + uVar5 * 8;
          uVar2 = *(ushort *)(lVar1 + 0x20);
          uVar5 = (ulong)*(byte *)(lVar1 + 0x22);
          param_2 = param_2 + uVar2;
          param_3 = param_3 - (uint)uVar2;
        } while (uVar5 != 0);
                    /* catch() { ... } // from try @ 01047ee8 with catch @ 01047f68 */
        *param_2 = '\0';
        iVar3 = iVar6;
      }
    }
  }
  return iVar3;
}

