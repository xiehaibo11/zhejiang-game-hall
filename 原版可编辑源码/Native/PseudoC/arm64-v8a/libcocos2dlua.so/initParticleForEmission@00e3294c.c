
/* cocos2d::PUEmitter::initParticleForEmission(cocos2d::PUParticle3D*) */

void __thiscall cocos2d::PUEmitter::initParticleForEmission(PUEmitter *this,PUParticle3D *param_1)

{
  undefined4 uVar1;
  
  *(PUEmitter **)(param_1 + 0x80) = this;
  (**(code **)(*(long *)this + 0x80))();
  (**(code **)(*(long *)this + 0x88))(this,param_1);
  (**(code **)(*(long *)this + 0x98))(this,param_1);
  (**(code **)(*(long *)this + 0x90))(this,param_1);
  (**(code **)(*(long *)this + 0xa0))(this,param_1);
  (**(code **)(*(long *)this + 0xa8))(this,param_1);
  (**(code **)(*(long *)this + 0xb0))(this,param_1);
  uVar1 = (**(code **)(*(long *)this + 0xb8))(this);
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(undefined4 *)(param_1 + 300) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00e32a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xc0))(this,param_1);
  return;
}

