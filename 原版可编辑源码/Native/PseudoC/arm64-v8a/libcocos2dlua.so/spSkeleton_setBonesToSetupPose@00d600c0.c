
void spSkeleton_setBonesToSetupPose(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 00d600d0 to 00e600f7 has its CatchHandler @ 00d601c8 */
  if (0 < *(int *)(param_1 + 8)) {
    lVar4 = 0;
    do {
      spBone_setToSetupPose(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 0x38);
                    /* try { // try from 00d60104 to 00e6010b has its CatchHandler @ 00d6018c */
  if (0 < iVar1) {
    lVar2 = *(long *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(long **)(lVar2 + lVar4 * 8);
                    /* try { // try from 00d60114 to 00e6013b has its CatchHandler @ 00d601c4 */
      lVar4 = lVar4 + 1;
      plVar3[4] = *(long *)(*plVar3 + 0x20);
    } while (lVar4 < iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (0 < iVar1) {
    lVar2 = *(long *)(param_1 + 0x50);
                    /* try { // try from 00d6013c to 00e601f3 has its CatchHandler @ 00d60050 */
    lVar4 = 0;
    do {
      plVar3 = *(long **)(lVar2 + lVar4 * 8);
      lVar4 = lVar4 + 1;
      lVar5 = *(long *)(*plVar3 + 0x20);
      plVar3[5] = *(long *)(*plVar3 + 0x28);
      plVar3[4] = lVar5;
    } while (lVar4 < iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (0 < iVar1) {
    lVar2 = *(long *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(long **)(lVar2 + lVar4 * 8);
      lVar4 = lVar4 + 1;
      lVar5 = *(long *)(*plVar3 + 0x30);
      plVar3[5] = *(long *)(*plVar3 + 0x38);
      plVar3[4] = lVar5;
    } while (lVar4 < iVar1);
  }
                    /* catch() { ... } // from try @ 00d60104 with catch @ 00d6018c */
                    /* catch() { ... } // from try @ 00d600bc with catch @ 00d60190 */
                    /* catch() { ... } // from try @ 00d600a4 with catch @ 00d60194 */
  return;
}

