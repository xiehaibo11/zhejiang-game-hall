
/* cocos2d::PULineEmitter::calculateRequestedParticles(float) */

ulong __thiscall
cocos2d::PULineEmitter::calculateRequestedParticles(PULineEmitter *this,float param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = PUEmitter::calculateRequestedParticles((PUEmitter *)this,param_1);
  if (0.0 < *(float *)(this + 0x240)) {
    uVar1 = 0;
    if (this[0x228] != (PULineEmitter)0x0) {
      uVar1 = (uint)uVar2;
    }
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}

