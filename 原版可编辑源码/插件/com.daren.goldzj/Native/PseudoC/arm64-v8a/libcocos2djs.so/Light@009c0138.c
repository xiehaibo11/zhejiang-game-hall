
/* cocos2d::renderer::Light::Light() */

void __thiscall cocos2d::renderer::Light::Light(Light *this)

{
  long lVar1;
  float fVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__Light_01c6b1e8;
  Color3F::Color3F((Color3F *)(this + 0x10),1.0,1.0,1.0);
  *(undefined8 *)(this + 0x24) = 0x3f8000003f860a92;
  *(undefined8 *)(this + 0x1c) = 0x3f8000003f800000;
  Vec3::Vec3((Vec3 *)(this + 0x2c));
  Vec3::Vec3((Vec3 *)(this + 0x38));
  fVar2 = *(float *)(this + 0x1c);
  Vec3::Vec3((Vec3 *)(this + 0x44),*(float *)(this + 0x10) * fVar2,fVar2 * *(float *)(this + 0x14),
             fVar2 * *(float *)(this + 0x18));
  fVar2 = cosf(*(float *)(this + 0x24));
  *(undefined4 *)(this + 0x80) = 0x400;
  *(undefined8 *)(this + 0x94) = 0x42480000;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (Light)0x0;
  *(float *)(this + 0x50) = fVar2 * 0.5;
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x8c) = 0x447a00003f800000;
  *(undefined8 *)(this + 0x84) = 0x3f8000003a03126f;
  Mat4::Mat4((Mat4 *)(this + 0x9c));
  *(undefined8 *)(this + 0xdc) = 0x424800003f800000;
  Mat4::Mat4((Mat4 *)(this + 0xe4));
  Mat4::Mat4((Mat4 *)(this + 0x124));
  *(undefined8 *)(this + 0x168) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x170),0.0,0.0,-1.0);
  Mat4::Mat4((Mat4 *)&local_a8);
  *(undefined8 *)(this + 0x14c) = uStack_80;
  *(undefined8 *)(this + 0x144) = local_88;
  *(undefined8 *)(this + 0x15c) = uStack_70;
  *(undefined8 *)(this + 0x154) = local_78;
  *(undefined8 *)(this + 300) = uStack_a0;
  *(undefined8 *)(this + 0x124) = local_a8;
  *(undefined8 *)(this + 0x13c) = uStack_90;
  *(undefined8 *)(this + 0x134) = local_98;
  Mat4::~Mat4((Mat4 *)&local_a8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

