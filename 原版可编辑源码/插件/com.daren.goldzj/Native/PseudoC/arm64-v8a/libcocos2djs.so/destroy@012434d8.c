
/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry>, std::__ndk1::__map_value_compare<unsigned long,
   std::__ndk1::__value_type<unsigned long, v8::internal::wasm::ControlTransferEntry>,
   std::__ndk1::less<unsigned long>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

