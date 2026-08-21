
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::HeapObject, v8::internal::Root>,
   std::__ndk1::__map_value_compare<v8::internal::HeapObject,
   std::__ndk1::__value_type<v8::internal::HeapObject, v8::internal::Root>,
   v8::internal::Object::Comparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject, v8::internal::Root> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::HeapObject,
   v8::internal::Root>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>>>
::destroy(__tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

