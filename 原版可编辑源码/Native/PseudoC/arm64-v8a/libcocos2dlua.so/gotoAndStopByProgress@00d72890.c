
/* dragonBones::Animation::gotoAndStopByProgress(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float) */

AnimationState * __thiscall
dragonBones::Animation::gotoAndStopByProgress(Animation *this,basic_string *param_1,float param_2)

{
  AnimationState *this_00;
  
  this_00 = (AnimationState *)gotoAndPlayByProgress(this,param_1,param_2,1);
  if (this_00 != (AnimationState *)0x0) {
    AnimationState::stop(this_00);
  }
  return this_00;
}

