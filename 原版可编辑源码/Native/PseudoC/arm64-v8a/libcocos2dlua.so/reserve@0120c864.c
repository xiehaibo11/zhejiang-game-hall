
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::reserve(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  bool bVar3;
  bool bVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s2;
  ulong uVar6;
  ulong uVar7;
  
  if (0x3fffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar6 = (ulong)((byte)bVar2 >> 1);
    uVar5 = 4;
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    uVar5 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar7 = uVar6;
  if (uVar6 <= param_1) {
    uVar7 = param_1;
  }
  if (uVar7 < 5) {
    uVar7 = 4;
    if (uVar5 == 4) {
      return;
    }
  }
  else {
    uVar7 = (uVar7 + 4 & 0xfffffffffffffffc) - 1;
    if (uVar7 == uVar5) {
      return;
    }
  }
  if (uVar7 == 4) {
    __s2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
    bVar4 = false;
    __s1 = this + 4;
    if (((byte)bVar2 & 1) == 0) {
      bVar3 = true;
LAB_0120c948:
      uVar5 = (ulong)((byte)bVar2 >> 1);
      goto joined_r0x0120c96c;
    }
  }
  else {
    uVar1 = uVar7 + 1;
    if (uVar5 < uVar7) {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __s1 = operator_new(uVar1 * 4);
    }
    else {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __s1 = operator_new(uVar1 * 4);
    }
    if (((byte)bVar2 & 1) == 0) {
      bVar3 = false;
      __s2 = this + 4;
      bVar4 = true;
      goto LAB_0120c948;
    }
    __s2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
    bVar4 = true;
  }
  uVar5 = *(ulong *)(this + 8);
  bVar3 = true;
joined_r0x0120c96c:
  if (uVar5 != 0xffffffffffffffff) {
    wmemcpy((wchar_t *)__s1,(wchar_t *)__s2,uVar5 + 1);
  }
  if (bVar3) {
    operator_delete(__s2);
  }
  if (bVar4) {
    *(ulong *)this = uVar7 + 1 | 1;
    *(ulong *)(this + 8) = uVar6;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s1;
  }
  else {
    *this = SUB41((int)uVar6 << 1,0);
  }
  return;
}

