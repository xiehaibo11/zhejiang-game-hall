
/* cocos2d::FileUtils::getSuitableFOpen(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

basic_string * cocos2d::FileUtils::getSuitableFOpen(basic_string *param_1)

{
  ulong *in_x1;
  ulong *in_x8;
  void *__dest;
  ulong uVar1;
  void *__src;
  ulong uVar2;
  
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if ((*in_x1 & 1) == 0) {
    uVar2 = in_x1[1];
    uVar1 = *in_x1;
    in_x8[2] = in_x1[2];
    in_x8[1] = uVar2;
    *in_x8 = uVar1;
    return param_1;
  }
  uVar1 = in_x1[1];
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)in_x1[2];
  if (uVar1 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar1 << 1);
    if (uVar1 == 0) goto LAB_00876e38;
  }
  else {
    uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    in_x8[1] = uVar1;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  param_1 = memcpy(__dest,__src,uVar1);
LAB_00876e38:
  *(undefined1 *)((long)__dest + uVar1) = 0;
  return param_1;
}

