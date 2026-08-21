
/* std::__ndk1::__shared_ptr_emplace<cocos2d::Scheduler, std::__ndk1::allocator<cocos2d::Scheduler>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<cocos2d::Scheduler,std::__ndk1::allocator<cocos2d::Scheduler>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::Scheduler,std::__ndk1::allocator<cocos2d::Scheduler>> *this
          )

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c66498;
  cocos2d::Scheduler::~Scheduler((Scheduler *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

