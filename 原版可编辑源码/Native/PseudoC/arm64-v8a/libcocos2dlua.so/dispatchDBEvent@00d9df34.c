
/* virtual thunk to dragonBones::CCArmatureDisplay::dispatchDBEvent(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, dragonBones::EventObject*)
    */

void __thiscall
dragonBones::CCArmatureDisplay::dispatchDBEvent
          (CCArmatureDisplay *this,basic_string *param_1,EventObject *param_2)

{
  cocos2d::EventDispatcher::dispatchCustomEvent
            (*(EventDispatcher **)(this + *(long *)(*(long *)this + -0x28) + 0x308),param_1,param_2)
  ;
  return;
}

