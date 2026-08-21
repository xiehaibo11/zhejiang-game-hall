
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>
   >::value&&is_constructible<v8::internal::wasm::WasmCompilationUnit,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>
   >::reference>::value, void>::type std::__ndk1::vector<v8::internal::wasm::WasmCompilationUnit,
   std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>
   >::assign<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>
   >(std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
::assign<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>>
          (vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  size_t __n;
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = *(long *)(this + 0x10);
  __dest = *(void **)this;
  uVar4 = (long)param_3 - (long)param_2 >> 3;
  if (uVar4 <= (ulong)(lVar2 - (long)__dest >> 3)) {
    uVar6 = *(long *)(this + 8) - (long)__dest >> 3;
    puVar1 = (undefined8 *)((long)param_2 + (*(long *)(this + 8) - (long)__dest));
    if (uVar4 <= uVar6) {
      puVar1 = param_3;
    }
    __n = (long)puVar1 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar6 < uVar4) {
      if (puVar1 != param_3) {
        puVar3 = *(undefined8 **)(this + 8);
        do {
          puVar5 = puVar1 + 1;
          *puVar3 = *puVar1;
          puVar3 = (undefined8 *)(*(long *)(this + 8) + 8);
          *(undefined8 **)(this + 8) = puVar3;
          puVar1 = puVar5;
        } while (param_3 != puVar5);
      }
    }
    else {
      *(void **)(this + 8) = (void *)((long)__dest + ((long)__n >> 3) * 8);
    }
    return;
  }
  if (__dest != (void *)0x0) {
    *(void **)(this + 8) = __dest;
    operator_delete(__dest);
    lVar2 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar4 >> 0x3d == 0) {
    if (uVar4 <= (ulong)(lVar2 >> 2)) {
      uVar4 = lVar2 >> 2;
    }
    if (0xffffffffffffffe < (ulong)(lVar2 >> 3)) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 >> 0x3d == 0) {
      puVar1 = operator_new(uVar4 * 8);
      *(undefined8 **)this = puVar1;
      *(undefined8 **)(this + 8) = puVar1;
      *(undefined8 **)(this + 0x10) = puVar1 + uVar4;
      for (; param_2 != param_3; param_2 = param_2 + 1) {
        *puVar1 = *param_2;
        puVar1 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

