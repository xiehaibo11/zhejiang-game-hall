
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::operator+(__ndk1 *this,char *param_1,basic_string *param_2)

{
  long lVar1;
  ulong __n;
  ulong uVar2;
  byte bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  bool bVar5;
  size_t __n_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  __n_00 = strlen((char *)this);
  bVar3 = *param_1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(ulong *)(param_1 + 8);
  }
  uVar7 = __n + __n_00;
  if (uVar7 < 0xfffffffffffffff0) {
    if (uVar7 < 0x17) {
      pbVar6 = in_x8 + 1;
      *in_x8 = SUB41((int)__n_00 << 1,0);
    }
    else {
      uVar7 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pbVar6 = operator_new(uVar7);
      *(size_t *)(in_x8 + 8) = __n_00;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (in_x8 + 0x10) = pbVar6;
      *(ulong *)in_x8 = uVar7 | 1;
    }
    if (__n_00 != 0) {
      memcpy(pbVar6,this,__n_00);
      bVar3 = *param_1;
    }
    __src = *(char **)(param_1 + 0x10);
    pbVar6[__n_00] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    bVar4 = *in_x8;
    if ((bVar3 & 1) == 0) {
      __src = param_1 + 1;
    }
    bVar5 = ((byte)bVar4 & 1) != 0;
    uVar7 = 0x16;
    if (bVar5) {
      uVar7 = (*(ulong *)in_x8 & 0xfffffffffffffffe) - 1;
    }
    uVar2 = (ulong)((byte)bVar4 >> 1);
    if (bVar5) {
      uVar2 = *(ulong *)(in_x8 + 8);
    }
    if (uVar7 - uVar2 < __n) {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by_and_replace(in_x8,uVar7,(uVar2 + __n) - uVar7,uVar2,uVar2,0,__n,__src);
    }
    else if (__n != 0) {
      pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (in_x8 + 0x10);
      if (((byte)bVar4 & 1) == 0) {
        pbVar6 = in_x8 + 1;
      }
      memcpy(pbVar6 + uVar2,__src,__n);
      lVar1 = uVar2 + __n;
      if (((byte)*in_x8 & 1) == 0) {
        *in_x8 = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(in_x8 + 8) = lVar1;
      }
      pbVar6[lVar1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_length_error();
}

