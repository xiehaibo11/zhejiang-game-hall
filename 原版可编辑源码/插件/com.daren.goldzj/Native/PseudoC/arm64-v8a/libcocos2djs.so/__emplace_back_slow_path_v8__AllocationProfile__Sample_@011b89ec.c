
/* void std::__ndk1::vector<v8::AllocationProfile::Sample,
   std::__ndk1::allocator<v8::AllocationProfile::Sample>
   >::__emplace_back_slow_path<v8::AllocationProfile::Sample>(v8::AllocationProfile::Sample&&) */

void __thiscall
std::__ndk1::
vector<v8::AllocationProfile::Sample,std::__ndk1::allocator<v8::AllocationProfile::Sample>>::
__emplace_back_slow_path<v8::AllocationProfile::Sample>
          (vector<v8::AllocationProfile::Sample,std::__ndk1::allocator<v8::AllocationProfile::Sample>>
           *this,Sample *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar3 = *(long *)(this + 0x10) - (long)__src >> 4;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0x3fffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) goto LAB_011b8ad8;
      __dest = operator_new(uVar1 << 5);
    }
    uVar4 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 5) * 0x20);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(undefined8 **)(this + 8) = puVar2 + 4;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x20);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_011b8ad8:
                    /* WARNING: Subroutine does not return */
  abort();
}

