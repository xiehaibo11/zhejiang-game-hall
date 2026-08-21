
/* dragonBones::SlotColorTimelineState::update(float) */

void __thiscall
dragonBones::SlotColorTimelineState::update(SlotColorTimelineState *this,float param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  
  TimelineState::update((TimelineState *)this,param_1);
  if ((*(int *)(this + 0x1c) == 0) && (this[0xc0] == (SlotColorTimelineState)0x0)) {
    return;
  }
  lVar3 = *(long *)(this + 0x68);
  lVar1 = *(long *)(this + 0xb8);
  if ((*(int *)(lVar3 + 100) == 0) && (*(int *)(lVar3 + 0x68) == 0)) {
    if (this[0xc0] == (SlotColorTimelineState)0x0) {
      return;
    }
    pfVar2 = *(float **)(this + 0xd8);
    this[0xc0] = (SlotColorTimelineState)0x0;
                    /* try { // try from 00d7a280 to 00e7a28f has its CatchHandler @ 00d7b9fc */
                    /* try { // try from 00d7a290 to 00e7a29f has its CatchHandler @ 00d7b9b4 */
    if (((*(float *)(lVar1 + 0xa4) == *pfVar2) && (*(float *)(lVar1 + 0xa8) == pfVar2[1])) &&
       ((*(float *)(lVar1 + 0xac) == pfVar2[2] &&
        ((((*(float *)(lVar1 + 0xb0) == pfVar2[3] && (pfVar2[4] == (float)*(int *)(lVar1 + 0xb4)))
          && (pfVar2[5] == (float)*(int *)(lVar1 + 0xb8))) &&
         ((pfVar2[6] == (float)*(int *)(lVar1 + 0xbc) &&
          (pfVar2[7] == (float)*(int *)(lVar1 + 0xc0))))))))) {
      return;
    }
    *(float *)(lVar1 + 0xa4) = *pfVar2;
    *(float *)(lVar1 + 0xa8) = pfVar2[1];
    *(float *)(lVar1 + 0xac) = pfVar2[2];
    *(float *)(lVar1 + 0xb0) = pfVar2[3];
    uVar5 = CONCAT44((int)(float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20),
                     (int)(float)*(undefined8 *)(pfVar2 + 4));
    uVar6 = CONCAT44((int)(float)((ulong)*(undefined8 *)(pfVar2 + 6) >> 0x20),
                     (int)(float)*(undefined8 *)(pfVar2 + 6));
                    /* try { // try from 00d7a32c to 00e7a333 has its CatchHandler @ 00d7b978 */
  }
  else {
    pfVar2 = *(float **)(this + 0xd8);
    fVar7 = *(float *)(lVar1 + 0xa4);
    fVar4 = *(float *)(lVar1 + 0xa8);
                    /* try { // try from 00d7a104 to 00e7a1cb has its CatchHandler @ 00d7a104
                       catch() { ... } // from try @ 00d7a104 with catch @ 00d7a104
                       catch() { ... } // from try @ 00d7b2a4 with catch @ 00d7a104 */
    if (((fVar7 == *pfVar2) &&
        (((fVar4 == pfVar2[1] && (*(float *)(lVar1 + 0xac) == pfVar2[2])) &&
         (*(float *)(lVar1 + 0xb0) == pfVar2[3])))) &&
       ((((pfVar2[4] == (float)*(int *)(lVar1 + 0xb4) &&
          (pfVar2[5] == (float)*(int *)(lVar1 + 0xb8))) &&
         (pfVar2[6] == (float)*(int *)(lVar1 + 0xbc))) &&
        (pfVar2[7] == (float)*(int *)(lVar1 + 0xc0))))) {
      return;
    }
    dVar11 = (double)*(float *)(lVar3 + 0x74) * (double)*(float *)(lVar3 + 0x74);
    *(float *)(lVar1 + 0xa4) = (float)(dVar11 * (double)(*pfVar2 - fVar7) + (double)fVar7);
    *(float *)(lVar1 + 0xa8) = (float)(dVar11 * (double)(pfVar2[1] - fVar4) + (double)fVar4);
                    /* try { // try from 00d7a1cc to 00e7a1d3 has its CatchHandler @ 00d7b9b8 */
    *(float *)(lVar1 + 0xac) =
         (float)(dVar11 * (double)(pfVar2[2] - *(float *)(lVar1 + 0xac)) +
                (double)*(float *)(lVar1 + 0xac));
    auVar9 = *(undefined1 (*) [16])(lVar1 + 0xb4);
    *(float *)(lVar1 + 0xb0) =
         (float)(dVar11 * (double)(pfVar2[3] - *(float *)(lVar1 + 0xb0)) +
                (double)*(float *)(lVar1 + 0xb0));
                    /* try { // try from 00d7a20c to 00e7a24b has its CatchHandler @ 00d7b9fc */
    auVar10 = NEON_scvtf(auVar9,4);
    auVar12._0_8_ = (long)auVar9._0_4_;
    auVar12._8_8_ = (long)auVar9._4_4_;
    auVar8._0_8_ = (long)auVar9._8_4_;
    auVar8._8_8_ = (long)auVar9._12_4_;
    auVar12 = NEON_scvtf(auVar12,8);
    auVar9 = NEON_scvtf(auVar8,8);
    uVar5 = CONCAT44((int)(long)((double)((float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20) -
                                         auVar10._4_4_) * dVar11 + auVar12._8_8_),
                     (int)(long)((double)((float)*(undefined8 *)(pfVar2 + 4) - auVar10._0_4_) *
                                 dVar11 + auVar12._0_8_));
    uVar6 = CONCAT44((int)(long)((double)((float)((ulong)*(undefined8 *)(pfVar2 + 6) >> 0x20) -
                                         auVar10._12_4_) * dVar11 + auVar9._8_8_),
                     (int)(long)((double)((float)*(undefined8 *)(pfVar2 + 6) - auVar10._8_4_) *
                                 dVar11 + auVar9._0_8_));
  }
  *(undefined8 *)(lVar1 + 0xbc) = uVar6;
  *(undefined8 *)(lVar1 + 0xb4) = uVar5;
  *(undefined1 *)(lVar1 + 0x90) = 1;
                    /* try { // try from 00d7a258 to 00e7a25f has its CatchHandler @ 00d7b904 */
                    /* try { // try from 00d7a260 to 00e7a26b has its CatchHandler @ 00d7b934 */
  return;
}

