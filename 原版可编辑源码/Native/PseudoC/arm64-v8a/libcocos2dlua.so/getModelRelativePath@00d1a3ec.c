
/* cocos2d::Bundle3D::getModelRelativePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Bundle3D::getModelRelativePath(Bundle3D *this,basic_string *param_1)

{
  ulong __n;
  basic_string *__src;
  long lVar1;
  ulong uVar2;
  Bundle3D *pBVar3;
  void *__dest;
  ulong uVar4;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __n = *(ulong *)(param_1 + 8);
  __src = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
    __n = (ulong)((byte)*param_1 >> 1);
  }
  uVar4 = __n;
  if (__n == 0) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = uVar4;
      if (uVar2 == 0) break;
      uVar4 = uVar2 - 1;
    } while (__src[uVar2 - 1] != (basic_string)0x2f);
  }
  if (uVar2 <= __n) {
    __n = uVar2;
  }
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = (ulong)(byte)((int)__n << 1);
    if (__n == 0) goto LAB_00d1a4c0;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_60 = uVar4 | 1;
    uStack_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,__src,__n);
LAB_00d1a4c0:
  *(undefined1 *)((long)__dest + __n) = 0;
  pBVar3 = this + 8;
  if (((byte)*pBVar3 & 1) == 0) {
    *(undefined2 *)pBVar3 = 0;
  }
  else {
    **(undefined1 **)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    if (((byte)this[8] & 1) != 0) {
      operator_delete(*(void **)(this + 0x18));
      *(undefined8 *)(this + 8) = 0;
    }
  }
  *(void **)(this + 0x18) = local_50;
  *(ulong *)(this + 0x10) = uStack_58;
  *(ulong *)pBVar3 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

