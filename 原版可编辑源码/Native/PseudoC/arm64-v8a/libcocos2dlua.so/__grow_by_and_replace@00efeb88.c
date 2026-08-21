
/* std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> >::__grow_by_and_replace(unsigned long, unsigned long, unsigned
   long, unsigned long, unsigned long, unsigned long, char32_t const*) */

void __thiscall
std::__ndk1::
basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
__grow_by_and_replace
          (basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
           *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6
          ,wchar32 *param_7)

{
  wchar32 *pwVar1;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar2
  ;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar3
  ;
  long lVar4;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar5
  ;
  ulong uVar6;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar7
  ;
  ulong uVar8;
  ulong uVar9;
  wchar32 *pwVar10;
  ulong uVar11;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
  *pbVar12;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
  *pbVar13;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
  *pbVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00efebe0 with catch @ 00efeb8c
                        */
  if (0x3fffffffffffffee - param_1 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 00efebd8 to 00ffebdf has its CatchHandler @ 00efed54 */
  if (((byte)*this & 1) == 0) {
    pbVar14 = this + 4;
                    /* try { // try from 00efebe0 to 00ffed57 has its CatchHandler @ 00efeb8c */
  }
  else {
    pbVar14 = *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
                **)(this + 0x10);
  }
  if (param_1 < 0x1fffffffffffffe7) {
    uVar15 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar15 = param_2 + param_1;
    }
    if (uVar15 < 5) {
      uVar15 = 5;
    }
    else {
      if (uVar15 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      uVar15 = uVar15 + 4 & 0xfffffffffffffffc;
    }
  }
  else {
    uVar15 = 0x3fffffffffffffef;
  }
  pbVar3 = operator_new(uVar15 << 2);
  lVar4 = param_4 * 4;
  if (param_4 != 0) {
    pbVar5 = pbVar3;
    uVar6 = param_4;
    pbVar7 = pbVar14;
    if ((7 < param_4) && ((pbVar14 + lVar4 <= pbVar3 || (pbVar3 + lVar4 <= pbVar14)))) {
      uVar9 = param_4 & 0xfffffffffffffff8;
      pbVar5 = pbVar14 + 0x10;
      uVar6 = param_4 - uVar9;
      pbVar7 = pbVar3 + 0x10;
      uVar11 = uVar9;
      do {
        pbVar12 = pbVar5 + -8;
        uVar16 = *(undefined8 *)(pbVar5 + -0x10);
        uVar18 = *(undefined8 *)(pbVar5 + 8);
        uVar17 = *(undefined8 *)pbVar5;
        pbVar5 = pbVar5 + 0x20;
        uVar11 = uVar11 - 8;
        *(undefined8 *)(pbVar7 + -8) = *(undefined8 *)pbVar12;
        *(undefined8 *)(pbVar7 + -0x10) = uVar16;
        *(undefined8 *)(pbVar7 + 8) = uVar18;
        *(undefined8 *)pbVar7 = uVar17;
        pbVar7 = pbVar7 + 0x20;
      } while (uVar11 != 0);
      pbVar5 = pbVar3 + uVar9 * 4;
      pbVar7 = pbVar14 + uVar9 * 4;
      if (uVar9 == param_4) goto LAB_00efeccc;
    }
    do {
      uVar6 = uVar6 - 1;
      *(undefined4 *)pbVar5 = *(undefined4 *)pbVar7;
      pbVar5 = pbVar5 + 4;
      pbVar7 = pbVar7 + 4;
    } while (uVar6 != 0);
  }
LAB_00efeccc:
  if (param_6 != 0) {
    pbVar5 = pbVar3 + param_4 * 4;
    uVar6 = param_6;
    if (7 < param_6) {
      uVar11 = param_6 & 0xfffffffffffffff8;
      pwVar10 = param_7 + 4;
      param_7 = param_7 + uVar11;
      pbVar7 = pbVar5 + 0x10;
      uVar6 = uVar11;
      do {
        pwVar1 = pwVar10 + -2;
        uVar16 = *(undefined8 *)(pwVar10 + -4);
        uVar18 = *(undefined8 *)(pwVar10 + 2);
        uVar17 = *(undefined8 *)pwVar10;
        pwVar10 = pwVar10 + 8;
        uVar6 = uVar6 - 8;
        *(undefined8 *)(pbVar7 + -8) = *(undefined8 *)pwVar1;
        *(undefined8 *)(pbVar7 + -0x10) = uVar16;
        *(undefined8 *)(pbVar7 + 8) = uVar18;
        *(undefined8 *)pbVar7 = uVar17;
        pbVar7 = pbVar7 + 0x20;
      } while (uVar6 != 0);
      pbVar5 = pbVar5 + uVar11 * 4;
      uVar6 = param_6 - uVar11;
      if (uVar11 == param_6) goto LAB_00efed38;
    }
    do {
      uVar6 = uVar6 - 1;
      *(wchar32 *)pbVar5 = *param_7;
      pbVar5 = pbVar5 + 4;
      param_7 = param_7 + 1;
    } while (uVar6 != 0);
  }
LAB_00efed38:
  uVar6 = (param_3 - param_5) - param_4;
  if (uVar6 != 0) {
    pbVar5 = pbVar3 + param_6 * 4 + lVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00efebd8 with catch @ 00efed54
                        */
    pbVar7 = pbVar14 + param_5 * 4 + lVar4;
    uVar11 = uVar6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00efedb4 with catch @ 00efed58
                       catch(type#1 @ 00000000) { ... } // from try @ 00efef70 with catch @ 00efed58
                        */
    if ((7 < uVar6) &&
       ((pbVar14 + param_3 * 4 <= pbVar3 + (param_6 + param_4) * 4 ||
        (pbVar3 + ((param_6 + param_3) - param_5) * 4 <= pbVar7)))) {
      uVar8 = uVar6 & 0xfffffffffffffff8;
      uVar11 = uVar6 - uVar8;
                    /* try { // try from 00efedac to 00ffedb3 has its CatchHandler @ 00eff0d8 */
      pbVar12 = pbVar14 + (param_5 + param_4) * 4 + 0x10;
      pbVar13 = pbVar3 + param_6 * 4 + param_4 * 4 + 0x10;
                    /* try { // try from 00efedb4 to 00ffef67 has its CatchHandler @ 00efed58 */
      uVar9 = uVar8;
      do {
        pbVar2 = pbVar12 + -8;
        uVar16 = *(undefined8 *)(pbVar12 + -0x10);
        uVar18 = *(undefined8 *)(pbVar12 + 8);
        uVar17 = *(undefined8 *)pbVar12;
        uVar9 = uVar9 - 8;
        pbVar12 = pbVar12 + 0x20;
        *(undefined8 *)(pbVar13 + -8) = *(undefined8 *)pbVar2;
        *(undefined8 *)(pbVar13 + -0x10) = uVar16;
        *(undefined8 *)(pbVar13 + 8) = uVar18;
        *(undefined8 *)pbVar13 = uVar17;
        pbVar13 = pbVar13 + 0x20;
      } while (uVar9 != 0);
      pbVar5 = pbVar5 + uVar8 * 4;
      pbVar7 = pbVar7 + uVar8 * 4;
      if (uVar6 == uVar8) goto LAB_00efedec;
    }
    do {
      uVar11 = uVar11 - 1;
      *(undefined4 *)pbVar5 = *(undefined4 *)pbVar7;
      pbVar5 = pbVar5 + 4;
      pbVar7 = pbVar7 + 4;
    } while (uVar11 != 0);
  }
LAB_00efedec:
  if (param_1 != 4) {
    operator_delete(pbVar14);
  }
  lVar4 = (param_3 - param_5) + param_6;
  *(ulong *)this = uVar15 | 1;
  *(long *)(this + 8) = lVar4;
  *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> **)
   (this + 0x10) = pbVar3;
  *(undefined4 *)(pbVar3 + lVar4 * 4) = 0;
  return;
}

