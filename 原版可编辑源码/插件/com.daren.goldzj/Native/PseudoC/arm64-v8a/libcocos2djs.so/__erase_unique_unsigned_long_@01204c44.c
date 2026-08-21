
/* unsigned long std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCode> > >,
   std::__ndk1::__map_value_compare<unsigned long, std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCode> > >, std::__ndk1::less<unsigned long>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCode> > > > >::__erase_unique<unsigned
   long>(unsigned long const&) */

ulong __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>>
::__erase_unique<unsigned_long>
          (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>>
           *this,ulong *param_1)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  long *plVar4;
  ulong uVar5;
  __tree_node_base *p_Var6;
  long lVar7;
  __tree_node_base *p_Var8;
  
  p_Var3 = (__tree_node_base *)(this + 8);
  p_Var2 = *(__tree_node_base **)p_Var3;
  uVar5 = 0;
  if (p_Var2 != (__tree_node_base *)0x0) {
    uVar5 = *param_1;
    p_Var6 = p_Var2;
    p_Var8 = p_Var3;
    do {
      if (*(ulong *)(p_Var6 + 0x20) >= uVar5) {
        p_Var8 = p_Var6;
      }
      p_Var6 = *(__tree_node_base **)(p_Var6 + (ulong)(*(ulong *)(p_Var6 + 0x20) < uVar5) * 8);
    } while (p_Var6 != (__tree_node_base *)0x0);
    if ((p_Var8 == p_Var3) || (uVar5 < *(ulong *)(p_Var8 + 0x20))) {
      uVar5 = 0;
    }
    else {
      plVar1 = *(long **)(p_Var8 + 8);
      if (*(long **)(p_Var8 + 8) == (long *)0x0) {
        p_Var3 = p_Var8 + 0x10;
        plVar4 = *(long **)p_Var3;
        if ((__tree_node_base *)*plVar4 != p_Var8) {
          do {
            lVar7 = *(long *)p_Var3;
            p_Var3 = (__tree_node_base *)(lVar7 + 0x10);
            plVar4 = *(long **)p_Var3;
          } while (*plVar4 != lVar7);
        }
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if (*(__tree_node_base **)this == p_Var8) {
        *(long **)this = plVar4;
      }
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      __tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var2,p_Var8);
      FUN_012017d0(p_Var8 + 0x28);
      operator_delete(p_Var8);
      uVar5 = 1;
    }
  }
  return uVar5;
}

