
/* std::__ndk1::__tree<std::__ndk1::__value_type<double, std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> > >, std::__ndk1::__map_value_compare<double,
   std::__ndk1::__value_type<double, std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> > >, std::__ndk1::less<double>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<double, std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> > > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<double,
   std::__ndk1::unique_ptr<v8::Task, std::__ndk1::default_delete<v8::Task> > >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::__map_value_compare<double,std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::less<double>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>>
::destroy(__tree<std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::__map_value_compare<double,std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::less<double>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>>
          *this,__tree_node *param_1)

{
  long *plVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    plVar1 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    operator_delete(param_1);
    return;
  }
  return;
}

