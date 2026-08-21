
/* std::__ndk1::__shared_ptr_emplace<cocos2d::Vector<cocos2d::Ref*>,
   std::__ndk1::allocator<cocos2d::Vector<cocos2d::Ref*> > >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::Vector<cocos2d::Ref*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Ref*>>>
::__on_zero_shared_weak
          (__shared_ptr_emplace<cocos2d::Vector<cocos2d::Ref*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Ref*>>>
           *this)

{
  operator_delete(this);
  return;
}

