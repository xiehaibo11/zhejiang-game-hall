
/* void std::__ndk1::vector<v8::internal::CoverageBlock,
   std::__ndk1::allocator<v8::internal::CoverageBlock>
   >::__emplace_back_slow_path<v8::internal::CoverageBlock&>(v8::internal::CoverageBlock&) */

void __thiscall
std::__ndk1::vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
::__emplace_back_slow_path<v8::internal::CoverageBlock&>
          (vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
           *this,CoverageBlock *param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (uVar1 < 0x1555555555555556) {
    lVar4 = *(long *)(this + 0x10) - (long)__src >> 2;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar1 = 0x1555555555555555;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < uVar1) goto LAB_00efc5a8;
      pvVar2 = operator_new(uVar1 * 0xc);
    }
    uVar3 = *(undefined8 *)param_1;
    puVar6 = (undefined8 *)((long)pvVar2 + ((long)__n >> 2) * 4);
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
    *puVar6 = uVar3;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar6 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar6 - __n);
    *(long *)(this + 8) = (long)puVar6 + 0xc;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0xc);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_00efc5a8:
                    /* WARNING: Subroutine does not return */
  abort();
}

