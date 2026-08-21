
/* void std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
__push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  byte bVar3;
  byte *pbVar4;
  void *pvVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  byte *pbVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar12 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x555555555555555) {
    uVar9 = lVar8 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar12 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_007df554;
    }
  }
  pvVar5 = operator_new(uVar12 * 0x18);
LAB_007df554:
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            ((long)pvVar5 + lVar6 * 8);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (this_00,param_1);
  pbVar7 = *(byte **)this;
  pbVar10 = *(byte **)(this + 8);
  pbVar2 = this_00 + 0x18;
  pbVar11 = pbVar7;
  if (pbVar10 != pbVar7) {
    do {
      uVar14 = *(undefined8 *)(pbVar10 + -0x10);
      uVar13 = *(undefined8 *)(pbVar10 + -0x18);
      *(undefined8 *)(this_00 + -8) = *(undefined8 *)(pbVar10 + -8);
      *(undefined8 *)(this_00 + -0x10) = uVar14;
      *(undefined8 *)(this_00 + -0x18) = uVar13;
      pbVar10[-0x10] = 0;
      pbVar10[-0xf] = 0;
      pbVar10[-0xe] = 0;
      pbVar10[-0xd] = 0;
      pbVar10[-0xc] = 0;
      pbVar10[-0xb] = 0;
      pbVar10[-10] = 0;
      pbVar10[-9] = 0;
      pbVar10[-8] = 0;
      pbVar10[-7] = 0;
      pbVar10[-6] = 0;
      pbVar10[-5] = 0;
      pbVar10[-4] = 0;
      pbVar10[-3] = 0;
      pbVar10[-2] = 0;
      pbVar10[-1] = 0;
      pbVar10[-0x18] = 0;
      pbVar10[-0x17] = 0;
      pbVar10[-0x16] = 0;
      pbVar10[-0x15] = 0;
      pbVar10[-0x14] = 0;
      pbVar10[-0x13] = 0;
      pbVar10[-0x12] = 0;
      pbVar10[-0x11] = 0;
      pbVar10 = pbVar10 + -0x18;
      this_00 = this_00 + -0x18;
    } while (pbVar7 != pbVar10);
    pbVar7 = *(byte **)(this + 8);
    pbVar11 = *(byte **)this;
  }
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this = this_00
  ;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
       pbVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar12 * 0x18);
  if (pbVar7 != pbVar11) {
    bVar3 = pbVar7[-0x18];
    pbVar10 = pbVar7 + -0x18;
    while( true ) {
      pbVar4 = pbVar10;
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar7 + -8));
      }
      if (pbVar11 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar10 = pbVar4 + -0x18;
      pbVar7 = pbVar4;
    }
  }
  if (pbVar11 != (byte *)0x0) {
    operator_delete(pbVar11);
    return;
  }
  return;
}

