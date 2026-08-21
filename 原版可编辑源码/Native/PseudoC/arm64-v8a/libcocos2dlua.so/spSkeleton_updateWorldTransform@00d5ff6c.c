
void spSkeleton_updateWorldTransform(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 00d5ff70 to 00e5ff77 has its CatchHandler @ 00d6002c */
                    /* try { // try from 00d5ff78 to 00e5ff87 has its CatchHandler @ 00d5fff0 */
                    /* try { // try from 00d5ff88 to 00e5ff8f has its CatchHandler @ 00d5ffec */
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar2 = *(long *)(param_1 + 0xb0);
                    /* try { // try from 00d5ff90 to 00e5ff9f has its CatchHandler @ 00d5ffac */
    lVar1 = 0;
    do {
      lVar3 = *(long *)(lVar2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
                    /* try { // try from 00d5ffa0 to 00e5ffa7 has its CatchHandler @ 00d5ffa8 */
                    /* catch() { ... } // from try @ 00d5fe30 with catch @ 00d5ffa8
                       catch() { ... } // from try @ 00d5ffa0 with catch @ 00d5ffa8
                       try { // try from 00d5ffa8 to 00e6004f has its CatchHandler @ 00d5f8b0 */
                    /* catch() { ... } // from try @ 00d5fd50 with catch @ 00d5ffac
                       catch() { ... } // from try @ 00d5ff90 with catch @ 00d5ffac */
      *(undefined8 *)(lVar3 + 0x4c) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(lVar3 + 0x44) = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x54) = *(undefined8 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar3 + 0x5c) = *(undefined4 *)(lVar3 + 0x40);
      *(undefined4 *)(lVar3 + 0x60) = 1;
    } while (lVar1 < *(int *)(param_1 + 0xa8));
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0xa0);
      switch(*(undefined4 *)(lVar3 + lVar2)) {
      case 0:
                    /* catch() { ... } // from try @ 00d5fb38 with catch @ 00d6002c
                       catch() { ... } // from try @ 00d5ff70 with catch @ 00d6002c */
        spBone_updateWorldTransform(*(undefined8 *)(lVar3 + lVar2 + 8));
                    /* catch() { ... } // from try @ 00d5fa58 with catch @ 00d60030
                       catch() { ... } // from try @ 00d5ff60 with catch @ 00d60030 */
        break;
      case 1:
        spIkConstraint_apply(*(undefined8 *)(lVar3 + lVar2 + 8));
                    /* catch() { ... } // from try @ 00d5f9bc with catch @ 00d60040
                       catch() { ... } // from try @ 00d5ff58 with catch @ 00d60040 */
        break;
      case 2:
                    /* catch() { ... } // from try @ 00d5fcb4 with catch @ 00d5ffec
                       catch() { ... } // from try @ 00d5ff88 with catch @ 00d5ffec */
        spPathConstraint_apply(*(undefined8 *)(lVar3 + lVar2 + 8));
        break;
      case 3:
        spTransformConstraint_apply(*(undefined8 *)(lVar3 + lVar2 + 8));
                    /* try { // try from 00d60050 to 00e60083 has its CatchHandler @ 00d60050
                       catch() { ... } // from try @ 00d60050 with catch @ 00d60050
                       catch() { ... } // from try @ 00d6013c with catch @ 00d60050 */
      }
                    /* catch() { ... } // from try @ 00d5fbd4 with catch @ 00d5fff0
                       catch() { ... } // from try @ 00d5ff78 with catch @ 00d5fff0 */
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar1 < *(int *)(param_1 + 0x98));
  }
  return;
}

