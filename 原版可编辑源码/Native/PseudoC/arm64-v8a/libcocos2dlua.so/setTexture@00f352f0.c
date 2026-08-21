
/* cocos2d::ParticleSystem::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::ParticleSystem::setTexture(ParticleSystem *this,Texture2D *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x510);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Texture2D *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x510);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Texture2D **)(this + 0x510) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00f35340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x6c0))(this);
    return;
  }
  return;
}

