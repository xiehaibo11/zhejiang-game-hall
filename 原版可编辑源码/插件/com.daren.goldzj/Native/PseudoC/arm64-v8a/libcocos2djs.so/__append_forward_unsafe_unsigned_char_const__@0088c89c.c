
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__append_forward_unsafe<unsigned char const*>(unsigned char const*, unsigned char const*) */

basic_string * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__append_forward_unsafe<unsigned_char_const*>
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          uchar *param_1,uchar *param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  uchar *puVar3;
  ulong uVar4;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  uchar *puVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    __n = (size_t)((byte)bVar2 >> 1);
    uVar11 = 0x16;
    uVar6 = (ulong)(byte)bVar2;
  }
  else {
    uVar6 = *(ulong *)this;
    __n = *(size_t *)(this + 8);
    uVar11 = (uVar6 & 0xfffffffffffffffe) - 1;
  }
  uVar4 = (long)param_2 - (long)param_1;
  if (uVar4 == 0) {
    return (basic_string *)this;
  }
  if (uVar11 - __n < uVar4) {
    uVar6 = __n + uVar4;
    if (-uVar11 - 0x11 < uVar6 - uVar11) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = this + 1;
    }
    else {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    if (uVar11 < 0x7fffffffffffffe7) {
      uVar1 = uVar11 << 1;
      if (uVar11 << 1 <= uVar6) {
        uVar1 = uVar6;
      }
      if (uVar1 < 0x17) {
        uVar6 = 0x17;
      }
      else {
        uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar6 = 0xffffffffffffffef;
    }
    __dest = operator_new(uVar6);
    if (__n != 0) {
      memcpy(__dest,pbVar5,__n);
    }
    if (uVar11 != 0x16) {
      operator_delete(pbVar5);
    }
    uVar6 = uVar6 | 1;
    *(void **)(this + 0x10) = __dest;
    *(ulong *)this = uVar6;
  }
  if ((uVar6 & 1) == 0) {
    pbVar5 = this + 1;
  }
  else {
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  pbVar7 = pbVar5 + __n;
  if (param_1 == param_2) goto LAB_0088ca34;
  pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1
  ;
  if ((uVar4 < 0x20) ||
     ((pbVar7 < param_2 && (param_1 < pbVar5 + (long)(param_2 + (__n - (long)param_1)))))) {
LAB_0088ca20:
    do {
      pbVar10 = pbVar9 + 1;
      *pbVar7 = *pbVar9;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar10;
    } while ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_2 != pbVar10);
  }
  else {
    uVar11 = uVar4 & 0xffffffffffffffe0;
    puVar8 = param_1 + 0x10;
    pbVar9 = pbVar5 + __n + 0x10;
    uVar6 = uVar11;
    do {
      puVar3 = puVar8 + -8;
      uVar12 = *(undefined8 *)(puVar8 + -0x10);
      uVar14 = *(undefined8 *)(puVar8 + 8);
      uVar13 = *(undefined8 *)puVar8;
      puVar8 = puVar8 + 0x20;
      uVar6 = uVar6 - 0x20;
      *(undefined8 *)(pbVar9 + -8) = *(undefined8 *)puVar3;
      *(undefined8 *)(pbVar9 + -0x10) = uVar12;
      *(undefined8 *)(pbVar9 + 8) = uVar14;
      *(undefined8 *)pbVar9 = uVar13;
      pbVar9 = pbVar9 + 0x20;
    } while (uVar6 != 0);
    pbVar7 = pbVar7 + uVar11;
    pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + uVar11);
    if (uVar4 != uVar11) goto LAB_0088ca20;
  }
  pbVar7 = pbVar5 + (long)(param_2 + (__n - (long)param_1));
LAB_0088ca34:
  *pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)(__n + uVar4) << 1,0);
  }
  else {
    *(size_t *)(this + 8) = __n + uVar4;
  }
  return (basic_string *)this;
}

