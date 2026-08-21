
/* std::__ndk1::__shared_ptr_emplace<cocos2d::Map<cocos2d::Node*,
   cocosbuilder::CCBAnimationManager*>, std::__ndk1::allocator<cocos2d::Map<cocos2d::Node*,
   cocosbuilder::CCBAnimationManager*> > >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::allocator<cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::allocator<cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_016cfcb0;
  cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>::~Map
            ((Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*> *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

