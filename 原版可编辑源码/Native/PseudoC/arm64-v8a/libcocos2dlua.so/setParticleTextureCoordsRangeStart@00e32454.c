
/* cocos2d::PUEmitter::setParticleTextureCoordsRangeStart(unsigned short const&) */

void __thiscall
cocos2d::PUEmitter::setParticleTextureCoordsRangeStart(PUEmitter *this,ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  this[0x1e4] = (PUEmitter)0x1;
  *(ushort *)(this + 0x1e0) = uVar1;
  return;
}

