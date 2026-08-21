
/* cocos2d::BillBoard::calculateBillboardTransform() */

undefined8 __thiscall cocos2d::BillBoard::calculateBillboardTransform(BillBoard *this)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  undefined8 local_1d8;
  float local_1d0;
  Vec3 local_1c8 [8];
  float local_1c0;
  Vec3 local_1b8 [8];
  float local_1b0;
  Vec3 aVStack_1a8 [16];
  undefined8 local_198;
  float local_190;
  Vec3 local_188 [8];
  float local_180;
  undefined8 local_178;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  float fStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  float fStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  float fStack_140;
  undefined4 uStack_13c;
  Vec3 aVStack_138 [16];
  float local_128;
  float fStack_124;
  float local_120;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  float fStack_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)Camera::getVisitingCamera();
  (**(code **)(*plVar2 + 0x430))(&local_b8);
  Vec3::Vec3(local_188,*(float *)(this + 0x70),*(float *)(this + 0x74),0.0);
  Mat4::Mat4((Mat4 *)&local_f8,(Mat4 *)(this + 0x8c));
  Mat4::translate((Mat4 *)&local_f8,local_188);
  Vec3::Vec3((Vec3 *)&local_198);
  if (*(int *)(this + 0x5b0) == 0) {
    local_198 = CONCAT44((float)((ulong)local_c8 >> 0x20) - (float)((ulong)local_88 >> 0x20),
                         (float)local_c8 - (float)local_88);
    local_190 = local_c0 - fStack_80;
  }
  else if (*(int *)(this + 0x5b0) == 1) {
    Vec3::Vec3(aVStack_138,0.0,0.0,-1.0);
    Mat4::transformVector((Mat4 *)&local_b8,aVStack_138,(Vec3 *)&local_198);
  }
  this[0x5b4] = (BillBoard)0x0;
  if (SQRT((float)local_198 * (float)local_198 + local_198._4_4_ * local_198._4_4_ +
           local_190 * local_190) < 2e-37) {
    local_198 = local_98;
    local_190 = fStack_90;
  }
  Vec3::normalize((Vec3 *)&local_198);
  Mat4::Mat4((Mat4 *)aVStack_138);
  Mat4::setIdentity((Mat4 *)aVStack_138);
  Vec3::Vec3(aVStack_1a8,local_128,fStack_124,local_120);
  Vec3::Vec3(local_1b8);
  Vec3::Vec3(local_1c8);
  Mat4::transformVector((Mat4 *)&local_b8,aVStack_1a8,local_1c8);
  Vec3::cross((Vec3 *)&local_198,local_1c8,local_1b8);
  Vec3::normalize(local_1b8);
  Vec3::cross(local_1b8,(Vec3 *)&local_198,local_1c8);
  Vec3::normalize(local_1c8);
  Mat4::Mat4((Mat4 *)&local_178);
  fStack_170 = SQRT(local_f8 * local_f8 + fStack_f4 * fStack_f4 + local_f0 * local_f0);
  fStack_160 = SQRT(local_e8 * local_e8 + fStack_e4 * fStack_e4 + local_e0 * local_e0);
  local_178 = CONCAT44(local_1b8._4_4_ * fStack_170,local_1b8._0_4_ * fStack_170);
  fStack_170 = fStack_170 * local_1b0;
  local_168 = CONCAT44(local_1c8._4_4_ * fStack_160,local_1c8._0_4_ * fStack_160);
  fStack_160 = fStack_160 * local_1c0;
  local_148 = local_c8;
  fVar3 = SQRT(local_d8 * local_d8 + local_d4 * local_d4 + local_d0 * local_d0);
  fStack_150 = -(fVar3 * local_190);
  local_1d8 = CONCAT44(-local_188._4_4_,-local_188._0_4_);
  local_1d0 = -local_180;
  local_158 = CONCAT44(-((float)((ulong)local_198 >> 0x20) * fVar3),-((float)local_198 * fVar3));
  fStack_140 = local_c0;
  Mat4::translate((Mat4 *)&local_178,(Vec3 *)&local_1d8);
  *(ulong *)(this + 0xb4) = CONCAT44(uStack_14c,fStack_150);
  *(undefined8 *)(this + 0xac) = local_158;
  *(ulong *)(this + 0xc4) = CONCAT44(uStack_13c,fStack_140);
  *(undefined8 *)(this + 0xbc) = local_148;
  *(ulong *)(this + 0x94) = CONCAT44(uStack_16c,fStack_170);
  *(undefined8 *)(this + 0x8c) = local_178;
  *(ulong *)(this + 0xa4) = CONCAT44(uStack_15c,fStack_160);
  *(undefined8 *)(this + 0x9c) = local_168;
  *(ulong *)(this + 0x5a8) = CONCAT44(uStack_13c,fStack_140);
  *(undefined8 *)(this + 0x5a0) = local_148;
  *(ulong *)(this + 0x598) = CONCAT44(uStack_14c,fStack_150);
  *(undefined8 *)(this + 0x590) = local_158;
  *(ulong *)(this + 0x588) = CONCAT44(uStack_15c,fStack_160);
  *(undefined8 *)(this + 0x580) = local_168;
  *(ulong *)(this + 0x578) = CONCAT44(uStack_16c,fStack_170);
  *(undefined8 *)(this + 0x570) = local_178;
  *(ulong *)(this + 0x558) = CONCAT44(uStack_8c,fStack_90);
  *(undefined8 *)(this + 0x550) = local_98;
  *(ulong *)(this + 0x568) = CONCAT44(uStack_7c,fStack_80);
  *(undefined8 *)(this + 0x560) = local_88;
  *(undefined8 *)(this + 0x538) = uStack_b0;
  *(undefined8 *)(this + 0x530) = local_b8;
  *(undefined8 *)(this + 0x548) = uStack_a0;
  *(undefined8 *)(this + 0x540) = local_a8;
  Mat4::~Mat4((Mat4 *)&local_178);
  Mat4::~Mat4((Mat4 *)aVStack_138);
  Mat4::~Mat4((Mat4 *)&local_f8);
  Mat4::~Mat4((Mat4 *)&local_b8);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

