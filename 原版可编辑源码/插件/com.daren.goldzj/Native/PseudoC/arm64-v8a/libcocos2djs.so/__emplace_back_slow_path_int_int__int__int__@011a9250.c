
/* void std::__ndk1::vector<v8::internal::SourceLocation,
   std::__ndk1::allocator<v8::internal::SourceLocation> >::__emplace_back_slow_path<int, int&, int&,
   int&>(int&&, int&, int&, int&) */

void __thiscall
std::__ndk1::
vector<v8::internal::SourceLocation,std::__ndk1::allocator<v8::internal::SourceLocation>>::
__emplace_back_slow_path<int,int&,int&,int&>
          (vector<v8::internal::SourceLocation,std::__ndk1::allocator<v8::internal::SourceLocation>>
           *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *__dest;
  ulong uVar6;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar6 = *(long *)(this + 0x10) - (long)__src >> 3;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) goto LAB_011a9364;
      __dest = operator_new(uVar1 << 4);
    }
    iVar3 = *param_2;
    iVar4 = *param_3;
    iVar5 = *param_4;
    piVar2 = (int *)((long)__dest + ((long)__n >> 4) * 0x10);
    *piVar2 = *param_1;
    piVar2[1] = iVar3;
    piVar2[2] = iVar4;
    piVar2[3] = iVar5;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(int **)(this + 8) = piVar2 + 4;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_011a9364:
                    /* WARNING: Subroutine does not return */
  abort();
}

