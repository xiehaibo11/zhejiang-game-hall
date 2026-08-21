
/* cocos2d::AudioResampler::calculateOutputPTS(int) */

long __thiscall cocos2d::AudioResampler::calculateOutputPTS(AudioResampler *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0x7fffffffffffffff;
  if (*(long *)(this + 0x48) != 0x7fffffffffffffff) {
    uVar1 = 0;
    if ((long)*(int *)(this + 0xc) != 0) {
      uVar1 = (ulong)(*(long *)(this + 0x40) * (long)param_1) / (ulong)(long)*(int *)(this + 0xc);
    }
    lVar2 = uVar1 + *(long *)(this + 0x48);
  }
  return lVar2;
}

