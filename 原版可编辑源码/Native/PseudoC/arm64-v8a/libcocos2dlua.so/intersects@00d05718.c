
/* cocos2d::Ray::intersects(cocos2d::OBB const&, float*) const */

uint __thiscall cocos2d::Ray::intersects(Ray *this,OBB *param_1,float *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  AABB::AABB((AABB *)&local_e8);
  local_e8 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20),
                      -(float)*(undefined8 *)(param_1 + 0x54));
  local_e0 = -*(float *)(param_1 + 0x5c);
  local_d4 = *(undefined4 *)(param_1 + 0x5c);
  local_dc = *(undefined8 *)(param_1 + 0x54);
  Vec3::Vec3((Vec3 *)&local_100);
  Vec3::Vec3((Vec3 *)&local_f4,0.0,0.0,1.0);
  local_ec = *(undefined4 *)(this + 0x14);
  local_f4 = *(undefined8 *)(this + 0xc);
  local_f8 = *(float *)(this + 8);
  local_100 = *(undefined8 *)this;
  Mat4::Mat4((Mat4 *)&local_90,(Mat4 *)Mat4::IDENTITY);
  local_90 = *(undefined8 *)(param_1 + 0xc);
  uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(param_1 + 0x14));
  local_80 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = CONCAT44(uStack_78._4_4_,*(undefined4 *)(param_1 + 0x20));
  local_70 = *(undefined8 *)(param_1 + 0x24);
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x2c));
  local_60 = *(undefined8 *)param_1;
  uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_1 + 8));
  Mat4::getInversed();
  uStack_78 = uStack_b8;
  local_80 = local_c0;
  local_68 = uStack_a8;
  local_70 = uStack_b0;
  uStack_88 = uStack_c8;
  local_90 = local_d0;
  uStack_58 = uStack_98;
  local_60 = local_a0;
  Mat4::~Mat4((Mat4 *)&local_d0);
  Mat4::transformVector
            ((Mat4 *)&local_90,(float)local_100,local_100._4_4_,local_f8,1.0,(Vec3 *)&local_100);
  Mat4::transformVector((Mat4 *)&local_90,(Vec3 *)&local_f4);
  Vec3::normalize((Vec3 *)&local_f4);
  uVar2 = intersects((Ray *)&local_100,(AABB *)&local_e8,param_2);
  Mat4::~Mat4((Mat4 *)&local_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

