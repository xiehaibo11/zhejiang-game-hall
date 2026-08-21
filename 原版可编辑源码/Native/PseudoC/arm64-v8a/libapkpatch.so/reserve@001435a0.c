
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::reserve(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s2;
  bool bVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar6;
  byte bVar7;
  
  if (0x3fffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  bVar4 = *this;
  bVar5 = ((byte)bVar4 & 1) != 0;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (bVar5) {
    uVar2 = *(ulong *)(this + 8);
  }
  uVar3 = 4;
  if (bVar5) {
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar1 = uVar2;
  if (uVar2 <= param_1) {
    uVar1 = param_1;
  }
  uVar6 = (uVar1 + 4 & 0xfffffffffffffffc) - 1;
  if (uVar1 < 5) {
    uVar6 = 4;
  }
  if (uVar6 != uVar3) {
    if (uVar6 == 4) {
      __s1 = this + 4;
      bVar7 = 1;
      __s2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    }
    else {
      uVar1 = uVar6 + 1;
      if (uVar3 < uVar6) {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00138d84("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __s1 = operator_new(uVar1 * 4);
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00138d84("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __s1 = operator_new(uVar1 * 4);
      }
      bVar7 = (byte)bVar4 & 1;
      __s2 = this + 4;
      if (((byte)bVar4 & 1) != 0) {
        __s2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
      }
    }
    if (uVar2 != 0xffffffffffffffff) {
      wmemcpy((wchar_t *)__s1,(wchar_t *)__s2,uVar2 + 1);
    }
    if (bVar7 != 0) {
      operator_delete(__s2);
    }
    if (uVar6 == 4) {
      *this = SUB41((int)uVar2 << 1,0);
    }
    else {
      *(ulong *)this = uVar6 + 1 | 1;
      *(ulong *)(this + 8) = uVar2;
      *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
       (this + 0x10) = __s1;
    }
  }
  return;
}

