
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> >,
   std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> >,
   std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
::destroy(__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    if (*(long *)(param_1 + 0x40) != 0) {
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    }
  }
  return;
}

