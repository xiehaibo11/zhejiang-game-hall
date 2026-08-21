
undefined4
_clip(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
     ,undefined8 param_6,long param_7,int *param_8,int *param_9)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_a4;
  
                    /* try { // try from 00d673ec to 00e673f7 has its CatchHandler @ 00d67670 */
                    /* try { // try from 00d673f8 to 00e67403 has its CatchHandler @ 00d67614 */
  piVar10 = *(int **)(param_7 + 0x30);
  piVar5 = param_9;
  if (*param_8 % 4 < 2) {
    piVar10 = param_9;
    piVar5 = *(int **)(param_7 + 0x30);
  }
  spFloatArray_clear(piVar5);
  spFloatArray_add(param_1,piVar5);
  spFloatArray_add(param_2,piVar5);
  spFloatArray_add(param_3,piVar5);
  spFloatArray_add(param_4,piVar5);
  spFloatArray_add(param_5,piVar5);
  spFloatArray_add(param_6,piVar5);
  spFloatArray_add(param_1,piVar5);
  spFloatArray_add(param_2,piVar5);
                    /* try { // try from 00d674a4 to 00e674af has its CatchHandler @ 00d675f0 */
  spFloatArray_clear(piVar10);
  iVar14 = *piVar5 + -2;
  if (0 < iVar14) {
    pfVar11 = *(float **)(param_8 + 2);
    iVar2 = *param_8;
    uVar9 = 0;
                    /* try { // try from 00d674c8 to 00e674d3 has its CatchHandler @ 00d67670 */
    fVar25 = *pfVar11;
    local_a4 = pfVar11[1];
    fVar26 = pfVar11[2];
    fVar24 = pfVar11[3];
    fVar27 = local_a4 - fVar24;
    fVar28 = fVar25 - fVar26;
    uVar4 = 2;
    uVar13 = 0;
    do {
      piVar8 = piVar5;
      uVar6 = uVar4;
                    /* try { // try from 00d674ec to 00e674f7 has its CatchHandler @ 00d675f8 */
      fVar15 = fVar26 - fVar25;
      lVar12 = *(long *)(piVar8 + 2);
      iVar3 = *piVar10;
      lVar7 = 0;
      fVar16 = fVar24 - local_a4;
                    /* try { // try from 00d67514 to 00e67517 has its CatchHandler @ 00d67694 */
      do {
        while( true ) {
          pfVar1 = (float *)(lVar12 + lVar7 * 4);
          fVar23 = pfVar1[2];
          fVar22 = pfVar1[3];
          fVar19 = *pfVar1;
          fVar20 = pfVar1[1];
          lVar7 = lVar7 + 2;
          fVar21 = fVar28 * (fVar22 - fVar24) - fVar27 * (fVar23 - fVar26);
          fVar18 = fVar22 - fVar20;
                    /* try { // try from 00d675d8 to 00e675df has its CatchHandler @ 00d675ec */
          fVar17 = fVar23 - fVar19;
                    /* try { // try from 00d675e0 to 00e67743 has its CatchHandler @ 00d6703c */
          if (fVar28 * (fVar20 - fVar24) - fVar27 * (fVar19 - fVar26) <= 0.0) break;
                    /* catch() { ... } // from try @ 00d675d8 with catch @ 00d675ec */
          if (fVar21 <= 0.0) {
            fVar17 = ((local_a4 - fVar20) * fVar17 - (fVar25 - fVar19) * fVar18) /
                     (fVar15 * fVar18 - fVar16 * fVar17);
            spFloatArray_add(fVar25 + fVar15 * fVar17,piVar10);
                    /* catch() { ... } // from try @ 00d67258 with catch @ 00d67650 */
            fVar22 = local_a4 + fVar16 * fVar17;
                    /* catch() { ... } // from try @ 00d6726c with catch @ 00d67654 */
LAB_00d6757c:
            uVar9 = 1;
          }
          else {
                    /* catch() { ... } // from try @ 00d674a4 with catch @ 00d675f0 */
                    /* catch() { ... } // from try @ 00d67530 with catch @ 00d675f4 */
                    /* catch() { ... } // from try @ 00d674ec with catch @ 00d675f8 */
            spFloatArray_add(fVar23,piVar10);
                    /* catch() { ... } // from try @ 00d672fc with catch @ 00d675fc */
          }
          spFloatArray_add(fVar22,piVar10);
          if (iVar14 <= (int)lVar7) goto LAB_00d67658;
        }
                    /* catch() { ... } // from try @ 00d6729c with catch @ 00d67600 */
        if (0.0 < fVar21) {
                    /* try { // try from 00d67530 to 00e6753b has its CatchHandler @ 00d675f4 */
          fVar17 = ((local_a4 - fVar20) * fVar17 - (fVar25 - fVar19) * fVar18) /
                   (fVar15 * fVar18 - fVar16 * fVar17);
                    /* try { // try from 00d67540 to 00e67547 has its CatchHandler @ 00d67610 */
          spFloatArray_add(fVar25 + fVar15 * fVar17,piVar10);
                    /* try { // try from 00d67558 to 00e6756b has its CatchHandler @ 00d67690 */
          spFloatArray_add(local_a4 + fVar16 * fVar17,piVar10);
                    /* try { // try from 00d67578 to 00e67587 has its CatchHandler @ 00d67610 */
          spFloatArray_add(fVar23,piVar10);
          goto LAB_00d6757c;
        }
        uVar9 = 1;
                    /* catch() { ... } // from try @ 00d67540 with catch @ 00d67610
                       catch() { ... } // from try @ 00d67578 with catch @ 00d67610 */
      } while ((int)lVar7 < iVar14);
LAB_00d67658:
                    /* catch() { ... } // from try @ 00d67244 with catch @ 00d67658 */
                    /* catch() { ... } // from try @ 00d6723c with catch @ 00d67660 */
      if (iVar3 == *piVar10) break;
                    /* catch() { ... } // from try @ 00d67398 with catch @ 00d67668 */
                    /* catch() { ... } // from try @ 00d67104 with catch @ 00d6766c */
                    /* catch() { ... } // from try @ 00d673ec with catch @ 00d67670
                       catch() { ... } // from try @ 00d67434 with catch @ 00d67670
                       catch() { ... } // from try @ 00d674c8 with catch @ 00d67670 */
      spFloatArray_add(**(undefined4 **)(piVar10 + 2),piVar10);
      spFloatArray_add(*(undefined4 *)(*(long *)(piVar10 + 2) + 4),piVar10);
      if (uVar13 == iVar2 - 4) {
                    /* catch() { ... } // from try @ 00d671a0 with catch @ 00d67720 */
        if (piVar10 != param_9) {
          spFloatArray_clear(param_9);
                    /* try { // try from 00d67744 to 00e67783 has its CatchHandler @ 00d67744
                       catch() { ... } // from try @ 00d67744 with catch @ 00d67744
                       catch() { ... } // from try @ 00d677c4 with catch @ 00d67744 */
          spFloatArray_addAllValues(param_9,*(undefined8 *)(piVar10 + 2),0,*piVar10 + -2);
          return uVar9;
        }
        spFloatArray_setSize(param_9,*param_9 + -2);
        return uVar9;
      }
                    /* catch() { ... } // from try @ 00d67558 with catch @ 00d67690 */
                    /* catch() { ... } // from try @ 00d67514 with catch @ 00d67694 */
      spFloatArray_clear(piVar8);
                    /* catch() { ... } // from try @ 00d67368 with catch @ 00d67698 */
                    /* catch() { ... } // from try @ 00d67380 with catch @ 00d6769c */
      local_a4 = *(float *)((long)pfVar11 + (uVar6 * 4 | 4));
      fVar26 = pfVar11[uVar6 + 2];
      fVar25 = pfVar11[uVar6];
      fVar24 = (pfVar11 + uVar6)[3];
      iVar14 = *piVar10 + -2;
      fVar28 = fVar25 - fVar26;
      fVar27 = local_a4 - fVar24;
      uVar4 = uVar6 + 2;
      piVar5 = piVar10;
      piVar10 = piVar8;
      uVar13 = uVar6;
    } while (0 < iVar14);
  }
  spFloatArray_clear(param_9);
                    /* catch() { ... } // from try @ 00d67224 with catch @ 00d676ec */
                    /* catch() { ... } // from try @ 00d6720c with catch @ 00d676f4 */
                    /* catch() { ... } // from try @ 00d671f4 with catch @ 00d67704 */
                    /* catch() { ... } // from try @ 00d67120 with catch @ 00d67708 */
  return 1;
}

