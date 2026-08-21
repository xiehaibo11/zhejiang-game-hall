
/* cocos2d::ParticleSystem::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocos2d::ParticleSystem::setBlendFunc(ParticleSystem *this,BlendFunc *param_1)

{
  if ((*(int *)(this + 0x518) == *(int *)param_1) &&
     (*(int *)(this + 0x51c) == *(int *)(param_1 + 4))) {
    return;
  }
  *(undefined8 *)(this + 0x518) = *(undefined8 *)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f35600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6c0))();
  return;
}

