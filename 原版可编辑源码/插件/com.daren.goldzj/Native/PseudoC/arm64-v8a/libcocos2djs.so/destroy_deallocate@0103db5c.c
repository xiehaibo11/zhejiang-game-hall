
/* std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void
   ()>::destroy_deallocate() */

void __thiscall
std::__ndk1::__function::__func<void(*)(),std::__ndk1::allocator<void(*)()>,void()>::
destroy_deallocate(__func<void(*)(),std::__ndk1::allocator<void(*)()>,void()> *this)

{
  operator_delete(this);
  return;
}

