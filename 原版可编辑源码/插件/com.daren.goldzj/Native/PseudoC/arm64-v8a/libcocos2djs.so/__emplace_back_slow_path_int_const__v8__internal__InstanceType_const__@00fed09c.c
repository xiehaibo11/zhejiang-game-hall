
/* void std::__ndk1::vector<std::__ndk1::pair<int, v8::internal::InstanceType>,
   std::__ndk1::allocator<std::__ndk1::pair<int, v8::internal::InstanceType> >
   >::__emplace_back_slow_path<int const&, v8::internal::InstanceType const&>(int const&,
   v8::internal::InstanceType const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<int,v8::internal::InstanceType>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::InstanceType>>>
::__emplace_back_slow_path<int_const&,v8::internal::InstanceType_const&>
          (vector<std::__ndk1::pair<int,v8::internal::InstanceType>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::InstanceType>>>
           *this,int *param_1,InstanceType *param_2)

{
  ulong uVar1;
  int *piVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar3 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0xffffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_00fed194;
      __dest = operator_new(uVar1 << 3);
    }
    piVar2 = (int *)((long)__dest + ((long)__n >> 3) * 8);
    *piVar2 = *param_1;
    *(undefined2 *)(piVar2 + 1) = *(undefined2 *)param_2;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(int **)(this + 8) = piVar2 + 2;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_00fed194:
                    /* WARNING: Subroutine does not return */
  abort();
}

