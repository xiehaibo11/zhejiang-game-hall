
/* cocos2d::PUPositionEmitter::calculateRequestedParticles(float) */

ulong __thiscall
cocos2d::PUPositionEmitter::calculateRequestedParticles(PUPositionEmitter *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(long *)(this + 0x200) != *(long *)(this + 0x208)) {
    if (this[0x218] != (PUPositionEmitter)0x0) {
      uVar3 = PUEmitter::calculateRequestedParticles((PUEmitter *)this,param_1);
      return uVar3;
    }
    if (*(ulong *)(this + 0x220) <
        (ulong)((*(long *)(this + 0x208) - *(long *)(this + 0x200) >> 2) * -0x5555555555555555)) {
      uVar2 = PUEmitter::calculateRequestedParticles((PUEmitter *)this,param_1);
      uVar1 = (int)((ulong)(*(long *)(this + 0x208) - *(long *)(this + 0x200)) >> 2) * -0x55555555 -
              *(int *)(this + 0x220);
      if ((uVar2 & 0xffff) <= (uVar1 & 0xffff)) {
        uVar1 = uVar2;
      }
      return (ulong)uVar1;
    }
  }
  return 0;
}

