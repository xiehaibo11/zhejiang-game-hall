
/* cocos2d::Timer::setupTimerWithInterval(float, unsigned int, float) */

void __thiscall
cocos2d::Timer::setupTimerWithInterval(Timer *this,float param_1,uint param_2,float param_3)

{
  *(undefined4 *)(this + 0x30) = 0xbf800000;
  this[0x35] = (Timer)(0.0 < param_3);
  *(float *)(this + 0x40) = param_3;
  *(float *)(this + 0x44) = param_1;
  *(undefined4 *)(this + 0x38) = 0;
  *(uint *)(this + 0x3c) = param_2;
  this[0x34] = (Timer)(param_2 == 0xfffffffe);
  return;
}

