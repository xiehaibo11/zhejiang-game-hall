
/* cocos2d::PURibbonTrail::updateTrail(unsigned long, cocos2d::Node const*) */

void cocos2d::PURibbonTrail::updateTrail(ulong param_1,Node *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *in_x2;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  ulong in_d1;
  float fVar19;
  ulong in_d2;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  Quaternion aQStack_f0 [16];
  float local_e0;
  float fStack_dc;
  float local_d8;
  Mat4 aMStack_d0 [20];
  Vec4 aVStack_bc [16];
  Quaternion aQStack_ac [28];
  long local_90;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e60ba0 with catch @ 00e60b30
                        */
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00e60b64 to 00f60b67 has its CatchHandler @ 00e60c60 */
                    /* try { // try from 00e60b6c to 00f60b7b has its CatchHandler @ 00e60c5c */
  do {
    fVar24 = (float)in_d2;
    fVar16 = (float)in_d1;
    lVar8 = *(long *)(param_1 + 0x58);
    plVar13 = (long *)(lVar8 + (long)param_2 * 0x18);
    lVar9 = *plVar13;
    lVar14 = plVar13[1];
                    /* try { // try from 00e60b9c to 00f60b9f has its CatchHandler @ 00e60c60 */
                    /* try { // try from 00e60ba0 to 00f60c7b has its CatchHandler @ 00e60b30 */
    lVar12 = *(long *)(param_1 + 0x40);
    lVar1 = 0;
    if (lVar14 + 1 != *(long *)(param_1 + 8)) {
      lVar1 = lVar14 + 1;
    }
    local_e0 = (float)(**(code **)(*in_x2 + 0x100))();
    fStack_dc = fVar16;
    local_d8 = fVar24;
    if (*(long **)(param_1 + 0x1c8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1c8) + 0x448))(aMStack_d0);
      Mat4::transformVector(aMStack_d0,local_e0,fStack_dc,local_d8,1.0,(Vec3 *)&local_e0);
      Mat4::~Mat4(aMStack_d0);
    }
    puVar4 = (ulong *)(lVar12 + (lVar1 + lVar9) * 0x34);
    in_d1 = *puVar4;
    fVar21 = *(float *)(puVar4 + 1);
    lVar14 = lVar14 + lVar9;
    fVar24 = local_e0 - (float)in_d1;
    fVar18 = (float)(in_d1 >> 0x20);
    fVar25 = fStack_dc - fVar18;
    fVar26 = local_d8 - fVar21;
    in_d2 = (ulong)(uint)(fVar26 * fVar26);
    fVar16 = fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26;
    pfVar10 = (float *)(lVar12 + lVar14 * 0x34);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e60b7c with catch @ 00e60c44
                        */
    if (*(float *)(param_1 + 0x160) <= fVar16) {
      lVar12 = lVar12 + lVar14 * 0x34;
      fVar16 = *(float *)(param_1 + 0x15c) / SQRT(fVar16);
      *(ulong *)pfVar10 = CONCAT44(fVar18 + fVar25 * fVar16,(float)in_d1 + fVar24 * fVar16);
      pfVar15 = (float *)(lVar12 + 8);
      *pfVar15 = fVar21 + fVar26 * fVar16;
      fVar16 = *(float *)(*(long *)(param_1 + 0x198) + (long)param_2 * 4);
      lVar14 = *(long *)(param_1 + 0x168);
      (**(code **)(*in_x2 + 0x1a8))(aQStack_f0);
      PUBillboardChain::Element::Element
                ((Element *)aMStack_d0,(Vec3 *)&local_e0,fVar16,0.0,
                 (Vec4 *)(lVar14 + (long)param_2 * 0x10),aQStack_f0);
      Quaternion::~Quaternion(aQStack_f0);
      (**(code **)(*(long *)param_1 + 0x80))(param_1,param_2,aMStack_d0);
      fVar24 = local_e0 - *pfVar10;
      fVar25 = fStack_dc - *(float *)(lVar12 + 4);
      fVar26 = local_d8 - *pfVar15;
      in_d2 = (ulong)(uint)(fVar26 * fVar26);
      fVar16 = fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26;
      in_d1 = (ulong)(uint)fVar16;
      bVar11 = fVar16 <= *(float *)(param_1 + 0x160);
      Quaternion::~Quaternion(aQStack_ac);
      Vec4::~Vec4(aVStack_bc);
    }
    else {
      bVar11 = true;
      pfVar10[2] = local_d8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e60b6c with catch @ 00e60c5c
                        */
      *(ulong *)pfVar10 = CONCAT44(fStack_dc,local_e0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e60b64 with catch @ 00e60c60
                       catch(type#1 @ 00000000) { ... } // from try @ 00e60b9c with catch @ 00e60c60
                        */
    }
    uVar5 = *(ulong *)(lVar8 + (long)param_2 * 0x18 + 0x10);
    uVar7 = *(ulong *)(param_1 + 8);
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = (uVar5 + 1) / uVar7;
    }
    if ((uVar5 + 1) - uVar2 * uVar7 == plVar13[1]) {
      if (uVar5 != 0) {
        uVar7 = uVar5;
      }
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x40) + (*plVar13 + uVar5) * 0x34);
      lVar14 = *(long *)(param_1 + 0x40) + (uVar7 + *plVar13) * 0x34;
      uVar17 = *(undefined8 *)(lVar14 + -0x34);
      fVar21 = *(float *)(lVar14 + -0x2c);
      in_d1 = (ulong)(uint)fVar21;
      fVar16 = (float)uVar17;
      fVar19 = (float)*puVar6 - fVar16;
      fVar18 = (float)((ulong)uVar17 >> 0x20);
      fVar20 = (float)((ulong)*puVar6 >> 0x20) - fVar18;
      in_d2 = CONCAT44(fVar20,fVar19);
      fVar22 = *(float *)(puVar6 + 1) - fVar21;
      fVar23 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar22 * fVar22);
      if (1e-06 < fVar23) {
        fVar23 = (*(float *)(param_1 + 0x15c) -
                 SQRT(fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26)) / fVar23;
        in_d2 = CONCAT44(fVar20 * fVar23,fVar19 * fVar23);
        fVar21 = fVar21 + fVar22 * fVar23;
        in_d1 = (ulong)(uint)fVar21;
        *puVar6 = CONCAT44(fVar18 + fVar20 * fVar23,fVar16 + fVar19 * fVar23);
        *(float *)(puVar6 + 1) = fVar21;
      }
    }
                    /* try { // try from 00e60b7c to 00f60b87 has its CatchHandler @ 00e60c44 */
  } while (!bVar11);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  if (*(long *)(lVar3 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

