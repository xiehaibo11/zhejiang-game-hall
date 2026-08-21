
/* universe::FileInterface::basename(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall universe::FileInterface::basename(FileInterface *this,basic_string *param_1)

{
  ulong __n;
  FileInterface *__src;
  void *pvVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar3;
  
  __n = *(ulong *)(this + 8);
  __src = *(FileInterface **)(this + 0x10);
  uVar2 = (ulong)((byte)*this >> 1);
  uVar3 = __n;
  if (((byte)*this & 1) == 0) {
    __src = this + 1;
    uVar3 = uVar2;
    __n = uVar2;
  }
  do {
    uVar2 = uVar3;
    if (uVar2 == 0) goto LAB_009e01ac;
    pvVar1 = memchr(&DAT_012f2b5a,(uint)(byte)__src[uVar2 - 1],2);
    uVar3 = uVar2 - 1;
  } while (pvVar1 == (void *)0x0);
  if (uVar2 - 1 == 0xffffffffffffffff) {
LAB_009e01ac:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,(basic_string *)this);
    return;
  }
  if (uVar2 <= __n) {
    __n = uVar2;
  }
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = in_x8 + 1;
    *in_x8 = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_009e01f8;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    *(ulong *)(in_x8 + 8) = __n;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (in_x8 + 0x10) = __dest;
    *(ulong *)in_x8 = uVar3 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009e01f8:
  __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}

