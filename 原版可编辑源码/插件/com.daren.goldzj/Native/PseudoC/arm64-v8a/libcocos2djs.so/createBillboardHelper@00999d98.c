
/* cocos2d::Mat4::createBillboardHelper(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3
   const&, cocos2d::Vec3 const*, cocos2d::Mat4*) */

void cocos2d::Mat4::createBillboardHelper
               (Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4,Mat4 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  undefined8 local_c0;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00999dd8 to 00a99def has its CatchHandler @ 0099a0b0 */
  Vec3::Vec3((Vec3 *)&local_b0,param_1,param_2);
  uVar8 = IDENTITY._56_8_;
  uVar7 = IDENTITY._48_8_;
  uVar6 = IDENTITY._32_8_;
  uVar5 = IDENTITY._24_8_;
  uVar4 = IDENTITY._16_8_;
  uVar3 = IDENTITY._8_8_;
  uVar2 = IDENTITY._0_8_;
                    /* try { // try from 00999df8 to 00a99e03 has its CatchHandler @ 0099a0ac */
                    /* try { // try from 00999e04 to 00a99e0f has its CatchHandler @ 0099a0a8 */
  *(undefined8 *)(param_5 + 0x28) = IDENTITY._40_8_;
  *(undefined8 *)(param_5 + 0x20) = uVar6;
  *(undefined8 *)(param_5 + 0x38) = uVar8;
  *(undefined8 *)(param_5 + 0x30) = uVar7;
  *(undefined8 *)(param_5 + 8) = uVar3;
  *(undefined8 *)param_5 = uVar2;
                    /* try { // try from 00999e10 to 00a99e27 has its CatchHandler @ 0099a0c0 */
  *(undefined8 *)(param_5 + 0x18) = uVar5;
  *(undefined8 *)(param_5 + 0x10) = uVar4;
  fVar9 = local_b0 * local_b0 + fStack_ac * fStack_ac + local_a8 * local_a8;
  *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)param_1;
  *(undefined4 *)(param_5 + 0x1c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_5 + 0x2c) = *(undefined4 *)(param_1 + 8);
  if ((param_4 != (Vec3 *)0x0) || (1e-06 < fVar9)) {
                    /* try { // try from 00999e44 to 00a99e4b has its CatchHandler @ 0099a090 */
    if (fVar9 <= 1e-06) {
      Vec3::Vec3((Vec3 *)&local_c0,param_1);
      fVar9 = (float)(local_c0 >> 0x20) - (float)((ulong)*(undefined8 *)param_4 >> 0x20);
      uVar10 = CONCAT44(fVar9,(float)local_c0 - (float)*(undefined8 *)param_4);
                    /* try { // try from 00999e90 to 00a99ef7 has its CatchHandler @ 0099a0c0 */
      local_b8 = local_b8 - *(float *)(param_4 + 8);
      local_c0 = uVar10;
    }
    else {
                    /* try { // try from 00999e58 to 00a99e67 has its CatchHandler @ 0099a06c */
      Vec3::Vec3((Vec3 *)&local_c0,param_2);
      uVar10 = local_c0 & 0xffffffff;
      fVar9 = local_c0._4_4_;
                    /* try { // try from 00999e68 to 00a99e7b has its CatchHandler @ 0099a070 */
    }
    _uStack_78 = IDENTITY._40_8_;
    _local_80 = IDENTITY._32_8_;
    uStack_68 = IDENTITY._56_8_;
    uStack_70 = IDENTITY._48_8_;
    _uStack_98 = IDENTITY._8_8_;
    _local_a0 = IDENTITY._0_8_;
    _local_88 = IDENTITY._24_8_;
    _local_90 = IDENTITY._16_8_;
    createLookAt(*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),(float)uVar10,
                 fVar9,local_b8,*(float *)param_3,*(float *)(param_3 + 4),*(float *)(param_3 + 8),
                 (Mat4 *)&local_a0);
    *(undefined4 *)param_5 = local_a0;
    *(undefined4 *)(param_5 + 4) = local_90;
    *(undefined4 *)(param_5 + 8) = local_80;
    *(undefined4 *)(param_5 + 0x10) = uStack_9c;
    *(undefined4 *)(param_5 + 0x14) = local_8c;
    *(undefined4 *)(param_5 + 0x18) = uStack_7c;
                    /* try { // try from 00999efc to 00a99f3f has its CatchHandler @ 0099a090 */
    *(undefined4 *)(param_5 + 0x20) = uStack_98;
    *(undefined4 *)(param_5 + 0x24) = local_88;
    *(undefined4 *)(param_5 + 0x28) = uStack_78;
    Vec3::~Vec3((Vec3 *)&local_c0);
  }
  Vec3::~Vec3((Vec3 *)&local_b0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

