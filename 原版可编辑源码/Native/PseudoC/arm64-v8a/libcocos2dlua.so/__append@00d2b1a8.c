
/* std::__ndk1::vector<cocos2d::MeshVertexAttrib, std::__ndk1::allocator<cocos2d::MeshVertexAttrib>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
__append(vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>> *this,
        ulong param_1)

{
  void *__s;
  void *__dest;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  ulong uVar5;
  
  puVar1 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar1 >> 4)) {
    puVar2 = puVar1;
    if (param_1 != 0) {
      puVar2 = puVar1 + param_1 * 2;
      lVar3 = param_1 << 4;
      do {
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar3 = lVar3 + -0x10;
        puVar1 = puVar1 + 2;
      } while (lVar3 != 0);
    }
    *(undefined8 **)(this + 8) = puVar2;
    return;
  }
  __src = *(void **)this;
  __n = (long)puVar1 - (long)__src;
  uVar5 = ((long)__n >> 4) + param_1;
  if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar3 >> 4) < 0x7ffffffffffffff) {
    uVar4 = lVar3 >> 3;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d2b264;
    }
    if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar5 = 0xfffffffffffffff;
  }
  __dest = operator_new(uVar5 << 4);
LAB_00d2b264:
  __s = (void *)((long)__dest + ((long)__n >> 4) * 0x10);
  memset(__s,0,param_1 * 0x10);
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__s + param_1 * 0x10);
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar5 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

