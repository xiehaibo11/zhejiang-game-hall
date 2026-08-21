
/* std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::__append(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar6 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar6 >> 3) * -0x5555555555555555)) {
    puVar7 = puVar6;
    if (param_1 != 0) {
      puVar7 = puVar6 + param_1 * 3;
      lVar5 = param_1 * 0x18;
      do {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        lVar5 = lVar5 + -0x18;
        puVar6 = puVar6 + 3;
      } while (lVar5 != 0);
    }
    *(undefined8 **)(this + 8) = puVar7;
    return;
  }
  uVar14 = 0xaaaaaaaaaaaaaaa;
  lVar5 = (long)puVar6 - *(long *)this >> 3;
  uVar1 = lVar5 * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x555555555555555) {
    uVar9 = lVar8 * 0x5555555555555556;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (uVar14 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_00a6bb14;
    }
  }
  pvVar4 = operator_new(uVar14 * 0x18);
LAB_00a6bb14:
  puVar10 = (undefined8 *)((long)pvVar4 + lVar5 * 8);
  lVar5 = param_1 * 0x18;
  puVar6 = puVar10 + param_1 * 3;
  puVar7 = puVar10;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    lVar5 = lVar5 + -0x18;
    puVar7 = puVar7 + 3;
  } while (lVar5 != 0);
  pbVar11 = *(byte **)this;
  pbVar12 = *(byte **)(this + 8);
  pbVar13 = pbVar11;
  if (pbVar12 != pbVar11) {
    do {
      uVar16 = *(undefined8 *)(pbVar12 + -0x10);
      uVar15 = *(undefined8 *)(pbVar12 + -0x18);
      puVar10[-1] = *(undefined8 *)(pbVar12 + -8);
      puVar10[-2] = uVar16;
      puVar10[-3] = uVar15;
      pbVar12[-0x10] = 0;
      pbVar12[-0xf] = 0;
      pbVar12[-0xe] = 0;
      pbVar12[-0xd] = 0;
      pbVar12[-0xc] = 0;
      pbVar12[-0xb] = 0;
      pbVar12[-10] = 0;
      pbVar12[-9] = 0;
      pbVar12[-8] = 0;
      pbVar12[-7] = 0;
      pbVar12[-6] = 0;
      pbVar12[-5] = 0;
      pbVar12[-4] = 0;
      pbVar12[-3] = 0;
      pbVar12[-2] = 0;
      pbVar12[-1] = 0;
      pbVar12[-0x18] = 0;
      pbVar12[-0x17] = 0;
      pbVar12[-0x16] = 0;
      pbVar12[-0x15] = 0;
      pbVar12[-0x14] = 0;
      pbVar12[-0x13] = 0;
      pbVar12[-0x12] = 0;
      pbVar12[-0x11] = 0;
      pbVar12 = pbVar12 + -0x18;
      puVar10 = puVar10 + -3;
    } while (pbVar11 != pbVar12);
    pbVar11 = *(byte **)(this + 8);
    pbVar13 = *(byte **)this;
  }
  *(undefined8 **)this = puVar10;
  *(undefined8 **)(this + 8) = puVar6;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar14 * 0x18);
  if (pbVar11 != pbVar13) {
    bVar2 = pbVar11[-0x18];
    pbVar12 = pbVar11 + -0x18;
    while( true ) {
      pbVar3 = pbVar12;
      if ((bVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar11 + -8));
      }
      if (pbVar13 == pbVar3) break;
      bVar2 = pbVar3[-0x18];
      pbVar12 = pbVar3 + -0x18;
      pbVar11 = pbVar3;
    }
  }
  if (pbVar13 == (byte *)0x0) {
                    /* try { // try from 00a6bc20 to 00b6bc53 has its CatchHandler @ 00a6bd20 */
    return;
  }
  operator_delete(pbVar13);
  return;
}

