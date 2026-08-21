
/* cocos2d::extension::ControlSwitchSprite::updateTweenAction(float, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::extension::ControlSwitchSprite::updateTweenAction(float param_1,basic_string *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x540);
  if ((*(float *)(param_2 + 0x540) < param_1) &&
     (fVar1 = param_1, *(float *)(param_2 + 0x53c) <= param_1)) {
    fVar1 = *(float *)(param_2 + 0x53c);
  }
  *(float *)(param_2 + 0x538) = fVar1;
  needsLayout((ControlSwitchSprite *)param_2);
  return;
}

