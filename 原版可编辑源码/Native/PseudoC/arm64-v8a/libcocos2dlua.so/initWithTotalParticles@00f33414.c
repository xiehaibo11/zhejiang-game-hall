
/* cocos2d::ParticleSystem::initWithTotalParticles(int) */

undefined8 __thiscall
cocos2d::ParticleSystem::initWithTotalParticles(ParticleSystem *this,int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *(int *)(this + 0x508) = param_1;
  ParticleData::release((ParticleData *)(this + 0x368));
  uVar1 = ParticleData::init((ParticleData *)(this + 0x368),*(int *)(this + 0x508));
  if ((uVar1 & 1) == 0) {
    Ref::release((Ref *)this);
    uVar2 = 0;
  }
  else {
    *(int *)(this + 0x470) = param_1;
    if ((*(long *)(this + 0x460) != 0) && (0 < *(int *)(this + 0x508))) {
      lVar3 = *(long *)(this + 0x3f0);
      lVar4 = 0;
      do {
        *(int *)(lVar3 + lVar4 * 4) = (int)lVar4;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(this + 0x508));
    }
    uVar2 = 1;
    this[0x474] = (ParticleSystem)0x1;
    *(undefined4 *)(this + 0x528) = 0;
    *(undefined4 *)(this + 0x4a0) = 0;
    this[0x309] = (ParticleSystem)0x0;
    *(undefined8 *)(this + 0x518) = 0x30300000001;
    this[0x46c] = (ParticleSystem)0x0;
  }
  return uVar2;
}

