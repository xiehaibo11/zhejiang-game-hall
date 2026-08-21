
/* universe::TanGaoXiong::basename(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall universe::TanGaoXiong::basename(TanGaoXiong *this,basic_string *param_1)

{
  TanGaoXiong TVar1;
  void *pvVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  TanGaoXiong *pTVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  TVar1 = *this;
  uVar4 = (ulong)((byte)TVar1 >> 1);
  if (((byte)TVar1 & 1) != 0) {
    uVar4 = *(ulong *)(this + 8);
  }
  if (uVar4 == 0) {
LAB_009dbb78:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,(basic_string *)this);
    return;
  }
  pTVar3 = *(TanGaoXiong **)(this + 0x10);
  uVar6 = uVar4;
  if (((byte)TVar1 & 1) == 0) {
    pTVar3 = this + 1;
  }
  do {
    uVar5 = uVar6;
    if (uVar5 == 0) goto LAB_009dbb78;
    pvVar2 = memchr(&DAT_012f2b5a,(uint)(byte)pTVar3[uVar5 - 1],2);
    uVar6 = uVar5 - 1;
  } while (pvVar2 == (void *)0x0);
  if (uVar6 == 0xffffffffffffffff) goto LAB_009dbb78;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  uVar4 = uVar4 - uVar5;
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    __dest = in_x8 + 1;
    *in_x8 = SUB41((int)uVar4 << 1,0);
    if (uVar4 == 0) goto LAB_009dbbc4;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    *(ulong *)(in_x8 + 8) = uVar4;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (in_x8 + 0x10) = __dest;
    *(ulong *)in_x8 = uVar6 | 1;
  }
  memcpy(__dest,pTVar3 + uVar5,uVar4);
LAB_009dbbc4:
  __dest[uVar4] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}

