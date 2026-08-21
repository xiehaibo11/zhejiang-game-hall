
/* void std::__ndk1::vector<v8::internal::TypedSlots::TypedSlot,
   std::__ndk1::allocator<v8::internal::TypedSlots::TypedSlot>
   >::__push_back_slow_path<v8::internal::TypedSlots::TypedSlot
   const&>(v8::internal::TypedSlots::TypedSlot const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::TypedSlots::TypedSlot,std::__ndk1::allocator<v8::internal::TypedSlots::TypedSlot>>
::__push_back_slow_path<v8::internal::TypedSlots::TypedSlot_const&>
          (vector<v8::internal::TypedSlots::TypedSlot,std::__ndk1::allocator<v8::internal::TypedSlots::TypedSlot>>
           *this,TypedSlot *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 2) + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar3 = *(long *)(this + 0x10) - (long)__src >> 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0x1ffffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src >> 2)) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3e != 0) goto LAB_01010d70;
      __dest = operator_new(uVar1 << 2);
    }
    puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
    *puVar2 = *(undefined4 *)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(undefined4 **)(this + 8) = puVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_01010d70:
                    /* WARNING: Subroutine does not return */
  abort();
}

