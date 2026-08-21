
/* cocos2d::experimental::TMXLayer::tileToNodeTransform() */

void cocos2d::experimental::TMXLayer::tileToNodeTransform(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_x0;
  long lVar10;
  Mat4 *in_x8;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00ef82e8 to 00ff831f has its CatchHandler @ 00ef83c4 */
  fVar15 = *(float *)(in_x0 + 0x318);
  lVar10 = Director::getInstance();
  fVar16 = *(float *)(in_x0 + 0x31c);
  fVar15 = fVar15 / *(float *)(lVar10 + 0x1a0);
  lVar10 = Director::getInstance();
  uVar9 = Mat4::IDENTITY._56_8_;
  uVar8 = Mat4::IDENTITY._48_8_;
  uVar7 = Mat4::IDENTITY._32_8_;
  uVar6 = Mat4::IDENTITY._24_8_;
  uVar5 = Mat4::IDENTITY._16_8_;
  uVar4 = Mat4::IDENTITY._8_8_;
  uVar3 = Mat4::IDENTITY._0_8_;
  iVar1 = *(int *)(in_x0 + 0x330);
  fVar16 = fVar16 / *(float *)(lVar10 + 0x1a0);
  if (iVar1 == 2) {
    fVar14 = fVar16 * -0.5;
    fVar11 = fVar15 * 0.5;
    fVar12 = fVar15 * -0.5;
    fVar13 = fVar15 * (*(float *)(in_x0 + 0x310) + -1.0) * 0.5;
                    /* catch() { ... } // from try @ 00ef82a4 with catch @ 00ef83f8 */
                    /* catch() { ... } // from try @ 00ef8248 with catch @ 00ef83fc */
    fVar15 = fVar14;
  }
  else if (iVar1 == 1) {
                    /* catch() { ... } // from try @ 00ef8338 with catch @ 00ef8390 */
    fVar11 = fVar16 * 0.8660254;
    fVar14 = fVar16 * -0.5;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar15 = -fVar16;
                    /* catch() { ... } // from try @ 00ef82e8 with catch @ 00ef83c4 */
  }
  else {
    if (iVar1 != 0) {
      *(undefined8 *)(in_x0 + 0x3cc) = Mat4::IDENTITY._40_8_;
      *(undefined8 *)(in_x0 + 0x3c4) = uVar7;
      *(undefined8 *)(in_x0 + 0x3dc) = uVar9;
      *(undefined8 *)(in_x0 + 0x3d4) = uVar8;
      *(undefined8 *)(in_x0 + 0x3ac) = uVar4;
      *(undefined8 *)(in_x0 + 0x3a4) = uVar3;
      *(undefined8 *)(in_x0 + 0x3bc) = uVar6;
      *(undefined8 *)(in_x0 + 0x3b4) = uVar5;
      goto LAB_00ef847c;
    }
                    /* try { // try from 00ef8338 to 00ff835f has its CatchHandler @ 00ef8390 */
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar11 = fVar15;
    fVar15 = -fVar16;
                    /* try { // try from 00ef8360 to 00ff8417 has its CatchHandler @ 00ef8200 */
  }
  Mat4::Mat4((Mat4 *)&local_88,fVar11,fVar12,0.0,fVar13,fVar14,fVar15,0.0,
             fVar16 * (*(float *)(in_x0 + 0x314) + -1.0),0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0);
  *(undefined8 *)(in_x0 + 0x3cc) = uStack_60;
  *(undefined8 *)(in_x0 + 0x3c4) = local_68;
  *(undefined8 *)(in_x0 + 0x3dc) = uStack_50;
  *(undefined8 *)(in_x0 + 0x3d4) = local_58;
  *(undefined8 *)(in_x0 + 0x3ac) = uStack_80;
  *(undefined8 *)(in_x0 + 0x3a4) = local_88;
  *(undefined8 *)(in_x0 + 0x3bc) = uStack_70;
  *(undefined8 *)(in_x0 + 0x3b4) = local_78;
  Mat4::~Mat4((Mat4 *)&local_88);
LAB_00ef847c:
  Mat4::Mat4(in_x8,(Mat4 *)(in_x0 + 0x3a4));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

