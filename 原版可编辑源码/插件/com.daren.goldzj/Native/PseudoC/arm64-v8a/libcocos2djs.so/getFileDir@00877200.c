
/* cocos2d::FileUtils::getFileDir(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtils::getFileDir(basic_string *param_1)

{
  ulong __n;
  byte *__src;
  long lVar1;
  long lVar2;
  byte *in_x1;
  ulong *in_x8;
  long lVar3;
  void *__dest;
  ulong uVar4;
  byte local_78;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  __n = *(ulong *)(in_x1 + 8);
  __src = *(byte **)(in_x1 + 0x10);
  if ((*in_x1 & 1) == 0) {
    __src = in_x1 + 1;
    __n = (ulong)(*in_x1 >> 1);
  }
  if ((long)__n < 1) goto LAB_00877308;
  lVar3 = 0;
  do {
    if (__n + lVar3 == 0) goto LAB_00877308;
    lVar2 = lVar3 + __n;
    lVar3 = lVar3 + -1;
  } while (__src[lVar2 + -1] != 0x2f);
  if ((lVar3 == 0) || (uVar4 = __n + lVar3, uVar4 == 0xffffffffffffffff)) goto LAB_00877308;
  if (uVar4 <= __n) {
    __n = uVar4;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (void *)0x0;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_008772e4;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_60 = uVar4 | 1;
    uStack_58 = __n;
    local_50 = __dest;
LAB_008772e4:
    param_1 = memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  in_x8[2] = (ulong)local_50;
  in_x8[1] = uStack_58;
  *in_x8 = local_60;
LAB_00877308:
  normalizePath(param_1);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

