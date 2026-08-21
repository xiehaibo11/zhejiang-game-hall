
/* cocos2d::Sprite::updatePoly() */

void __thiscall cocos2d::Sprite::updatePoly(Sprite *this)

{
  V3F_C4B_T2F_Quad *pVVar1;
  int iVar2;
  Sprite SVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  Rect *pRVar8;
  Rect *pRVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  Rect aRStack_260 [16];
  Rect aRStack_250 [16];
  Rect aRStack_240 [16];
  Rect aRStack_230 [16];
  Rect aRStack_220 [16];
  Rect aRStack_210 [16];
  Rect aRStack_200 [16];
  Rect aRStack_1f0 [16];
  Rect aRStack_1e0 [16];
  Rect aRStack_1d0 [16];
  Rect aRStack_1c0 [16];
  Rect aRStack_1b0 [16];
  Rect aRStack_1a0 [16];
  Rect aRStack_190 [16];
  Rect aRStack_180 [16];
  Rect aRStack_170 [16];
  Rect aRStack_160 [16];
  Rect aRStack_150 [16];
  Rect aRStack_140 [16];
  Rect aRStack_130 [16];
  Rect aRStack_120 [16];
  Rect aRStack_110 [16];
  Rect aRStack_100 [16];
  Rect aRStack_f0 [16];
  Rect aRStack_e0 [16];
  Rect aRStack_d0 [16];
  Rect aRStack_c0 [16];
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(this + 0x42c);
  if (iVar2 != 3) {
    if (iVar2 == 2) {
      fVar15 = *(float *)(this + 0x41c);
      fVar16 = *(float *)(this + 0x420);
      fVar25 = *(float *)(this + 0x408);
      fVar19 = *(float *)(this + 0x40c);
      fVar14 = *(float *)(this + 0x410);
                    /* try { // try from 00f3f418 to 0103f523 has its CatchHandler @ 00f3e884 */
      fVar17 = *(float *)(this + 0x424) + fVar15;
      fVar13 = *(float *)(this + 0x428) + fVar16;
      fVar12 = *(float *)(this + 0x414);
      if (this[0x418] != (Sprite)0x0) {
        fVar18 = 1.0 - fVar15;
        fVar15 = fVar16;
        fVar16 = 1.0 - fVar17;
        fVar12 = fVar14;
        fVar17 = fVar13;
        fVar13 = fVar18;
        fVar14 = *(float *)(this + 0x414);
      }
      fVar22 = fVar15 * fVar14;
                    /* catch() { ... } // from try @ 00f3ef00 with catch @ 00f3f4f4 */
                    /* catch() { ... } // from try @ 00f3efe4 with catch @ 00f3f4f8 */
      fVar20 = fVar16 * fVar12;
                    /* catch() { ... } // from try @ 00f3ee2c with catch @ 00f3f4fc */
                    /* catch() { ... } // from try @ 00f3ed58 with catch @ 00f3f500 */
                    /* catch() { ... } // from try @ 00f3ed24 with catch @ 00f3f504
                       catch() { ... } // from try @ 00f3edf8 with catch @ 00f3f504
                       catch() { ... } // from try @ 00f3eecc with catch @ 00f3f504
                       catch() { ... } // from try @ 00f3efb0 with catch @ 00f3f504
                       catch() { ... } // from try @ 00f3f084 with catch @ 00f3f504
                       catch() { ... } // from try @ 00f3f158 with catch @ 00f3f504
                       catch() { ... } // from try @ 00f3f228 with catch @ 00f3f504
                       catch() { ... } // from try @ 00f3f288 with catch @ 00f3f504 */
      fVar21 = (fVar17 - fVar15) * fVar14;
                    /* catch() { ... } // from try @ 00f3ebd4 with catch @ 00f3f508 */
      fVar18 = (fVar13 - fVar16) * fVar12;
      fVar15 = (1.0 - fVar13) * fVar12;
      fVar16 = fVar19 + fVar15;
      fVar23 = fVar18 + fVar16;
      fVar13 = (1.0 - fVar17) * fVar14;
      fVar17 = fVar25 + fVar22;
      fVar24 = fVar21 + fVar17;
      Rect::Rect(aRStack_140,fVar25,fVar23,fVar22,fVar20);
      Rect::Rect(aRStack_130,fVar17,fVar23,fVar21,fVar20);
      Rect::Rect(aRStack_120,fVar24,fVar23,fVar13,fVar20);
      Rect::Rect(aRStack_110,fVar25,fVar16,fVar22,fVar18);
      Rect::Rect(aRStack_100,fVar17,fVar16,fVar21,fVar18);
      Rect::Rect(aRStack_f0,fVar24,fVar16,fVar13,fVar18);
      Rect::Rect(aRStack_e0,fVar25,fVar19,fVar22,fVar15);
      Rect::Rect(aRStack_d0,fVar17,fVar19,fVar21,fVar15);
      Rect::Rect(aRStack_c0,fVar24,fVar19,fVar13,fVar15);
      Rect::Rect(aRStack_1d0,fVar25,fVar19,fVar15,fVar22);
      Rect::Rect(aRStack_1c0,fVar25,fVar16,fVar18,fVar22);
      Rect::Rect(aRStack_1b0,fVar25,fVar23,fVar20,fVar22);
      Rect::Rect(aRStack_1a0,fVar17,fVar19,fVar15,fVar21);
      Rect::Rect(aRStack_190,fVar17,fVar16,fVar18,fVar21);
      Rect::Rect(aRStack_180,fVar17,fVar23,fVar20,fVar21);
      Rect::Rect(aRStack_170,fVar24,fVar19,fVar15,fVar13);
      Rect::Rect(aRStack_160,fVar24,fVar16,fVar18,fVar13);
      Rect::Rect(aRStack_150,fVar24,fVar23,fVar20,fVar13);
      fVar16 = *(float *)(this + 0x41c);
      fVar17 = *(float *)(this + 0x420);
      fVar13 = *(float *)(this + 0x84);
      bVar5 = this[0x418] != (Sprite)0x0;
      fVar15 = fVar14;
      if (bVar5) {
        fVar15 = fVar12;
      }
      fVar19 = *(float *)(this + 0x80) * 0.5;
      if (bVar5) {
        fVar12 = fVar14;
      }
      fVar25 = (1.0 - (fVar16 + *(float *)(this + 0x424))) * fVar15;
      fVar14 = (1.0 - (fVar17 + *(float *)(this + 0x428))) * fVar12;
      pRVar8 = aRStack_140;
      if (bVar5) {
        pRVar8 = aRStack_1d0;
      }
      fVar18 = fVar19;
      if (fVar16 * fVar15 + fVar25 <= *(float *)(this + 0x80)) {
        fVar19 = fVar25;
        fVar18 = fVar16 * fVar15;
      }
      bVar5 = fVar17 * fVar12 + fVar14 <= fVar13;
      fVar25 = fVar13 * 0.5;
      if (bVar5) {
        fVar25 = fVar14;
      }
      fVar14 = fVar13 * 0.5;
      if (bVar5) {
        fVar14 = fVar17 * fVar12;
      }
      fVar13 = fVar14;
      if (this[0x50a] != (Sprite)0x0) {
        fVar13 = fVar25;
      }
      fVar20 = 0.0;
      fVar21 = *(float *)(this + 0x434) * ((fVar17 + *(float *)(this + 0x428)) - fVar17) * fVar12;
      fVar13 = fVar13 + 0.0;
      fVar17 = fVar21 + fVar13;
      fVar12 = fVar20;
      if (this[0x50a] != (Sprite)0x0) {
        fVar17 = 0.0;
        fVar12 = fVar21 + fVar13;
      }
      fVar22 = fVar18;
      if (this[0x509] != (Sprite)0x0) {
        fVar22 = fVar19;
      }
      fVar16 = *(float *)(this + 0x430) * ((fVar16 + *(float *)(this + 0x424)) - fVar16) * fVar15;
      fVar22 = fVar22 + 0.0;
      fVar15 = fVar16 + fVar22;
      if (this[0x509] != (Sprite)0x0) {
        fVar15 = fVar20;
        fVar20 = fVar16 + fVar22;
      }
      pRVar9 = aRStack_260;
      Rect::Rect(aRStack_260,fVar20,fVar12,fVar18,fVar14);
      Rect::Rect(aRStack_250,fVar22,fVar12,fVar16,fVar14);
      Rect::Rect(aRStack_240,fVar15,fVar12,fVar19,fVar14);
      Rect::Rect(aRStack_230,fVar20,fVar13,fVar18,fVar21);
      Rect::Rect(aRStack_220,fVar22,fVar13,fVar16,fVar21);
      Rect::Rect(aRStack_210,fVar15,fVar13,fVar19,fVar21);
      Rect::Rect(aRStack_200,fVar20,fVar17,fVar18,fVar25);
      Rect::Rect(aRStack_1f0,fVar22,fVar17,fVar16,fVar25);
      Rect::Rect(aRStack_1e0,fVar15,fVar17,fVar19,fVar25);
      uStack_2b8 = *(undefined8 *)(this + 0x458);
      local_2c0 = *(undefined8 *)(this + 0x450);
      uStack_2a8 = *(undefined8 *)(this + 0x468);
      local_2b0 = *(undefined8 *)(this + 0x460);
      lVar11 = 0;
      local_268 = *(undefined8 *)(this + 0x4a8);
      uStack_270 = *(undefined8 *)(this + 0x4a0);
      uStack_278 = *(undefined8 *)(this + 0x498);
      local_280 = *(undefined8 *)(this + 0x490);
      uStack_288 = *(undefined8 *)(this + 0x488);
      local_290 = *(undefined8 *)(this + 0x480);
      uStack_298 = *(undefined8 *)(this + 0x478);
      local_2a0 = *(undefined8 *)(this + 0x470);
      do {
        (**(code **)(*(long *)this + 0x638))(this,pRVar8,&local_2c0);
        (**(code **)(*(long *)this + 0x640))(this,pRVar9,&local_2c0);
        uVar10 = (uint)lVar11;
        if ((uVar10 < 9) && ((1 << (ulong)(uVar10 & 0x1f) & 0x145U) != 0)) {
          if (this[0x509] == (Sprite)0x0) {
            SVar3 = this[0x50a];
          }
          else if ((uVar10 & 0xff) * -0x55555555 < 0x55555556) {
            uVar10 = uVar10 + 2;
            SVar3 = this[0x50a];
          }
          else {
            uVar10 = uVar10 - 2;
            SVar3 = this[0x50a];
          }
          if (SVar3 != (Sprite)0x0) {
            if ((int)uVar10 < 3) {
              uVar10 = uVar10 + 6;
            }
            else {
              uVar10 = uVar10 - 6;
            }
          }
          iVar2 = (int)(uVar10 << 2) / 3;
          lVar7 = *(long *)(this + 0x4b0) + (long)iVar2 * 0x18;
          *(undefined8 *)(lVar7 + 0x88) = local_280;
          *(undefined8 *)(lVar7 + 0x80) = uStack_288;
          *(undefined8 *)(lVar7 + 0x78) = local_290;
          lVar7 = *(long *)(this + 0x4b0) + (long)iVar2 * 0x18;
          *(undefined8 *)(lVar7 + 0x28) = local_268;
          *(undefined8 *)(lVar7 + 0x20) = uStack_270;
          *(undefined8 *)(lVar7 + 0x18) = uStack_278;
          lVar7 = *(long *)(this + 0x4b0) + (long)iVar2 * 0x18;
          *(undefined8 *)(lVar7 + 0x70) = local_2b0;
          *(undefined8 *)(lVar7 + 0x68) = uStack_2b8;
          *(undefined8 *)(lVar7 + 0x60) = local_2c0;
          puVar6 = (undefined8 *)(*(long *)(this + 0x4b0) + (long)iVar2 * 0x18);
          puVar6[2] = uStack_298;
          puVar6[1] = local_2a0;
          *puVar6 = uStack_2a8;
        }
        lVar11 = lVar11 + 1;
        pRVar9 = pRVar9 + 0x10;
        pRVar8 = pRVar8 + 0x10;
      } while (lVar11 != 9);
      uStack_2d8 = *(undefined8 *)(this + 0x4b8);
      local_2e0 = *(undefined8 *)(this + 0x4b0);
      local_2d0 = 0x3600000010;
      PolygonInfo::setTriangles((PolygonInfo *)(this + 0x4c0),(Triangles *)&local_2e0);
      goto LAB_00f3fac8;
    }
    if (iVar2 != 0) goto LAB_00f3fac8;
  }
  Rect::Rect(aRStack_140);
  if (this[0x52c] == (Sprite)0x0) {
    fVar15 = *(float *)(this + 0x410);
    fVar16 = *(float *)(this + 0x414);
    fVar12 = (*(float *)(this + 0x80) - *(float *)(this + 0x438)) * 0.5;
    fVar14 = (*(float *)(this + 0x84) - *(float *)(this + 0x43c)) * 0.5;
  }
  else {
    fVar15 = *(float *)(this + 0x410) * *(float *)(this + 0x430);
    fVar16 = *(float *)(this + 0x414) * *(float *)(this + 0x434);
    fVar12 = 0.0;
    fVar14 = 0.0;
  }
  Rect::Rect(aRStack_1d0,fVar12,fVar14,fVar15,fVar16);
                    /* catch() { ... } // from try @ 00f3f2e0 with catch @ 00f3f484 */
  Rect::operator=(aRStack_140,aRStack_1d0);
  pVVar1 = (V3F_C4B_T2F_Quad *)(this + 0x450);
  (**(code **)(*(long *)this + 0x638))(this,this + 0x408,pVVar1);
                    /* catch() { ... } // from try @ 00f3eb9c with catch @ 00f3f4b4 */
                    /* catch() { ... } // from try @ 00f3f25c with catch @ 00f3f4b8 */
                    /* catch() { ... } // from try @ 00f3eb3c with catch @ 00f3f4bc */
  (**(code **)(*(long *)this + 0x640))(this,aRStack_140,pVVar1);
                    /* catch() { ... } // from try @ 00f3f18c with catch @ 00f3f4c0 */
                    /* catch() { ... } // from try @ 00f3ef24 with catch @ 00f3f4c4 */
                    /* catch() { ... } // from try @ 00f3eb74 with catch @ 00f3f4c8 */
  PolygonInfo::setQuad((PolygonInfo *)(this + 0x4c0),pVVar1);
                    /* catch() { ... } // from try @ 00f3ea98 with catch @ 00f3f4cc */
LAB_00f3fac8:
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

