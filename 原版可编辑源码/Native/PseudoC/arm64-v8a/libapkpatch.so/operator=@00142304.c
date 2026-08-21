
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
operator=(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         basic_string *param_1)

{
  basic_string bVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string *__src;
  ulong uVar4;
  ulong __n;
  void *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (this == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1) {
    return this;
  }
  bVar1 = *param_1;
  if (((byte)*this & 1) == 0) {
    if (((byte)bVar1 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(this + 8) = uVar6;
      *(undefined8 *)this = uVar5;
      return this;
    }
    __n = *(ulong *)(param_1 + 8);
    __src = *(basic_string **)(param_1 + 0x10);
    uVar4 = __n - 0x16;
    if (__n < 0x16 || uVar4 == 0) {
      *this = SUB41((int)__n << 1,0);
      if (__n != 0) {
        memcpy(this + 1,__src,__n);
      }
      this[__n + 1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      return this;
    }
    uVar3 = (ulong)((byte)*this >> 1);
    uVar2 = 0x16;
  }
  else {
    __n = *(ulong *)(param_1 + 8);
    __src = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      __src = param_1 + 1;
      __n = (ulong)((byte)bVar1 >> 1);
    }
    uVar4 = *(ulong *)this & 0xfffffffffffffffe;
    if (__n < uVar4) {
      __dest = *(void **)(this + 0x10);
      *(ulong *)(this + 8) = __n;
      if (__n != 0) {
        memcpy(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
      return this;
    }
    uVar3 = *(ulong *)(this + 8);
    uVar2 = uVar4 - 1;
    uVar4 = (__n - uVar4) + 1;
  }
  __grow_by_and_replace(this,uVar2,uVar4,uVar3,0,uVar3,__n,(char *)__src);
  return this;
}

