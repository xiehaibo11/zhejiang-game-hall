
/* std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */

void __thiscall std::__ndk1::__assoc_sub_state::~__assoc_sub_state(__assoc_sub_state *this)

{
  *(undefined ***)this = &PTR____assoc_sub_state_017313e8;
  condition_variable::~condition_variable((condition_variable *)(this + 0x40));
  mutex::~mutex((mutex *)(this + 0x18));
  exception_ptr::~exception_ptr((exception_ptr *)(this + 0x10));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

