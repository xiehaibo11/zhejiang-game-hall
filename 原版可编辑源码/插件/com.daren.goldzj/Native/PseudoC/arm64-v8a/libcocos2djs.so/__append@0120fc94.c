
/* std::__ndk1::vector<v8::internal::wasm::WasmCode*,
   std::__ndk1::allocator<v8::internal::wasm::WasmCode*> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>::
__append(vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
         *this,ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  void *__dest;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  size_t __n;
  void *__s;
  
  puVar3 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 3)) {
    do {
      *puVar3 = 0;
      param_1 = param_1 - 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar3;
    } while (param_1 != 0);
    return;
  }
  __src = *(void **)this;
  __n = (long)puVar3 - (long)__src;
  uVar1 = ((long)__n >> 3) + param_1;
  if (uVar1 >> 0x3d != 0) {
LAB_0120fde8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(this + 0x10) - (long)__src;
  uVar6 = lVar4 >> 2;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) goto LAB_0120fde8;
    __dest = operator_new(uVar1 << 3);
  }
  __s = (void *)((long)__dest + ((long)__n >> 3) * 8);
  memset(__s,0,param_1 << 3);
  if (1 < param_1) {
    uVar5 = param_1 & 0xfffffffffffffffe;
    __s = (void *)((long)__s + uVar5 * 8);
    uVar6 = uVar5;
    do {
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0);
    bVar2 = uVar5 == param_1;
    param_1 = param_1 - uVar5;
    if (bVar2) goto LAB_0120fd88;
  }
  do {
    param_1 = param_1 - 1;
    __s = (void *)((long)__s + 8);
  } while (param_1 != 0);
LAB_0120fd88:
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __src = *(void **)this;
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = __s;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

