
/* cocos2d::PULineEmitter::setMaxDeviation(float) */

void __thiscall cocos2d::PULineEmitter::setMaxDeviation(PULineEmitter *this,float param_1)

{
  *(float *)(this + 0x214) = param_1;
  *(float *)(this + 0x238) =
       SQRT(*(float *)(this + 0x68) * *(float *)(this + 0x68) +
            *(float *)(this + 0x6c) * *(float *)(this + 0x6c) +
            *(float *)(this + 0x70) * *(float *)(this + 0x70)) * param_1;
  return;
}

