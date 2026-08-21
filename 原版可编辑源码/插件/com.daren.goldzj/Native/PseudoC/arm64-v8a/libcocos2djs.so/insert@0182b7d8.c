
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(std::__ndk1::__wrap_iter<char const*>, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          long param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> param_3)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar5;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    pbVar3 = this + 1;
    uVar5 = (ulong)((byte)bVar2 >> 1);
    uVar4 = 0x16;
  }
  else {
    uVar5 = *(ulong *)(this + 8);
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  __n = param_2 - (long)pbVar3;
  if (uVar4 == uVar5) {
    if (uVar5 == 0xffffffffffffffef) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (((byte)bVar2 & 1) == 0) {
      __src = this + 1;
    }
    else {
      __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
    }
    if (uVar5 < 0x7fffffffffffffe7) {
      uVar4 = uVar5 << 1;
      if (uVar4 <= uVar5 + 1) {
        uVar4 = uVar5 + 1;
      }
      if (uVar4 < 0x17) {
        uVar4 = 0x17;
      }
      else {
        uVar4 = uVar4 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar4 = 0xffffffffffffffef;
    }
    pbVar3 = operator_new(uVar4);
    if (__n != 0) {
      memcpy(pbVar3,__src,__n);
    }
    if (uVar5 - __n != 0) {
      memcpy(pbVar3 + __n + 1,__src + __n,uVar5 - __n);
    }
    if (uVar5 != 0x16) {
      operator_delete(__src);
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = pbVar3;
    *(ulong *)this = uVar4 | 1;
  }
  else {
    if (((byte)bVar2 & 1) == 0) {
      pbVar3 = this + 1;
    }
    else {
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    if (uVar5 - __n != 0) {
      memmove(pbVar3 + __n + 1,pbVar3 + __n,uVar5 - __n);
    }
  }
  lVar1 = uVar5 + 1;
  pbVar3[__n] = param_3;
  pbVar3[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
    if (((byte)*this & 1) != 0) {
      this = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
      goto LAB_0182b93c;
    }
  }
  this = this + 1;
LAB_0182b93c:
  return this + __n;
}

