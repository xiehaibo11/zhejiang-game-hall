
/* non-virtual thunk to cocos2d::extension::ControlSwitchSprite::updateTweenAction(float,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::ControlSwitchSprite::updateTweenAction
          (ControlSwitchSprite *this,float param_1,basic_string *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x10);
  if ((*(float *)(this + 0x10) < param_1) && (fVar1 = param_1, *(float *)(this + 0xc) <= param_1)) {
    fVar1 = *(float *)(this + 0xc);
  }
  *(float *)(this + 8) = fVar1;
  needsLayout(this + -0x530);
  return;
}

