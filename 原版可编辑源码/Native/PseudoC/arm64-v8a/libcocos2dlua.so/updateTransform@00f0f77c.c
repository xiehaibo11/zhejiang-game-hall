
/* cocos2d::LabelLetter::updateTransform() */

void __thiscall cocos2d::LabelLetter::updateTransform(LabelLetter *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar2 = (**(code **)(*(long *)this + 0x5d0))();
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 00f0f7a4 to 0100f7ab has its CatchHandler @ 00f0f880 */
    puVar3 = (undefined8 *)(**(code **)(*(long *)this + 1000))(this);
                    /* try { // try from 00f0f7ac to 0100f7cb has its CatchHandler @ 00f0f720 */
    uVar6 = puVar3[4];
    uVar10 = puVar3[7];
    uVar9 = puVar3[6];
    uVar12 = puVar3[1];
    uVar11 = *puVar3;
    uVar14 = puVar3[3];
    uVar13 = puVar3[2];
    *(undefined8 *)(this + 0x344) = puVar3[5];
    *(undefined8 *)(this + 0x33c) = uVar6;
    *(undefined8 *)(this + 0x354) = uVar10;
    *(undefined8 *)(this + 0x34c) = uVar9;
    *(undefined8 *)(this + 0x324) = uVar12;
    *(undefined8 *)(this + 0x31c) = uVar11;
    *(undefined8 *)(this + 0x334) = uVar14;
    *(undefined8 *)(this + 0x32c) = uVar13;
    fVar4 = *(float *)(this + 0x440);
    fVar7 = *(float *)(this + 0x444);
                    /* try { // try from 00f0f7cc to 0100f7d3 has its CatchHandler @ 00f0f87c */
                    /* try { // try from 00f0f7d4 to 0100f7f3 has its CatchHandler @ 00f0f720 */
    fVar15 = *(float *)(this + 0x34c);
    fVar16 = *(float *)(this + 0x350);
    uVar1 = *(undefined4 *)(this + 0x58);
                    /* try { // try from 00f0f7f4 to 0100f7ff has its CatchHandler @ 00f0f8a0 */
    fVar19 = fVar4 * *(float *)(this + 0x31c);
                    /* try { // try from 00f0f800 to 0100f8c3 has its CatchHandler @ 00f0f720 */
    fVar5 = fVar4 * *(float *)(this + 800);
    fVar20 = fVar7 * *(float *)(this + 0x330);
    fVar8 = fVar7 * -*(float *)(this + 0x32c);
    fVar17 = (fVar4 + *(float *)(this + 0x410)) * *(float *)(this + 0x31c);
    fVar4 = (fVar4 + *(float *)(this + 0x410)) * *(float *)(this + 800);
    fVar18 = (fVar7 + *(float *)(this + 0x414)) * -*(float *)(this + 0x32c);
    fVar7 = (fVar7 + *(float *)(this + 0x414)) * *(float *)(this + 0x330);
    *(undefined4 *)(this + 0x470) = uVar1;
    *(undefined4 *)(this + 0x4a0) = uVar1;
    *(undefined4 *)(this + 0x458) = uVar1;
    *(float *)(this + 0x46c) = fVar16 + fVar5 + fVar20;
    *(float *)(this + 0x468) = fVar15 + (fVar19 - fVar8);
    *(float *)(this + 0x498) = fVar15 + (fVar17 - fVar8);
    *(float *)(this + 0x49c) = fVar16 + fVar4 + fVar20;
    *(float *)(this + 0x450) = fVar15 + (fVar19 - fVar18);
                    /* catch() { ... } // from try @ 00f0f7cc with catch @ 00f0f87c */
    *(float *)(this + 0x454) = fVar16 + fVar5 + fVar7;
                    /* catch() { ... } // from try @ 00f0f7a4 with catch @ 00f0f880 */
    *(float *)(this + 0x480) = fVar15 + (fVar17 - fVar18);
                    /* catch() { ... } // from try @ 00f0f768 with catch @ 00f0f884 */
    *(float *)(this + 0x484) = fVar16 + fVar4 + fVar7;
    *(undefined4 *)(this + 0x488) = uVar1;
    if (*(TextureAtlas **)(this + 0x300) != (TextureAtlas *)0x0) {
      TextureAtlas::updateQuad
                (*(TextureAtlas **)(this + 0x300),(V3F_C4B_T2F_Quad *)(this + 0x450),
                 *(long *)(this + 0x308));
    }
                    /* catch() { ... } // from try @ 00f0f7f4 with catch @ 00f0f8a0 */
    this[0x319] = (LabelLetter)0x0;
    (**(code **)(*(long *)this + 0x5d8))(this,0);
  }
  Node::updateTransform((Node *)this);
  return;
}

