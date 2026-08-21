
/* cocos2d::Director::setProjection(cocos2d::Director::Projection) */

void __thiscall cocos2d::Director::setProjection(Director *this,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  Vec3 aVStack_150 [16];
  Vec3 aVStack_140 [16];
  Vec3 aVStack_130 [16];
  float local_120;
  float local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  Mat4 aMStack_d8 [64];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Size::Size((Size *)&local_120,(Size *)(this + 0x198));
  if ((local_120 == 0.0) || (local_11c == 0.0)) goto LAB_00f98624;
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0xd0))
              (0,0,*(undefined4 *)(this + 0x198),*(undefined4 *)(this + 0x19c));
  }
  if (param_2 == 1) {
    fVar12 = *(float *)(this + 0x19c);
                    /* catch() { ... } // from try @ 00f9835c with catch @ 00f984c4 */
                    /* catch() { ... } // from try @ 00f98334 with catch @ 00f984c8 */
    Mat4::Mat4((Mat4 *)&local_98);
                    /* catch() { ... } // from try @ 00f98284 with catch @ 00f984cc */
                    /* catch() { ... } // from try @ 00f98248 with catch @ 00f984d0 */
    Mat4::Mat4(aMStack_d8);
                    /* catch() { ... } // from try @ 00f982bc with catch @ 00f984d4 */
                    /* catch() { ... } // from try @ 00f9836c with catch @ 00f984d8
                       catch() { ... } // from try @ 00f984b0 with catch @ 00f984d8 */
                    /* catch() { ... } // from try @ 00f980c8 with catch @ 00f984dc */
                    /* catch() { ... } // from try @ 00f98180 with catch @ 00f984e0
                       catch() { ... } // from try @ 00f98418 with catch @ 00f984e0 */
                    /* try { // try from 00f984f4 to 01098527 has its CatchHandler @ 00f984f4
                       catch() { ... } // from try @ 00f984f4 with catch @ 00f984f4
                       catch() { ... } // from try @ 00f98544 with catch @ 00f984f4 */
    Mat4::createPerspective
              (60.0,local_120 / local_11c,10.0,fVar12 / 1.1547005 + local_11c * 0.5,
               (Mat4 *)&local_98);
    Vec3::Vec3(aVStack_130,local_120 * 0.5,local_11c * 0.5,fVar12 / 1.1547005);
                    /* try { // try from 00f98528 to 01098533 has its CatchHandler @ 00f98590 */
                    /* try { // try from 00f98538 to 01098543 has its CatchHandler @ 00f98560 */
    Vec3::Vec3(aVStack_140,local_120 * 0.5,local_11c * 0.5,0.0);
                    /* try { // try from 00f98544 to 010985ab has its CatchHandler @ 00f984f4 */
    Vec3::Vec3(aVStack_150,0.0,1.0,0.0);
                    /* catch() { ... } // from try @ 00f98538 with catch @ 00f98560 */
    Mat4::createLookAt(aVStack_130,aVStack_140,aVStack_150,aMStack_d8);
    Mat4::Mat4((Mat4 *)&local_118,(Mat4 *)&local_98);
    Mat4::multiply((Mat4 *)&local_118,aMStack_d8);
    lVar10 = *(long *)(this + 0x58);
                    /* catch() { ... } // from try @ 00f98528 with catch @ 00f98590 */
    uVar11 = (*(long *)(lVar10 + 0x28) + *(long *)(lVar10 + 0x20)) - 1;
                    /* try { // try from 00f985ac to 010985ff has its CatchHandler @ 00f985ac
                       catch() { ... } // from try @ 00f985ac with catch @ 00f985ac
                       catch() { ... } // from try @ 00f9860c with catch @ 00f985ac
                       catch() { ... } // from try @ 00f98718 with catch @ 00f985ac
                       catch() { ... } // from try @ 00f987c8 with catch @ 00f985ac
                       catch() { ... } // from try @ 00f988f0 with catch @ 00f985ac */
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(lVar10 + 8) + (uVar11 >> 3 & 0x1ffffffffffffff8)) +
             (uVar11 & 0x3f) * 0x40);
    puVar1[5] = uStack_f0;
    puVar1[4] = local_f8;
    puVar1[7] = uStack_e0;
    puVar1[6] = local_e8;
    puVar1[1] = uStack_110;
    *puVar1 = local_118;
    puVar1[3] = uStack_100;
    puVar1[2] = local_108;
    uVar9 = Mat4::IDENTITY._56_8_;
    uVar8 = Mat4::IDENTITY._48_8_;
    uVar7 = Mat4::IDENTITY._40_8_;
    uVar6 = Mat4::IDENTITY._32_8_;
    uVar5 = Mat4::IDENTITY._24_8_;
    uVar4 = Mat4::IDENTITY._16_8_;
    uVar3 = Mat4::IDENTITY._0_8_;
    uVar11 = (*(long *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(this + 0x30) + (uVar11 >> 3 & 0x1ffffffffffffff8)) +
             (uVar11 & 0x3f) * 0x40);
    puVar1[1] = Mat4::IDENTITY._8_8_;
    *puVar1 = uVar3;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
                    /* try { // try from 00f98600 to 0109860b has its CatchHandler @ 00f98900 */
    Mat4::~Mat4((Mat4 *)&local_118);
    Mat4::~Mat4(aMStack_d8);
LAB_00f9860c:
                    /* try { // try from 00f9860c to 0109870f has its CatchHandler @ 00f985ac */
    Mat4::~Mat4((Mat4 *)&local_98);
  }
  else if (param_2 == 0) {
                    /* try { // try from 00f98418 to 01098447 has its CatchHandler @ 00f984e0 */
    Mat4::Mat4((Mat4 *)&local_98);
    Mat4::createOrthographicOffCenter(0.0,local_120,0.0,local_11c,-1024.0,1024.0,(Mat4 *)&local_98);
    lVar10 = *(long *)(this + 0x58);
    uVar11 = (*(long *)(lVar10 + 0x28) + *(long *)(lVar10 + 0x20)) - 1;
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(lVar10 + 8) + (uVar11 >> 3 & 0x1ffffffffffffff8)) +
             (uVar11 & 0x3f) * 0x40);
    puVar1[1] = uStack_90;
    *puVar1 = local_98;
    puVar1[3] = uStack_80;
    puVar1[2] = uStack_88;
    puVar1[5] = uStack_70;
    puVar1[4] = local_78;
    puVar1[7] = uStack_60;
    puVar1[6] = uStack_68;
    uVar9 = Mat4::IDENTITY._56_8_;
    uVar8 = Mat4::IDENTITY._48_8_;
    uVar7 = Mat4::IDENTITY._32_8_;
    uVar6 = Mat4::IDENTITY._24_8_;
    uVar5 = Mat4::IDENTITY._16_8_;
    uVar4 = Mat4::IDENTITY._8_8_;
    uVar3 = Mat4::IDENTITY._0_8_;
    uVar11 = (*(long *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
                    /* try { // try from 00f984b0 to 010984bb has its CatchHandler @ 00f984d8 */
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(this + 0x30) + (uVar11 >> 3 & 0x1ffffffffffffff8)) +
             (uVar11 & 0x3f) * 0x40);
    puVar1[5] = Mat4::IDENTITY._40_8_;
    puVar1[4] = uVar7;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
                    /* try { // try from 00f984bc to 010984f3 has its CatchHandler @ 00f98080 */
    goto LAB_00f9860c;
  }
  *(int *)(this + 0x194) = param_2;
  GL::setProjectionMatrixDirty();
  EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),*(Event **)(this + 0xb8));
LAB_00f98624:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

