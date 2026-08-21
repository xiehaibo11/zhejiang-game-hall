
/* cocos2d::ParticleSystem::updateBlendFunc() */

void __thiscall cocos2d::ParticleSystem::updateBlendFunc(ParticleSystem *this)

{
  ulong uVar1;
  
  if (*(Texture2D **)(this + 0x510) != (Texture2D *)0x0) {
    uVar1 = Texture2D::hasPremultipliedAlpha(*(Texture2D **)(this + 0x510));
    this[0x520] = (ParticleSystem)0x0;
    if (((*(long *)(this + 0x510) != 0) && (*(int *)(this + 0x518) == 1)) &&
       (*(int *)(this + 0x51c) == 0x303)) {
      if ((uVar1 & 1) == 0) {
        *(undefined8 *)(this + 0x518) = 0x30300000302;
      }
      else {
        this[0x520] = (ParticleSystem)0x1;
      }
    }
  }
  return;
}

