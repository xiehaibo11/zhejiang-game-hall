
/* std::__ndk1::__tree<v8::internal::HeapObject, v8::internal::Object::Comparer,
   std::__ndk1::allocator<v8::internal::HeapObject>
   >::destroy(std::__ndk1::__tree_node<v8::internal::HeapObject, void*>*) */

void __thiscall
std::__ndk1::
__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
::destroy(__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
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

