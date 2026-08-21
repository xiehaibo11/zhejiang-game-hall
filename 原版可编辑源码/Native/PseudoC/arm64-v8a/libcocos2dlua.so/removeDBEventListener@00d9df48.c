
/* dragonBones::CCArmatureDisplay::removeDBEventListener(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (dragonBones::EventObject*)> const&) */

void dragonBones::CCArmatureDisplay::removeDBEventListener(basic_string *param_1,function *param_2)

{
  cocos2d::EventDispatcher::removeCustomEventListeners(*(basic_string **)(param_1 + 0x308));
  return;
}

