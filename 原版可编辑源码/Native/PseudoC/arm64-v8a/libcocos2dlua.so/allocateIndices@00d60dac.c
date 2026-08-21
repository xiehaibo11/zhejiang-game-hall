
/* spine::SkeletonBatch::allocateIndices(unsigned int) */

long __thiscall spine::SkeletonBatch::allocateIndices(SkeletonBatch *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
                    /* try { // try from 00d60dbc to 00e60de3 has its CatchHandler @ 00d60ab0 */
  piVar3 = *(int **)(this + 0x48);
                    /* catch() { ... } // from try @ 00d60af0 with catch @ 00d60dc8 */
  iVar1 = *piVar3;
  uVar9 = *(ulong *)(piVar3 + 2);
  uVar4 = uVar9;
  if ((uint)(piVar3[1] - iVar1) < param_1) {
                    /* try { // try from 00d60de4 to 00e60e73 has its CatchHandler @ 00d60de4
                       catch() { ... } // from try @ 00d60de4 with catch @ 00d60de4
                       catch() { ... } // from try @ 00d60f84 with catch @ 00d60de4 */
    spUnsignedShortArray_ensureCapacity(piVar3,iVar1 + param_1);
    piVar3 = *(int **)(this + 0x48);
    uVar2 = *(uint *)(this + 0x20);
    uVar4 = *(ulong *)(piVar3 + 2);
    if (uVar2 != 0) {
      lVar6 = *(long *)(this + 8);
      uVar5 = 0;
      do {
        lVar7 = *(long *)(lVar6 + uVar5 * 8);
        uVar8 = *(ulong *)(lVar7 + 0x38);
        if (uVar9 <= uVar8 && uVar8 < uVar9 + (long)iVar1 * 2) {
          *(ulong *)(lVar7 + 0x38) = uVar4 + (uVar8 - uVar9);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  iVar1 = *piVar3;
  *piVar3 = iVar1 + param_1;
  return uVar4 + (long)iVar1 * 2;
}

