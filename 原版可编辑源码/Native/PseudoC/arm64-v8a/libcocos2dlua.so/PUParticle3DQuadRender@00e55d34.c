
/* cocos2d::PUParticle3DQuadRender::PUParticle3DQuadRender() */

void __thiscall
cocos2d::PUParticle3DQuadRender::PUParticle3DQuadRender(PUParticle3DQuadRender *this)

{
  undefined8 uVar1;
  
  PUParticle3DEntityRender::PUParticle3DEntityRender((PUParticle3DEntityRender *)this);
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR__PUParticle3DQuadRender_016f2800;
  *(undefined8 *)(this + 0xe0) = 0x400000000;
  Vec3::Vec3((Vec3 *)(this + 0xec),0.0,0.0,1.0);
  Vec3::Vec3((Vec3 *)(this + 0xf8),0.0,1.0,0.0);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0x104) = 0x10001;
  *(undefined8 *)(this + 0x108) = uVar1;
  this[0x4a] = (PUParticle3DQuadRender)0x0;
  return;
}

