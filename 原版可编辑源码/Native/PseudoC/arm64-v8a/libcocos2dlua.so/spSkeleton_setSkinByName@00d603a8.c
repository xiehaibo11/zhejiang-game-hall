
undefined8 spSkeleton_setSkinByName(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
                    /* try { // try from 00d603bc to 00e603c7 has its CatchHandler @ 00d60494 */
  if (param_2 == 0) {
    param_1[0xd] = 0;
  }
  else {
    lVar1 = spSkeletonData_findSkin(*param_1);
    if (lVar1 == 0) {
      return 0;
    }
                    /* try { // try from 00d603cc to 00e603d7 has its CatchHandler @ 00d60490 */
    if (param_1[0xd] == 0) {
      if (0 < *(int *)(param_1 + 4)) {
        uVar3 = 0;
        do {
          plVar4 = *(long **)(param_1[5] + uVar3 * 8);
                    /* try { // try from 00d6041c to 00e60427 has its CatchHandler @ 00d60470 */
                    /* try { // try from 00d60428 to 00e604a7 has its CatchHandler @ 00d60364 */
          if ((*(long *)(*plVar4 + 0x18) != 0) &&
             (lVar2 = spSkin_getAttachment(lVar1,uVar3 & 0xffffffff), lVar2 != 0)) {
            spSlot_setAttachment(plVar4,lVar2);
          }
                    /* try { // try from 00d60408 to 00e60413 has its CatchHandler @ 00d60474 */
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)*(int *)(param_1 + 4));
      }
    }
    else {
                    /* try { // try from 00d603e0 to 00e603eb has its CatchHandler @ 00d60478 */
      spSkin_attachAll(lVar1,param_1);
    }
    param_1[0xd] = lVar1;
  }
  return 1;
}

