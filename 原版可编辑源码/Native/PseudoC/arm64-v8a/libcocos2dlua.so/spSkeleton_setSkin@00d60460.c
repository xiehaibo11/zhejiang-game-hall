
void spSkeleton_setSkin(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00d6041c with catch @ 00d60470 */
                    /* catch() { ... } // from try @ 00d60408 with catch @ 00d60474 */
                    /* catch() { ... } // from try @ 00d603e0 with catch @ 00d60478 */
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
                    /* catch() { ... } // from try @ 00d603bc with catch @ 00d60494 */
      if (0 < *(int *)(param_1 + 0x20)) {
        uVar2 = 0;
        do {
          plVar3 = *(long **)(*(long *)(param_1 + 0x28) + uVar2 * 8);
          if ((*(long *)(*plVar3 + 0x18) != 0) &&
             (lVar1 = spSkin_getAttachment(param_2,uVar2 & 0xffffffff), lVar1 != 0)) {
            spSlot_setAttachment(plVar3,lVar1);
          }
                    /* try { // try from 00d604a8 to 00e6053f has its CatchHandler @ 00d604a8
                       catch() { ... } // from try @ 00d604a8 with catch @ 00d604a8
                       catch() { ... } // from try @ 00d60554 with catch @ 00d604a8
                       catch() { ... } // from try @ 00d605e8 with catch @ 00d604a8 */
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)*(int *)(param_1 + 0x20));
      }
    }
    else {
      spSkin_attachAll(param_2,param_1);
                    /* catch() { ... } // from try @ 00d603cc with catch @ 00d60490 */
    }
  }
  *(long *)(param_1 + 0x68) = param_2;
  return;
}

