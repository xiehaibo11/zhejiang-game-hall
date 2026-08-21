
/* cocos2d::Director::setAlphaBlending(bool) */

void __thiscall cocos2d::Director::setAlphaBlending(Director *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = 0x303;
  if (!param_1) {
    uVar1 = 0;
  }
  GL::blendFunc(1,uVar1);
  return;
}

