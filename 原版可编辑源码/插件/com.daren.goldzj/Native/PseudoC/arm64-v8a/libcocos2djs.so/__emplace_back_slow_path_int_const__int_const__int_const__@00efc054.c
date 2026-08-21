
/* void std::__ndk1::vector<v8::internal::CoverageBlock,
   std::__ndk1::allocator<v8::internal::CoverageBlock> >::__emplace_back_slow_path<int const&, int
   const&, int const&>(int const&, int const&, int const&) */

void __thiscall
std::__ndk1::vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
::__emplace_back_slow_path<int_const&,int_const&,int_const&>
          (vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
           *this,int *param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (uVar1 < 0x1555555555555556) {
    lVar5 = *(long *)(this + 0x10) - (long)__src >> 2;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0x1555555555555555;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < uVar1) goto LAB_00efc178;
      pvVar4 = operator_new(uVar1 * 0xc);
    }
    iVar2 = *param_2;
    iVar3 = *param_3;
    piVar7 = (int *)((long)pvVar4 + ((long)__n >> 2) * 4);
    *piVar7 = *param_1;
    piVar7[1] = iVar2;
    piVar7[2] = iVar3;
    if (0 < (long)__n) {
      memcpy((void *)((long)piVar7 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)piVar7 - __n);
    *(int **)(this + 8) = piVar7 + 3;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0xc);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_00efc178:
                    /* WARNING: Subroutine does not return */
  abort();
}

