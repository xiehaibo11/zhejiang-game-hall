
/* non-virtual thunk to cocos2d::ParticleSystem::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocos2d::ParticleSystem::setBlendFunc(ParticleSystem *this,BlendFunc *param_1)

{
  if ((*(int *)(this + 0x220) == *(int *)param_1) &&
     (*(int *)(this + 0x224) == *(int *)(param_1 + 4))) {
    return;
  }
  *(undefined8 *)(this + 0x220) = *(undefined8 *)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f35640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x2f8) + 0x6c0))(this + -0x2f8);
  return;
}

