
/* cocos2d::ParticleSystem3D::setEmitter(cocos2d::Particle3DEmitter*) */

void __thiscall
cocos2d::ParticleSystem3D::setEmitter(ParticleSystem3D *this,Particle3DEmitter *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x308);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(ParticleSystem3D **)(param_1 + 0x28) = this;
    *(Particle3DEmitter **)(this + 0x308) = param_1;
    if (param_1 != (Particle3DEmitter *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

