
/* std::__ndk1::enable_if<__is_forward_iterator<v8::internal::wasm::ValueType
   const*>::value&&is_constructible<v8::internal::wasm::ValueType,
   std::__ndk1::iterator_traits<v8::internal::wasm::ValueType const*>::reference>::value,
   void>::type std::__ndk1::vector<v8::internal::wasm::ValueType,
   v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>
   >::assign<v8::internal::wasm::ValueType const*>(v8::internal::wasm::ValueType const*,
   v8::internal::wasm::ValueType const*) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::ValueType,v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>>::
assign<v8::internal::wasm::ValueType_const*>
          (vector<v8::internal::wasm::ValueType,v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>>
           *this,ValueType *param_1,ValueType *param_2)

{
  size_t __n;
  undefined1 *puVar1;
  ulong uVar2;
  Zone *this_00;
  void *__dest;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  uVar2 = *(ulong *)(this + 0x10);
  __dest = *(void **)this;
  uVar3 = (long)param_2 - (long)param_1;
  if (uVar3 <= uVar2 - (long)__dest) {
    uVar2 = *(long *)(this + 8) - (long)__dest;
    puVar1 = param_1 + uVar2;
    if (uVar3 <= uVar2) {
      puVar1 = param_2;
    }
    __n = (long)puVar1 - (long)param_1;
    if (__n != 0) {
      memmove(__dest,param_1,__n);
    }
    if (uVar2 < uVar3) {
      if (puVar1 != param_2) {
        puVar1 = *(undefined1 **)(this + 8);
        puVar5 = param_1 + uVar2;
        do {
          puVar4 = puVar5 + 1;
          *puVar1 = *puVar5;
          puVar1 = (undefined1 *)(*(long *)(this + 8) + 1);
          *(undefined1 **)(this + 8) = puVar1;
          puVar5 = puVar4;
        } while (param_2 != puVar4);
      }
    }
    else {
      *(size_t *)(this + 8) = (long)__dest + __n;
    }
    return;
  }
  if (__dest != (void *)0x0) {
    uVar2 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar3 >> 0x1f == 0) {
    if (uVar3 <= uVar2 << 1) {
      uVar3 = uVar2 << 1;
    }
    if (0x3ffffffe < uVar2) {
      uVar3 = 0x7fffffff;
    }
    if (uVar3 >> 0x1f == 0) {
      this_00 = *(Zone **)(this + 0x18);
      uVar2 = uVar3 + 7 & 0xfffffffffffffff8;
      puVar1 = *(undefined1 **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < uVar2) {
        puVar1 = (undefined1 *)v8::internal::Zone::NewExpand(this_00,uVar2);
      }
      else {
        *(undefined1 **)(this_00 + 0x10) = puVar1 + uVar2;
      }
      *(undefined1 **)this = puVar1;
      *(undefined1 **)(this + 8) = puVar1;
      *(undefined1 **)(this + 0x10) = puVar1 + uVar3;
      for (; param_1 != param_2; param_1 = param_1 + 1) {
        *puVar1 = *param_1;
        puVar1 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

