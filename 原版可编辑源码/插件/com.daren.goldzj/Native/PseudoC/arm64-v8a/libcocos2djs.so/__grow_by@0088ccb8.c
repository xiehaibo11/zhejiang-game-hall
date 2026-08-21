
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
  ulong uVar4;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar5
  ;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar9
  ;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
  *pbVar10;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
  *pbVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar12 = 0x3fffffffffffffef;
  if (0x3fffffffffffffef - param_1 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (((byte)*this & 1) == 0) {
    pbVar11 = this + 4;
  }
  else {
    pbVar11 = *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
                **)(this + 0x10);
  }
  if (param_1 < 0x1fffffffffffffe7) {
    uVar12 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar12 = param_2 + param_1;
    }
    if (uVar12 < 5) {
      uVar12 = 5;
    }
    else {
      if (uVar12 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      uVar12 = uVar12 + 4 & 0xfffffffffffffffc;
    }
  }
  pbVar2 = operator_new(uVar12 << 2);
  if (param_4 != 0) {
    pbVar3 = pbVar2;
    uVar4 = param_4;
    pbVar5 = pbVar11;
    if ((7 < param_4) && ((pbVar11 + param_4 * 4 <= pbVar2 || (pbVar2 + param_4 * 4 <= pbVar11)))) {
      uVar6 = param_4 & 0xfffffffffffffff8;
      pbVar3 = pbVar11 + 0x10;
      uVar4 = param_4 - uVar6;
      pbVar5 = pbVar2 + 0x10;
      uVar8 = uVar6;
      do {
        pbVar9 = pbVar3 + -8;
        uVar13 = *(undefined8 *)(pbVar3 + -0x10);
        uVar15 = *(undefined8 *)(pbVar3 + 8);
        uVar14 = *(undefined8 *)pbVar3;
        pbVar3 = pbVar3 + 0x20;
        uVar8 = uVar8 - 8;
        *(undefined8 *)(pbVar5 + -8) = *(undefined8 *)pbVar9;
        *(undefined8 *)(pbVar5 + -0x10) = uVar13;
        *(undefined8 *)(pbVar5 + 8) = uVar15;
        *(undefined8 *)pbVar5 = uVar14;
        pbVar5 = pbVar5 + 0x20;
      } while (uVar8 != 0);
      pbVar3 = pbVar2 + uVar6 * 4;
      pbVar5 = pbVar11 + uVar6 * 4;
      if (uVar6 == param_4) goto LAB_0088cdf0;
    }
    do {
      uVar4 = uVar4 - 1;
      *(undefined4 *)pbVar3 = *(undefined4 *)pbVar5;
      pbVar3 = pbVar3 + 4;
      pbVar5 = pbVar5 + 4;
    } while (uVar4 != 0);
  }
LAB_0088cdf0:
  uVar4 = (param_3 - param_5) - param_4;
  if (uVar4 != 0) {
    pbVar3 = pbVar2 + param_6 * 4 + param_4 * 4;
    pbVar5 = pbVar11 + param_5 * 4 + param_4 * 4;
    uVar8 = uVar4;
    if ((7 < uVar4) &&
       ((pbVar11 + param_3 * 4 <= pbVar2 + (param_6 + param_4) * 4 ||
        (pbVar2 + ((param_6 + param_3) - param_5) * 4 <= pbVar5)))) {
      uVar7 = uVar4 & 0xfffffffffffffff8;
      uVar8 = uVar4 - uVar7;
      pbVar9 = pbVar11 + (param_5 + param_4) * 4 + 0x10;
      pbVar10 = pbVar2 + param_6 * 4 + param_4 * 4 + 0x10;
      uVar6 = uVar7;
      do {
        pbVar1 = pbVar9 + -8;
        uVar13 = *(undefined8 *)(pbVar9 + -0x10);
        uVar15 = *(undefined8 *)(pbVar9 + 8);
        uVar14 = *(undefined8 *)pbVar9;
        uVar6 = uVar6 - 8;
        pbVar9 = pbVar9 + 0x20;
        *(undefined8 *)(pbVar10 + -8) = *(undefined8 *)pbVar1;
        *(undefined8 *)(pbVar10 + -0x10) = uVar13;
        *(undefined8 *)(pbVar10 + 8) = uVar15;
        *(undefined8 *)pbVar10 = uVar14;
        pbVar10 = pbVar10 + 0x20;
      } while (uVar6 != 0);
      pbVar3 = pbVar3 + uVar7 * 4;
      pbVar5 = pbVar5 + uVar7 * 4;
      if (uVar4 == uVar7) goto LAB_0088cea8;
    }
    do {
      uVar8 = uVar8 - 1;
      *(undefined4 *)pbVar3 = *(undefined4 *)pbVar5;
      pbVar3 = pbVar3 + 4;
      pbVar5 = pbVar5 + 4;
    } while (uVar8 != 0);
  }
LAB_0088cea8:
  if (param_1 != 4) {
    operator_delete(pbVar11);
  }
  *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> **)
   (this + 0x10) = pbVar2;
  *(ulong *)this = uVar12 | 1;
  return;
}

