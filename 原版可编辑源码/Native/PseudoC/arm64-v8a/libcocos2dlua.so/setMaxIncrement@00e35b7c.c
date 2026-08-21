
/* cocos2d::PULineEmitter::setMaxIncrement(float) */

void __thiscall cocos2d::PULineEmitter::setMaxIncrement(PULineEmitter *this,float param_1)

{
  *(float *)(this + 0x21c) = param_1;
  *(float *)(this + 0x240) =
       SQRT(*(float *)(this + 0x68) * *(float *)(this + 0x68) +
            *(float *)(this + 0x6c) * *(float *)(this + 0x6c) +
            *(float *)(this + 0x70) * *(float *)(this + 0x70)) * param_1;
  return;
}

