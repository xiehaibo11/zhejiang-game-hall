
/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, se::Value>::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&>(std::__ndk1::piecewise_construct_t, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<>) */

void std::__ndk1::
     pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,se::Value>
     ::
     pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
               (ulong *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((*param_3 & 1) == 0) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[2] = param_3[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    goto LAB_008f2be8;
  }
  uVar1 = param_3[1];
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_3[2];
  if (uVar1 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar1 << 1);
    if (uVar1 != 0) goto LAB_008f2bd4;
  }
  else {
    uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    param_1[1] = uVar1;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
LAB_008f2bd4:
    memcpy(__dest,__src,uVar1);
  }
  *(undefined1 *)((long)__dest + uVar1) = 0;
LAB_008f2be8:
  se::Value::Value((Value *)(param_1 + 3));
  return;
}

