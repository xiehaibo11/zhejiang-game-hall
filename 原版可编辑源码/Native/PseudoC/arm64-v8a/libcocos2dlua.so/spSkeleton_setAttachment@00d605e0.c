
undefined8 spSkeleton_setAttachment(long *param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
                    /* try { // try from 00d605e8 to 00e606a3 has its CatchHandler @ 00d604a8 */
  lVar2 = param_1[4];
  if (0 < (int)lVar2) {
    lVar5 = param_1[5];
    uVar4 = 0;
    do {
      plVar3 = *(long **)(lVar5 + uVar4 * 8);
      iVar1 = strcmp(*(char **)(*plVar3 + 8),param_2);
      if (iVar1 == 0) {
        if (param_3 == 0) {
          lVar2 = 0;
        }
        else {
                    /* catch() { ... } // from try @ 00d6058c with catch @ 00d60654 */
                    /* catch() { ... } // from try @ 00d6057c with catch @ 00d60658 */
          if ((param_1[0xd] == 0) ||
             (lVar2 = spSkin_getAttachment(param_1[0xd],uVar4 & 0xffffffff,param_3), lVar2 == 0)) {
                    /* catch() { ... } // from try @ 00d60540 with catch @ 00d6066c */
            if (*(long *)(*param_1 + 0x48) == 0) {
              return 0;
            }
            lVar2 = spSkin_getAttachment(*(long *)(*param_1 + 0x48),uVar4 & 0xffffffff,param_3);
            if (lVar2 == 0) {
              return 0;
            }
          }
        }
        spSlot_setAttachment(plVar3,lVar2);
        return 1;
      }
      uVar4 = uVar4 + 1;
                    /* catch() { ... } // from try @ 00d605dc with catch @ 00d60634 */
                    /* catch() { ... } // from try @ 00d605c8 with catch @ 00d60638 */
    } while ((long)uVar4 < (long)(int)lVar2);
  }
                    /* catch() { ... } // from try @ 00d607c4 with catch @ 00d606a4
                       catch() { ... } // from try @ 00d609bc with catch @ 00d606a4
                       catch() { ... } // from try @ 00d60a30 with catch @ 00d606a4 */
  return 0;
}

