
/* void std::__ndk1::vector<cocos2d::BatchMesh::OnceDraw,
   std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>
   >::__push_back_slow_path<cocos2d::BatchMesh::OnceDraw const&>(cocos2d::BatchMesh::OnceDraw
   const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>>::
__push_back_slow_path<cocos2d::BatchMesh::OnceDraw_const&>
          (vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>>
           *this,OnceDraw *param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 5) + 1;
  if (uVar3 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 5) < 0x3ffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 4;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d13cc8;
    }
    if (uVar3 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x7ffffffffffffff;
  }
  __dest = operator_new(uVar3 << 5);
LAB_00d13cc8:
  uVar4 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 5) * 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *puVar1 = uVar4;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 4;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 0x20);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

