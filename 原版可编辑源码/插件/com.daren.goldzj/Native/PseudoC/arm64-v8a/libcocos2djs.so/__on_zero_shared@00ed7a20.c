
/* std::__ndk1::__shared_ptr_pointer<v8::internal::BackingStore*,
   std::__ndk1::default_delete<v8::internal::BackingStore>,
   std::__ndk1::allocator<v8::internal::BackingStore> >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<v8::internal::BackingStore*,std::__ndk1::default_delete<v8::internal::BackingStore>,std::__ndk1::allocator<v8::internal::BackingStore>>
::__on_zero_shared(__shared_ptr_pointer<v8::internal::BackingStore*,std::__ndk1::default_delete<v8::internal::BackingStore>,std::__ndk1::allocator<v8::internal::BackingStore>>
                   *this)

{
  BackingStore *this_00;
  
  this_00 = *(BackingStore **)(this + 0x18);
  if (this_00 != (BackingStore *)0x0) {
    v8::internal::BackingStore::~BackingStore(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

