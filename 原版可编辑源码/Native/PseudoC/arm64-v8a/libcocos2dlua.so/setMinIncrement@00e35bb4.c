
/* cocos2d::PULineEmitter::setMinIncrement(float) */

void __thiscall cocos2d::PULineEmitter::setMinIncrement(PULineEmitter *this,float param_1)

{
  *(float *)(this + 0x218) = param_1;
  *(float *)(this + 0x23c) =
       SQRT(*(float *)(this + 0x68) * *(float *)(this + 0x68) +
            *(float *)(this + 0x6c) * *(float *)(this + 0x6c) +
            *(float *)(this + 0x70) * *(float *)(this + 0x70)) * param_1;
  return;
}

