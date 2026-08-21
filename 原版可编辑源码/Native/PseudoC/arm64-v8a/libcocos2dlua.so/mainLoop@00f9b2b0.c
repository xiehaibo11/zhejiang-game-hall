
/* cocos2d::Director::mainLoop(float) */

void __thiscall cocos2d::Director::mainLoop(Director *this,float param_1)

{
  *(float *)(this + 0x100) = param_1;
  this[0x104] = (Director)0x1;
  mainLoop(this);
  return;
}

