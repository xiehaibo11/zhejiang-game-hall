
/* void std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
__push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte *pbVar4;
  void *pvVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar13 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x555555555555555) {
    uVar9 = lVar8 * 0x5555555555555556;
    uVar13 = uVar1;
    if (uVar1 <= uVar9) {
      uVar13 = uVar9;
    }
    if (uVar13 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_0091013c;
    }
  }
  pvVar5 = operator_new(uVar13 * 0x18);
LAB_0091013c:
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)param_1;
  puVar10 = (undefined8 *)((long)pvVar5 + lVar6 * 8);
  puVar10[2] = *(undefined8 *)(param_1 + 0x10);
  puVar10[1] = uVar15;
  *puVar10 = uVar14;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  pbVar7 = *(byte **)this;
  pbVar11 = *(byte **)(this + 8);
  puVar2 = puVar10 + 3;
  pbVar12 = pbVar7;
  if (pbVar11 != pbVar7) {
    do {
      uVar15 = *(undefined8 *)(pbVar11 + -0x10);
      uVar14 = *(undefined8 *)(pbVar11 + -0x18);
      puVar10[-1] = *(undefined8 *)(pbVar11 + -8);
      puVar10[-2] = uVar15;
      puVar10[-3] = uVar14;
      pbVar11[-0x10] = 0;
      pbVar11[-0xf] = 0;
      pbVar11[-0xe] = 0;
      pbVar11[-0xd] = 0;
      pbVar11[-0xc] = 0;
      pbVar11[-0xb] = 0;
      pbVar11[-10] = 0;
      pbVar11[-9] = 0;
      pbVar11[-8] = 0;
      pbVar11[-7] = 0;
      pbVar11[-6] = 0;
      pbVar11[-5] = 0;
      pbVar11[-4] = 0;
      pbVar11[-3] = 0;
      pbVar11[-2] = 0;
      pbVar11[-1] = 0;
      pbVar11[-0x18] = 0;
      pbVar11[-0x17] = 0;
      pbVar11[-0x16] = 0;
      pbVar11[-0x15] = 0;
      pbVar11[-0x14] = 0;
      pbVar11[-0x13] = 0;
      pbVar11[-0x12] = 0;
      pbVar11[-0x11] = 0;
      pbVar11 = pbVar11 + -0x18;
      puVar10 = puVar10 + -3;
    } while (pbVar7 != pbVar11);
    pbVar7 = *(byte **)(this + 8);
    pbVar12 = *(byte **)this;
  }
  *(undefined8 **)this = puVar10;
  *(undefined8 **)(this + 8) = puVar2;
                    /* try { // try from 009101b0 to 00a101e3 has its CatchHandler @ 009102b0 */
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar13 * 0x18);
  if (pbVar7 != pbVar12) {
    bVar3 = pbVar7[-0x18];
    pbVar11 = pbVar7 + -0x18;
    while( true ) {
      pbVar4 = pbVar11;
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar7 + -8));
      }
      if (pbVar12 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar11 = pbVar4 + -0x18;
      pbVar7 = pbVar4;
    }
  }
                    /* try { // try from 009101e4 to 00a101f7 has its CatchHandler @ 0091027c */
  if (pbVar12 != (byte *)0x0) {
    operator_delete(pbVar12);
    return;
  }
                    /* try { // try from 009101fc to 00a1022f has its CatchHandler @ 00910280 */
  return;
}

