
/* std::__ndk1::__tree<v8::internal::wasm::NativeModule*,
   std::__ndk1::less<v8::internal::wasm::NativeModule*>,
   std::__ndk1::allocator<v8::internal::wasm::NativeModule*>
   >::destroy(std::__ndk1::__tree_node<v8::internal::wasm::NativeModule*, void*>*) */

void __thiscall
std::__ndk1::
__tree<v8::internal::wasm::NativeModule*,std::__ndk1::less<v8::internal::wasm::NativeModule*>,std::__ndk1::allocator<v8::internal::wasm::NativeModule*>>
::destroy(__tree<v8::internal::wasm::NativeModule*,std::__ndk1::less<v8::internal::wasm::NativeModule*>,std::__ndk1::allocator<v8::internal::wasm::NativeModule*>>
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

