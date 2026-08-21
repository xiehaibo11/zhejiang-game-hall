
/* cocos2d::ParticleSystem3D::setRender(cocos2d::Particle3DRender*) */

void __thiscall
cocos2d::ParticleSystem3D::setRender(ParticleSystem3D *this,Particle3DRender *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x328);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Particle3DRender **)(this + 0x328) = param_1;
    *(ParticleSystem3D **)(param_1 + 0x28) = this;
    if (param_1 != (Particle3DRender *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

