
/* void std::__ndk1::vector<v8::internal::HeapObjectsMap::EntryInfo,
   std::__ndk1::allocator<v8::internal::HeapObjectsMap::EntryInfo> >::__emplace_back_slow_path<int,
   unsigned long const&, int, bool>(int&&, unsigned long const&, int&&, bool&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::HeapObjectsMap::EntryInfo,std::__ndk1::allocator<v8::internal::HeapObjectsMap::EntryInfo>>
::__emplace_back_slow_path<int,unsigned_long_const&,int,bool>
          (vector<v8::internal::HeapObjectsMap::EntryInfo,std::__ndk1::allocator<v8::internal::HeapObjectsMap::EntryInfo>>
           *this,int *param_1,ulong *param_2,int *param_3,bool *param_4)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar5 = *(long *)(this + 0x10) - (long)__src >> 3;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_011aa4b0;
      pvVar4 = operator_new(uVar1 * 0x18);
    }
    uVar6 = *param_2;
    iVar2 = *param_3;
    bVar3 = *param_4;
    piVar7 = (int *)((long)pvVar4 + ((long)__n >> 3) * 8);
    *piVar7 = *param_1;
    *(ulong *)(piVar7 + 2) = uVar6;
    piVar7[4] = iVar2;
    *(bool *)(piVar7 + 5) = bVar3;
    if (0 < (long)__n) {
      memcpy((void *)((long)piVar7 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)piVar7 - __n);
    *(int **)(this + 8) = piVar7 + 6;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_011aa4b0:
                    /* WARNING: Subroutine does not return */
  abort();
}

