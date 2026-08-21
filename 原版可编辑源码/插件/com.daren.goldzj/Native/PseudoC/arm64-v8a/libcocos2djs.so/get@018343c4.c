
/* std::__ndk1::future<void>::get() */

void __thiscall std::__ndk1::future<void>::get(future<void> *this)

{
  __assoc_sub_state *this_00;
  
  this_00 = *(__assoc_sub_state **)this;
  *(undefined8 *)this = 0;
  __assoc_sub_state::copy(this_00);
  if (this_00 != (__assoc_sub_state *)0x0) {
    __shared_count::__release_shared((__shared_count *)this_00);
    return;
  }
  return;
}

