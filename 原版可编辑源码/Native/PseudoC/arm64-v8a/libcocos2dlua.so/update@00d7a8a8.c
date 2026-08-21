
/* dragonBones::DeformTimelineState::update(float) */

void __thiscall dragonBones::DeformTimelineState::update(DeformTimelineState *this,float param_1)

{
  undefined1 (*pauVar1) [16];
  void *__s;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  double dVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  lVar16 = *(long *)(*(long *)(this + 0xb8) + 0xd8);
  if (lVar16 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar16 + 0x40);
  if (lVar9 == 0) {
    return;
  }
  if (*(int *)(lVar9 + 4) != *(int *)(this + 0xc0)) {
    return;
  }
  if ((*(long *)(this + 0x58) != 0) && (*(long *)(this + 0x48) != *(long *)(lVar9 + 8))) {
    return;
  }
  TimelineState::update((TimelineState *)this,param_1);
  if ((*(int *)(this + 0x1c) == 0) && (this[0xc4] == (DeformTimelineState)0x0)) {
    return;
  }
  lVar9 = *(long *)(this + 0x68);
  if ((*(int *)(lVar9 + 100) == 0) && (*(int *)(lVar9 + 0x68) == 0)) {
    if (this[0xc4] == (DeformTimelineState)0x0) {
      return;
    }
                    /* try { // try from 00d7aa10 to 00e7aa27 has its CatchHandler @ 00d7b510 */
    this[0xc4] = (DeformTimelineState)0x0;
    if (*(long *)(this + 0x58) == 0) {
      __s = *(void **)(lVar16 + 0x10);
      uVar12 = *(long *)(lVar16 + 0x18) - (long)__s;
      uVar11 = uVar12 >> 2 & 0xffffffff;
      *(int *)(this + 0xcc) = (int)(uVar12 >> 2);
                    /* try { // try from 00d7ab5c to 00e7ab6f has its CatchHandler @ 00d7b930 */
      if (uVar11 != 0) {
        memset(__s,0,uVar11 << 2);
      }
    }
    else {
      uVar2 = *(uint *)(this + 0xcc);
      if (uVar2 != 0) {
        uVar3 = *(uint *)(this + 0xd4);
        uVar11 = (ulong)uVar3;
        lVar13 = *(long *)(lVar16 + 0x10);
                    /* try { // try from 00d7aa28 to 00e7aa3b has its CatchHandler @ 00d7b48c */
        uVar12 = 0;
        lVar9 = uVar11 * -4;
        if (uVar11 == 0) goto LAB_00d7aa68;
        do {
                    /* try { // try from 00d7aa40 to 00e7aa6f has its CatchHandler @ 00d7b894 */
          puVar14 = (undefined4 *)(*(long *)(this + 0x88) + (uVar12 + *(uint *)(this + 200)) * 4);
          while( true ) {
            lVar9 = lVar9 + 4;
            *(undefined4 *)(lVar13 + uVar12 * 4) = *puVar14;
            uVar12 = uVar12 + 1;
            if (uVar2 <= uVar12) goto LAB_00d7ab34;
            if (uVar12 < uVar11) break;
LAB_00d7aa68:
            if (uVar12 < *(uint *)(this + 0xd0) + uVar3) {
              puVar14 = (undefined4 *)(*(long *)(this + 0x108) + lVar9);
                    /* try { // try from 00d7aa80 to 00e7aa93 has its CatchHandler @ 00d7b47c */
            }
            else {
              puVar14 = (undefined4 *)
                        (*(long *)(this + 0x88) +
                        (uVar12 + ((ulong)*(uint *)(this + 200) - (ulong)*(uint *)(this + 0xd0))) *
                        4);
                    /* try { // try from 00d7aa98 to 00e7aabf has its CatchHandler @ 00d7b4fc */
            }
          }
        } while( true );
      }
    }
  }
  else {
    dVar17 = (double)*(float *)(lVar9 + 0x74) * (double)*(float *)(lVar9 + 0x74);
    if (*(long *)(this + 0x58) == 0) {
      pauVar1 = *(undefined1 (**) [16])(lVar16 + 0x10);
      uVar11 = *(long *)(lVar16 + 0x18) - (long)pauVar1;
      uVar12 = uVar11 >> 2 & 0xffffffff;
      *(int *)(this + 0xcc) = (int)(uVar11 >> 2);
      if (uVar12 != 0) {
                    /* try { // try from 00d7a9f8 to 00e7aa0b has its CatchHandler @ 00d7b934 */
        if (uVar12 < 4) {
          lVar13 = 0;
        }
        else {
          uVar11 = uVar11 >> 2 & 3;
          lVar13 = uVar12 - uVar11;
          lVar9 = lVar13;
          pauVar15 = pauVar1;
          do {
            auVar7 = *pauVar15;
            lVar9 = lVar9 + -4;
                    /* try { // try from 00d7aad0 to 00e7ab0f has its CatchHandler @ 00d7b694 */
            auVar19 = NEON_ext(auVar7,auVar7,8,1);
            dVar5 = dVar17 * (double)(0.0 - auVar7._0_4_) + (double)auVar7._0_4_;
            dVar6 = dVar17 * (double)(0.0 - auVar7._4_4_) + (double)auVar7._4_4_;
            auVar4._8_4_ = SUB84(dVar6,0);
            auVar4._0_8_ = dVar5;
            auVar4._12_4_ = (int)((ulong)dVar6 >> 0x20);
            *(ulong *)(*pauVar15 + 8) =
                 CONCAT44((float)(dVar17 * (double)(0.0 - auVar7._12_4_) + (double)auVar19._4_4_),
                          (float)(dVar17 * (double)(0.0 - auVar7._8_4_) + (double)auVar19._0_4_));
            *(ulong *)*pauVar15 = CONCAT44((float)auVar4._8_8_,(float)dVar5);
            pauVar15 = pauVar15 + 1;
          } while (lVar9 != 0);
          if (uVar11 == 0) goto LAB_00d7ab34;
        }
        lVar9 = lVar13 - uVar12;
        pfVar10 = (float *)(*pauVar1 + lVar13 * 4);
        do {
          bVar8 = lVar9 != -1;
          lVar9 = lVar9 + 1;
          *pfVar10 = (float)(dVar17 * (double)(0.0 - *pfVar10) + (double)*pfVar10);
          pfVar10 = pfVar10 + 1;
        } while (bVar8);
      }
    }
    else {
      uVar2 = *(uint *)(this + 0xcc);
      if (uVar2 != 0) {
        uVar3 = *(uint *)(this + 0xd4);
        uVar11 = (ulong)uVar3;
        uVar12 = 0;
        lVar9 = -uVar11;
        if (uVar11 == 0) goto LAB_00d7a998;
        do {
          fVar18 = *(float *)(*(long *)(this + 0x88) + (uVar12 + *(uint *)(this + 200)) * 4);
          pfVar10 = (float *)(*(long *)(lVar16 + 0x10) + uVar12 * 4);
          while( true ) {
            uVar12 = uVar12 + 1;
            *pfVar10 = (float)(dVar17 * (double)(fVar18 - *pfVar10) + (double)*pfVar10);
            if (uVar2 <= uVar12) goto LAB_00d7ab34;
            lVar9 = uVar12 - uVar11;
            if (uVar12 < uVar11) break;
LAB_00d7a998:
            if (uVar12 < *(uint *)(this + 0xd0) + uVar3) {
              fVar18 = *(float *)(*(long *)(this + 0x108) + lVar9 * 4);
              pfVar10 = (float *)(*(long *)(lVar16 + 0x10) + uVar12 * 4);
            }
            else {
              fVar18 = *(float *)(*(long *)(this + 0x88) +
                                 ((uVar12 - *(uint *)(this + 0xd0)) + (ulong)*(uint *)(this + 200))
                                 * 4);
              pfVar10 = (float *)(*(long *)(lVar16 + 0x10) + uVar12 * 4);
            }
          }
        } while( true );
      }
    }
  }
LAB_00d7ab34:
  *(undefined1 *)(lVar16 + 0xd) = 1;
  return;
}

