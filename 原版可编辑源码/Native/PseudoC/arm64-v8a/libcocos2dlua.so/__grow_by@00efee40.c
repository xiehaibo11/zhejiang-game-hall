
/* std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> >::__grow_by(unsigned long, unsigned long, unsigned long,
   unsigned long, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::
basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
__grow_by(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
          *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar1
  ;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar2
  ;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar3
  ;
  long lVar4;
  ulong uVar5;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar6
  ;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
  *pbVar10;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
  *pbVar11;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
  *pbVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar13 = 0x3fffffffffffffef;
  if (0x3fffffffffffffef - param_1 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (((byte)*this & 1) == 0) {
    pbVar12 = this + 4;
  }
  else {
    pbVar12 = *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
                **)(this + 0x10);
  }
  if (param_1 < 0x1fffffffffffffe7) {
    uVar13 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar13 = param_2 + param_1;
    }
    if (uVar13 < 5) {
      uVar13 = 5;
    }
    else {
      if (uVar13 + 4 >> 0x3e != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00efef68 with catch @ 00eff06c
                        */
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      uVar13 = uVar13 + 4 & 0xfffffffffffffffc;
    }
  }
  pbVar2 = operator_new(uVar13 << 2);
  lVar4 = param_4 * 4;
  if (param_4 != 0) {
    pbVar3 = pbVar2;
    uVar5 = param_4;
    pbVar6 = pbVar12;
    if ((7 < param_4) && ((pbVar12 + lVar4 <= pbVar2 || (pbVar2 + lVar4 <= pbVar12)))) {
      uVar8 = param_4 & 0xfffffffffffffff8;
      pbVar3 = pbVar12 + 0x10;
      uVar5 = param_4 - uVar8;
      pbVar6 = pbVar2 + 0x10;
      uVar9 = uVar8;
      do {
        pbVar10 = pbVar3 + -8;
        uVar14 = *(undefined8 *)(pbVar3 + -0x10);
        uVar16 = *(undefined8 *)(pbVar3 + 8);
        uVar15 = *(undefined8 *)pbVar3;
        pbVar3 = pbVar3 + 0x20;
        uVar9 = uVar9 - 8;
        *(undefined8 *)(pbVar6 + -8) = *(undefined8 *)pbVar10;
        *(undefined8 *)(pbVar6 + -0x10) = uVar14;
        *(undefined8 *)(pbVar6 + 8) = uVar16;
        *(undefined8 *)pbVar6 = uVar15;
        pbVar6 = pbVar6 + 0x20;
      } while (uVar9 != 0);
      pbVar3 = pbVar2 + uVar8 * 4;
      pbVar6 = pbVar12 + uVar8 * 4;
      if (uVar8 == param_4) goto LAB_00efef78;
    }
    do {
                    /* try { // try from 00efef68 to 00ffef6f has its CatchHandler @ 00eff06c */
      uVar5 = uVar5 - 1;
                    /* try { // try from 00efef70 to 00fff0db has its CatchHandler @ 00efed58 */
      *(undefined4 *)pbVar3 = *(undefined4 *)pbVar6;
      pbVar3 = pbVar3 + 4;
      pbVar6 = pbVar6 + 4;
    } while (uVar5 != 0);
  }
LAB_00efef78:
  uVar5 = (param_3 - param_5) - param_4;
  if (uVar5 != 0) {
    pbVar3 = pbVar2 + param_6 * 4 + lVar4;
    pbVar6 = pbVar12 + param_5 * 4 + lVar4;
    uVar9 = uVar5;
    if ((7 < uVar5) &&
       ((pbVar12 + param_3 * 4 <= pbVar2 + (param_6 + param_4) * 4 ||
        (pbVar2 + ((param_6 + param_3) - param_5) * 4 <= pbVar6)))) {
      uVar7 = uVar5 & 0xfffffffffffffff8;
      uVar9 = uVar5 - uVar7;
      pbVar10 = pbVar12 + (param_5 + param_4) * 4 + 0x10;
      pbVar11 = pbVar2 + param_6 * 4 + param_4 * 4 + 0x10;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar10 + -8;
        uVar14 = *(undefined8 *)(pbVar10 + -0x10);
        uVar16 = *(undefined8 *)(pbVar10 + 8);
        uVar15 = *(undefined8 *)pbVar10;
        uVar8 = uVar8 - 8;
        pbVar10 = pbVar10 + 0x20;
        *(undefined8 *)(pbVar11 + -8) = *(undefined8 *)pbVar1;
        *(undefined8 *)(pbVar11 + -0x10) = uVar14;
        *(undefined8 *)(pbVar11 + 8) = uVar16;
        *(undefined8 *)pbVar11 = uVar15;
        pbVar11 = pbVar11 + 0x20;
      } while (uVar8 != 0);
      pbVar3 = pbVar3 + uVar7 * 4;
      pbVar6 = pbVar6 + uVar7 * 4;
      if (uVar5 == uVar7) goto LAB_00eff02c;
    }
    do {
      uVar9 = uVar9 - 1;
      *(undefined4 *)pbVar3 = *(undefined4 *)pbVar6;
      pbVar3 = pbVar3 + 4;
      pbVar6 = pbVar6 + 4;
    } while (uVar9 != 0);
  }
LAB_00eff02c:
  if (param_1 != 4) {
    operator_delete(pbVar12);
  }
  *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> **)
   (this + 0x10) = pbVar2;
  *(ulong *)this = uVar13 | 1;
  return;
}

