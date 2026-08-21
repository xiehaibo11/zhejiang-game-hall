
/* cocos2d::ParticleSystem::setBlendAdditive(bool) */

void __thiscall cocos2d::ParticleSystem::setBlendAdditive(ParticleSystem *this,bool param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (param_1) {
    puVar2 = &BlendFunc::ADDITIVE;
  }
  else if ((*(Texture2D **)(this + 0x510) == (Texture2D *)0x0) ||
          (uVar1 = Texture2D::hasPremultipliedAlpha(*(Texture2D **)(this + 0x510)), (uVar1 & 1) != 0
          )) {
    puVar2 = (undefined8 *)&BlendFunc::ALPHA_PREMULTIPLIED;
  }
  else {
    puVar2 = &BlendFunc::ALPHA_NON_PREMULTIPLIED;
  }
  *(undefined8 *)(this + 0x518) = *puVar2;
  return;
}

