
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
   >::erase(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,
   std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,
   std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job> > >, void*>*, long>) */

long * __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
::erase(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
        *this,__tree_node_base *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  BackgroundCompileTask *this_00;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    p_Var2 = param_2 + 0x10;
    plVar4 = *(long **)p_Var2;
    if ((__tree_node_base *)*plVar4 != param_2) {
      do {
        lVar3 = *(long *)p_Var2;
        p_Var2 = (__tree_node_base *)(lVar3 + 0x10);
        plVar4 = *(long **)p_Var2;
      } while (*plVar4 != lVar3);
    }
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if (*(__tree_node_base **)this == param_2) {
    *(long **)this = plVar4;
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  __tree_remove<std::__ndk1::__tree_node_base<void*>*>(*(__tree_node_base **)(this + 8),param_2);
  puVar5 = *(undefined8 **)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    this_00 = (BackgroundCompileTask *)*puVar5;
    *puVar5 = 0;
    if (this_00 != (BackgroundCompileTask *)0x0) {
      v8::internal::BackgroundCompileTask::~BackgroundCompileTask(this_00);
      operator_delete(this_00);
    }
    operator_delete(puVar5);
  }
  operator_delete(param_2);
  return plVar4;
}

