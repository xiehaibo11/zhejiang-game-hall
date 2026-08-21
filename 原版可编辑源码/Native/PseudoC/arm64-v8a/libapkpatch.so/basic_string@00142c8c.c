
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&,
   std::__ndk1::allocator<wchar_t> const&) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     basic_string(basic_string *param_1,allocator *param_2)

{
  ulong uVar1;
  wchar_t *__s2;
  basic_string *__s1;
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
    __s2 = *(wchar_t **)(param_2 + 0x10);
    if (uVar1 < 5) {
      __s1 = param_1 + 4;
      *param_1 = SUB41((int)uVar1 << 1,0);
    }
    else {
      if (0x3fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        __basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar1 + 4 & 0xfffffffffffffffc;
      __s1 = operator_new(uVar2 << 2);
      *(ulong *)(param_1 + 8) = uVar1;
      *(basic_string **)(param_1 + 0x10) = __s1;
      *(ulong *)param_1 = uVar2 | 1;
    }
    wmemcpy((wchar_t *)__s1,__s2,uVar1 + 1);
  }
  return;
}

