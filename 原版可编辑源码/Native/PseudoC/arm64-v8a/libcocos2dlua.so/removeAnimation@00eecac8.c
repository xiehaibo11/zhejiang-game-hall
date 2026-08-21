
/* cocos2d::AnimationCache::removeAnimation(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::AnimationCache::removeAnimation(AnimationCache *this,basic_string *param_1)

{
  ulong uVar1;
  
                    /* try { // try from 00eecacc to 00fecb1f has its CatchHandler @ 00eeca70 */
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>
    ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>
             *)(this + 0x28),param_1);
    return;
  }
  return;
}

