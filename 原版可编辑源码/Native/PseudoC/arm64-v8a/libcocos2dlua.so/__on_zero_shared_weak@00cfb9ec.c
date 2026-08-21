
/* std::__ndk1::__shared_ptr_emplace<cocos2d::Map<cocos2d::Node*,
   cocosbuilder::CCBAnimationManager*>, std::__ndk1::allocator<cocos2d::Map<cocos2d::Node*,
   cocosbuilder::CCBAnimationManager*> > >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::allocator<cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>>>
::__on_zero_shared_weak
          (__shared_ptr_emplace<cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::allocator<cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>>>
           *this)

{
  operator_delete(this);
  return;
}

