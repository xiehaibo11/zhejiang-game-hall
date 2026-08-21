
/* std::__ndk1::basic_string<char16_t, std::__ndk1::char_traits<char16_t>,
   std::__ndk1::allocator<char16_t> >::__grow_by(unsigned long, unsigned long, unsigned long,
   unsigned long, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::
basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>::
__grow_by(basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
          *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
  basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>> *pbVar1
  ;
  basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>> *pbVar2
  ;
  basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>> *pbVar3
  ;
  long lVar4;
  ulong uVar5;
  basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>> *pbVar6
  ;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
  *pbVar10;
  basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
  *pbVar11;
  basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
  *pbVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar13 = 0x7fffffffffffffef;
  if (0x7fffffffffffffef - param_1 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (((byte)*this & 1) == 0) {
    pbVar12 = this + 2;
  }
  else {
    pbVar12 = *(basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
                **)(this + 0x10);
  }
  if (param_1 < 0x3fffffffffffffe7) {
    uVar13 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar13 = param_2 + param_1;
    }
    if (uVar13 < 0xb) {
      uVar13 = 0xb;
    }
    else {
      if ((long)(uVar13 + 8) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      uVar13 = uVar13 + 8 & 0xfffffffffffffff8;
    }
  }
  pbVar2 = operator_new(uVar13 << 1);
  lVar4 = param_4 * 2;
  if (param_4 != 0) {
    pbVar3 = pbVar2;
    uVar5 = param_4;
    pbVar6 = pbVar12;
    if ((0xf < param_4) && ((pbVar12 + lVar4 <= pbVar2 || (pbVar2 + lVar4 <= pbVar12)))) {
      uVar8 = param_4 & 0xfffffffffffffff0;
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
        uVar9 = uVar9 - 0x10;
        *(undefined8 *)(pbVar6 + -8) = *(undefined8 *)pbVar10;
        *(undefined8 *)(pbVar6 + -0x10) = uVar14;
        *(undefined8 *)(pbVar6 + 8) = uVar16;
        *(undefined8 *)pbVar6 = uVar15;
        pbVar6 = pbVar6 + 0x20;
      } while (uVar9 != 0);
      pbVar3 = pbVar2 + uVar8 * 2;
      pbVar6 = pbVar12 + uVar8 * 2;
      if (uVar8 == param_4) goto LAB_00fc813c;
    }
    do {
      uVar5 = uVar5 - 1;
      *(undefined2 *)pbVar3 = *(undefined2 *)pbVar6;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (uVar5 != 0);
  }
LAB_00fc813c:
  uVar5 = (param_3 - param_5) - param_4;
  if (uVar5 != 0) {
    pbVar3 = pbVar2 + param_6 * 2 + lVar4;
    pbVar6 = pbVar12 + param_5 * 2 + lVar4;
    uVar9 = uVar5;
    if ((0xf < uVar5) &&
       ((pbVar12 + param_3 * 2 <= pbVar2 + (param_6 + param_4) * 2 ||
        (pbVar2 + ((param_6 + param_3) - param_5) * 2 <= pbVar6)))) {
      uVar7 = uVar5 & 0xfffffffffffffff0;
      uVar9 = uVar5 - uVar7;
      pbVar10 = pbVar12 + (param_5 + param_4) * 2 + 0x10;
      pbVar11 = pbVar2 + param_6 * 2 + param_4 * 2 + 0x10;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar10 + -8;
        uVar14 = *(undefined8 *)(pbVar10 + -0x10);
        uVar16 = *(undefined8 *)(pbVar10 + 8);
        uVar15 = *(undefined8 *)pbVar10;
        uVar8 = uVar8 - 0x10;
        pbVar10 = pbVar10 + 0x20;
        *(undefined8 *)(pbVar11 + -8) = *(undefined8 *)pbVar1;
        *(undefined8 *)(pbVar11 + -0x10) = uVar14;
        *(undefined8 *)(pbVar11 + 8) = uVar16;
        *(undefined8 *)pbVar11 = uVar15;
        pbVar11 = pbVar11 + 0x20;
      } while (uVar8 != 0);
      pbVar3 = pbVar3 + uVar7 * 2;
      pbVar6 = pbVar6 + uVar7 * 2;
      if (uVar5 == uVar7) goto LAB_00fc81f0;
    }
    do {
      uVar9 = uVar9 - 1;
      *(undefined2 *)pbVar3 = *(undefined2 *)pbVar6;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (uVar9 != 0);
  }
LAB_00fc81f0:
  if (param_1 != 10) {
    operator_delete(pbVar12);
  }
  *(basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>> **)
   (this + 0x10) = pbVar2;
  *(ulong *)this = uVar13 | 1;
  return;
}

