
/* virtual thunk to
   dragonBones::CCArmatureDisplay::hasDBEventListener(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall
dragonBones::CCArmatureDisplay::hasDBEventListener(CCArmatureDisplay *this,basic_string *param_1)

{
  cocos2d::EventDispatcher::isEnabled
            (*(EventDispatcher **)(this + *(long *)(*(long *)this + -0x20) + 0x308));
  return;
}

