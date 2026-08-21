
/* cocos2d::Label::setTTFConfig(cocos2d::_ttfConfig const&) */

void __thiscall cocos2d::Label::setTTFConfig(Label *this,_ttfConfig *param_1)

{
  *(undefined4 *)(this + 0x688) = *(undefined4 *)(param_1 + 0x18);
  setTTFConfigInternal(this,param_1);
  return;
}

