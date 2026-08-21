
long spSkeleton_getAttachmentForSlotName(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = spSkeletonData_findSlotIndex(*param_1);
  if (iVar1 != -1) {
                    /* try { // try from 00d60540 to 00e60553 has its CatchHandler @ 00d6066c */
    if ((param_1[0xd] != 0) &&
       (lVar2 = spSkin_getAttachment(param_1[0xd],iVar1,param_3), lVar2 != 0)) {
      return lVar2;
    }
                    /* try { // try from 00d60554 to 00e6057b has its CatchHandler @ 00d604a8 */
    if ((*(long *)(*param_1 + 0x48) != 0) &&
       (lVar2 = spSkin_getAttachment(*(long *)(*param_1 + 0x48),iVar1,param_3), lVar2 != 0)) {
      return lVar2;
    }
  }
  return 0;
}

