
/* cocos2d::Director::updateFrameRate() */

void __thiscall cocos2d::Director::updateFrameRate(Director *this)

{
  *(float *)(this + 0x128) = 1.0 / *(float *)(this + 0x100);
  return;
}

