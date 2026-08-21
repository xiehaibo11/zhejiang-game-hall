
/* universe::TanGaoXiong::dirname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall universe::TanGaoXiong::dirname(TanGaoXiong *this,basic_string *param_1)

{
  ulong __n;
  TanGaoXiong TVar1;
  void *pvVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  TanGaoXiong *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar3;
  ulong uVar4;
  
  TVar1 = *this;
  __n = (ulong)((byte)TVar1 >> 1);
  if (((byte)TVar1 & 1) != 0) {
    __n = *(ulong *)(this + 8);
  }
  if (__n == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,(basic_string *)this);
    return;
  }
  __src = *(TanGaoXiong **)(this + 0x10);
  uVar3 = __n;
  if (((byte)TVar1 & 1) == 0) {
    __src = this + 1;
  }
  do {
    uVar4 = uVar3;
    if (uVar4 == 0) goto LAB_009db918;
    pvVar2 = memchr(&DAT_012f2b5a,(uint)(byte)__src[uVar4 - 1],2);
    uVar3 = uVar4 - 1;
  } while (pvVar2 == (void *)0x0);
  if (uVar4 - 1 == 0xffffffffffffffff) {
LAB_009db918:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"");
    return;
  }
  if (uVar4 <= __n) {
    __n = uVar4;
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
    if (__n == 0) goto LAB_009db980;
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
LAB_009db980:
  __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}

