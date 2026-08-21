
/* void std::__ndk1::vector<v8::AllocationProfile::Allocation,
   std::__ndk1::allocator<v8::AllocationProfile::Allocation>
   >::__push_back_slow_path<v8::AllocationProfile::Allocation>(v8::AllocationProfile::Allocation&&)
    */

void __thiscall
std::__ndk1::
vector<v8::AllocationProfile::Allocation,std::__ndk1::allocator<v8::AllocationProfile::Allocation>>
::__push_back_slow_path<v8::AllocationProfile::Allocation>
          (vector<v8::AllocationProfile::Allocation,std::__ndk1::allocator<v8::AllocationProfile::Allocation>>
           *this,Allocation *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  undefined8 uVar4;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar3 = *(long *)(this + 0x10) - (long)__src >> 3;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0x7fffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) goto LAB_011b7d84;
      __dest = operator_new(uVar1 << 4);
    }
    uVar4 = *(undefined8 *)param_1;
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar4;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(undefined8 **)(this + 8) = puVar2 + 2;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_011b7d84:
                    /* WARNING: Subroutine does not return */
  abort();
}

