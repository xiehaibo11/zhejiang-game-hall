
/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,
   std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job> > >,
   std::__ndk1::__map_value_compare<unsigned long, std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,
   std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job> > >,
   std::__ndk1::less<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,
   std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job> > > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,
   std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job> > >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
          *this,__tree_node *param_1)

{
  undefined8 *puVar1;
  BackgroundCompileTask *this_00;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      this_00 = (BackgroundCompileTask *)*puVar1;
      *puVar1 = 0;
      if (this_00 != (BackgroundCompileTask *)0x0) {
        v8::internal::BackgroundCompileTask::~BackgroundCompileTask(this_00);
        operator_delete(this_00);
      }
      operator_delete(puVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}

