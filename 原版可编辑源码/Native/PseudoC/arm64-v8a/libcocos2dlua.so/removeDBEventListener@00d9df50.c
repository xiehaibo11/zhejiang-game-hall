
/* virtual thunk to
   dragonBones::CCArmatureDisplay::removeDBEventListener(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (dragonBones::EventObject*)> const&) */

void __thiscall
dragonBones::CCArmatureDisplay::removeDBEventListener
          (CCArmatureDisplay *this,basic_string *param_1,function *param_2)

{
  cocos2d::EventDispatcher::removeCustomEventListeners
            (*(basic_string **)(this + *(long *)(*(long *)this + -0x38) + 0x308));
  return;
}

