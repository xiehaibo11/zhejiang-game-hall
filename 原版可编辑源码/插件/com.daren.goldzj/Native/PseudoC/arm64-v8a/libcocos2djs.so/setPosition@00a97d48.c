
/* cocos2d::Track::setPosition(float) */

undefined8 __thiscall cocos2d::Track::setPosition(Track *this,float param_1)

{
  *(long *)(this + 0x20) =
       (long)(((float)*(ulong *)(this + 0x10) * param_1) / *(float *)(this + 0x9c));
  *(undefined8 *)(this + 0x28) = 0;
  return 1;
}

