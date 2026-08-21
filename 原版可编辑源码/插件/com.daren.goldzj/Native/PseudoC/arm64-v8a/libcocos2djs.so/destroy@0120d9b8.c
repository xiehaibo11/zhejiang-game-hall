
/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long, std::__ndk1::pair<unsigned long,
   v8::internal::wasm::NativeModule*> >, std::__ndk1::__map_value_compare<unsigned long,
   std::__ndk1::__value_type<unsigned long, std::__ndk1::pair<unsigned long,
   v8::internal::wasm::NativeModule*> >, std::__ndk1::less<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long, std::__ndk1::pair<unsigned long,
   v8::internal::wasm::NativeModule*> > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::pair<unsigned long, v8::internal::wasm::NativeModule*> >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>>>
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

