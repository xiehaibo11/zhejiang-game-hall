
/* dragonBones::DeformTimelineState::_onUpdateFrame() */

void __thiscall dragonBones::DeformTimelineState::_onUpdateFrame(DeformTimelineState *this)

{
  DeformTimelineState *pDVar1;
  uint uVar2;
  float fVar3;
  DeformTimelineState *pDVar4;
  DeformTimelineState *pDVar5;
  ulong uVar6;
  DeformTimelineState *pDVar7;
  DeformTimelineState *pDVar8;
  DeformTimelineState *pDVar9;
  ulong uVar10;
  long lVar11;
  DeformTimelineState *pDVar12;
  DeformTimelineState *pDVar13;
  DeformTimelineState *pDVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  TweenTimelineState::_onUpdateFrame((TweenTimelineState *)this);
  this[0xc4] = (DeformTimelineState)0x1;
  if (*(int *)(this + 0x1c) != 2) {
    *(undefined4 *)(this + 0x1c) = 0;
  }
  uVar2 = *(uint *)(this + 0xd0);
  uVar6 = (ulong)uVar2;
  if (uVar2 != 0) {
    pDVar7 = *(DeformTimelineState **)(this + 0xd8);
    pDVar8 = *(DeformTimelineState **)(this + 0xf0);
                    /* try { // try from 00d7a62c to 00e7a66b has its CatchHandler @ 00d7b9cc */
    pDVar9 = *(DeformTimelineState **)(this + 0x108);
    pDVar1 = this + 0xb0;
    uVar10 = 0;
    if (7 < uVar2) {
      lVar11 = uVar6 * 4;
      pDVar12 = pDVar9 + lVar11;
                    /* try { // try from 00d7a678 to 00e7a67f has its CatchHandler @ 00d7b8f8 */
                    /* try { // try from 00d7a680 to 00e7a68b has its CatchHandler @ 00d7b928 */
      if (((pDVar7 + lVar11 <= pDVar9 || pDVar12 <= pDVar7) &&
          (pDVar8 + lVar11 <= pDVar9 || pDVar12 <= pDVar8)) &&
         (this + 0xb1 <= pDVar9 || pDVar12 <= pDVar1)) {
        fVar3 = *(float *)pDVar1;
                    /* try { // try from 00d7a6a0 to 00e7a6af has its CatchHandler @ 00d7b9cc */
        uVar10 = uVar6 & 0xfffffff8;
        pDVar12 = pDVar7 + 0x10;
        pDVar13 = pDVar8 + 0x10;
        pDVar14 = pDVar9 + 0x10;
                    /* try { // try from 00d7a6b0 to 00e7a6bf has its CatchHandler @ 00d7b94c */
        uVar15 = uVar10;
        do {
          pDVar5 = pDVar13 + -8;
          uVar19 = *(undefined8 *)(pDVar13 + -0x10);
          uVar21 = *(undefined8 *)(pDVar13 + 8);
          uVar20 = *(undefined8 *)pDVar13;
          pDVar4 = pDVar12 + -8;
          uVar16 = *(undefined8 *)(pDVar12 + -0x10);
          uVar18 = *(undefined8 *)(pDVar12 + 8);
          uVar17 = *(undefined8 *)pDVar12;
          pDVar12 = pDVar12 + 0x20;
          pDVar13 = pDVar13 + 0x20;
          uVar15 = uVar15 - 8;
          *(ulong *)(pDVar14 + -8) =
               CONCAT44((float)((ulong)*(undefined8 *)pDVar4 >> 0x20) +
                        (float)((ulong)*(undefined8 *)pDVar5 >> 0x20) * fVar3,
                        (float)*(undefined8 *)pDVar4 + (float)*(undefined8 *)pDVar5 * fVar3);
          *(ulong *)(pDVar14 + -0x10) =
               CONCAT44((float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar19 >> 0x20) * fVar3,
                        (float)uVar16 + (float)uVar19 * fVar3);
          *(ulong *)(pDVar14 + 8) =
               CONCAT44((float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar21 >> 0x20) * fVar3,
                        (float)uVar18 + (float)uVar21 * fVar3);
          *(ulong *)pDVar14 =
               CONCAT44((float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar20 >> 0x20) * fVar3,
                        (float)uVar17 + (float)uVar20 * fVar3);
          pDVar14 = pDVar14 + 0x20;
        } while (uVar15 != 0);
        if (uVar10 == uVar6) {
          return;
        }
      }
    }
    do {
      lVar11 = uVar10 * 4;
      uVar10 = uVar10 + 1;
      *(float *)(pDVar9 + lVar11) =
           *(float *)(pDVar7 + lVar11) + *(float *)(pDVar8 + lVar11) * *(float *)pDVar1;
    } while (uVar10 < uVar6);
  }
  return;
}

