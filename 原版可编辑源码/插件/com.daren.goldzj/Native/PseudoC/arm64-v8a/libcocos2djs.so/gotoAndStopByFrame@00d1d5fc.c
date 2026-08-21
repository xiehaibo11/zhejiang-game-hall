
/* dragonBones::Animation::gotoAndStopByFrame(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int) */

AnimationState * __thiscall
dragonBones::Animation::gotoAndStopByFrame(Animation *this,basic_string *param_1,uint param_2)

{
  AnimationState *this_00;
  
  this_00 = (AnimationState *)gotoAndPlayByFrame(this,param_1,param_2,1);
  if (this_00 != (AnimationState *)0x0) {
    AnimationState::stop(this_00);
  }
  return this_00;
}

