
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::allocator<char> const&) */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     basic_string(basic_string *param_1,allocator *param_2)

{
  ulong uVar1;
  void *__src;
  basic_string *__dest;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((byte)*param_2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)param_1 = uVar3;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    __src = *(void **)(param_2 + 0x10);
    if (uVar1 < 0x17) {
      __dest = param_1 + 1;
      *param_1 = SUB41((int)uVar1 << 1,0);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        __basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar2);
      *(ulong *)(param_1 + 8) = uVar1;
      *(basic_string **)(param_1 + 0x10) = __dest;
      *(ulong *)param_1 = uVar2 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  return;
}

