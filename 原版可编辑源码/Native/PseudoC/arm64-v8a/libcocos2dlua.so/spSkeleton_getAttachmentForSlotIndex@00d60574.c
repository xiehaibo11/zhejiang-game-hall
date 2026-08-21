
long spSkeleton_getAttachmentForSlotIndex(long *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
                    /* try { // try from 00d6057c to 00e60587 has its CatchHandler @ 00d60658 */
  if (param_2 != -1) {
                    /* try { // try from 00d6058c to 00e60597 has its CatchHandler @ 00d60654 */
                    /* try { // try from 00d605a0 to 00e605ab has its CatchHandler @ 00d6063c */
    if ((param_1[0xd] != 0) &&
       (lVar1 = spSkin_getAttachment(param_1[0xd],param_2,param_3), lVar1 != 0)) {
      return lVar1;
    }
                    /* try { // try from 00d605c8 to 00e605d3 has its CatchHandler @ 00d60638 */
    if ((*(long *)(*param_1 + 0x48) != 0) &&
       (lVar1 = spSkin_getAttachment(*(long *)(*param_1 + 0x48),param_2,param_3), lVar1 != 0)) {
      return lVar1;
    }
  }
                    /* try { // try from 00d605dc to 00e605e7 has its CatchHandler @ 00d60634 */
  return 0;
}

