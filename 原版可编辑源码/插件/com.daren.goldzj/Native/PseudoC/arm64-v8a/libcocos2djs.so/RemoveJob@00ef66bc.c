
/* v8::internal::CompilerDispatcher::RemoveJob(std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned
   long, std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,
   std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,
   std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job> > >, void*>*, long> >) */

void __thiscall v8::internal::CompilerDispatcher::RemoveJob(CompilerDispatcher *this,long param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(*(long *)(param_2 + 0x28) + 8);
  if (puVar1 != (ulong *)0x0) {
    GlobalHandles::Destroy(puVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
  ::erase((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
           *)(this + 0x58),param_2);
  return;
}

