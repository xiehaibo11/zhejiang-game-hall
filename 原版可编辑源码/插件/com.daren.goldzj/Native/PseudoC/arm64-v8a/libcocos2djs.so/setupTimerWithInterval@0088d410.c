
/* cocos2d::Timer::setupTimerWithInterval(float, unsigned int, float) */

void __thiscall
cocos2d::Timer::setupTimerWithInterval(Timer *this,float param_1,uint param_2,float param_3)

{
  *(undefined4 *)(this + 0x18) = 0xbf800000;
  this[0x1d] = (Timer)(0.0 < param_3);
  *(float *)(this + 0x28) = param_3;
  *(float *)(this + 0x2c) = param_1;
  *(uint *)(this + 0x24) = param_2;
  this[0x1c] = (Timer)(param_2 == 0xfffffffe);
  return;
}

