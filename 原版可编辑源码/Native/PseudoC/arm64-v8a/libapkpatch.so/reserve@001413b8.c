
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  bool bVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  byte bVar7;
  
  if (0xffffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  bVar4 = *this;
  bVar5 = ((byte)bVar4 & 1) != 0;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (bVar5) {
    uVar1 = *(ulong *)(this + 8);
  }
  uVar2 = 0x16;
  if (bVar5) {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar3 = uVar1;
  if (uVar1 <= param_1) {
    uVar3 = param_1;
  }
  uVar6 = (uVar3 + 0x10 & 0xfffffffffffffff0) - 1;
  if (uVar3 < 0x17) {
    uVar6 = 0x16;
  }
  if (uVar6 != uVar2) {
    if (uVar6 == 0x16) {
      __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
      __dest = this + 1;
      bVar7 = 1;
    }
    else {
      if (uVar2 < uVar6) {
        __dest = operator_new(uVar6 + 1);
      }
      else {
        __dest = operator_new(uVar6 + 1);
      }
      __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
      bVar7 = (byte)bVar4 & 1;
      if (((byte)bVar4 & 1) == 0) {
        __src = this + 1;
      }
    }
    if (uVar1 != 0xffffffffffffffff) {
      memcpy(__dest,__src,uVar1 + 1);
    }
    if (bVar7 != 0) {
      operator_delete(__src);
    }
    if (uVar6 == 0x16) {
      *this = SUB41((int)uVar1 << 1,0);
    }
    else {
      *(ulong *)this = uVar6 + 1 | 1;
      *(ulong *)(this + 8) = uVar1;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x10) = __dest;
    }
  }
  return;
}

