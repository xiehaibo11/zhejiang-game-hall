
/* cocos2d::experimental::AudioResampler::setVolume(float, float) */

void __thiscall
cocos2d::experimental::AudioResampler::setVolume(AudioResampler *this,float param_1,float param_2)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_1;
  if (param_1 < 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = 1.0;
  if (param_1 <= 1.0) {
    fVar3 = fVar2;
  }
  if (fVar3 <= 0.0) {
    uVar1 = 0;
  }
  else if (15.999756 <= fVar3) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = (undefined2)(int)(fVar3 * 4096.0 + 0.5);
  }
  fVar2 = param_2;
  if (param_2 < 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = 1.0;
  if (param_2 <= 1.0) {
    fVar3 = fVar2;
  }
  *(undefined2 *)(this + 0x28) = uVar1;
  if (0.0 < fVar3) {
    if (fVar3 < 15.999756) {
      *(short *)(this + 0x2a) = (short)(int)(fVar3 * 4096.0 + 0.5);
      return;
    }
    *(undefined2 *)(this + 0x2a) = 0xffff;
    return;
  }
  *(undefined2 *)(this + 0x2a) = 0;
  return;
}

