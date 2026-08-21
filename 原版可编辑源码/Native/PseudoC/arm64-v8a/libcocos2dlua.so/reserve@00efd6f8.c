
/* std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::reserve
          (basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
           *this,ulong param_1)

{
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> bVar1;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar2
  ;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar6
  ;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar7
  ;
  ulong uVar8;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar9
  ;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
  *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (0x3fffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar13 = (ulong)((byte)bVar1 >> 1);
    uVar8 = 4;
  }
  else {
    uVar13 = *(ulong *)(this + 8);
    uVar8 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar14 = uVar13;
  if (uVar13 <= param_1) {
    uVar14 = param_1;
  }
  if (uVar14 < 5) {
    uVar14 = 4;
    if (uVar8 == 4) {
      return;
    }
  }
  else {
    uVar14 = (uVar14 + 4 & 0xfffffffffffffffc) - 1;
    if (uVar14 == uVar8) {
      return;
    }
  }
  if (uVar14 == 4) {
    pbVar6 = *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
               **)(this + 0x10);
    bVar4 = false;
    pbVar7 = this + 4;
    if (((byte)bVar1 & 1) != 0) goto LAB_00efd87c;
    bVar3 = true;
LAB_00efd7d8:
    uVar8 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar12 = uVar14 + 1;
    if (uVar8 < uVar14) {
      if (uVar12 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pbVar7 = operator_new(uVar12 * 4);
    }
    else {
      if (uVar12 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pbVar7 = operator_new(uVar12 * 4);
    }
    if (((byte)bVar1 & 1) == 0) {
      bVar3 = false;
      pbVar6 = this + 4;
      bVar4 = true;
      goto LAB_00efd7d8;
    }
    pbVar6 = *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
               **)(this + 0x10);
    bVar4 = true;
LAB_00efd87c:
    uVar8 = *(ulong *)(this + 8);
    bVar3 = true;
  }
  if (uVar8 != 0xffffffffffffffff) {
    uVar8 = uVar8 + 1;
    pbVar9 = pbVar7;
    pbVar10 = pbVar6;
    if ((7 < uVar8) && ((pbVar6 + uVar8 * 4 <= pbVar7 || (pbVar7 + uVar8 * 4 <= pbVar6)))) {
      uVar11 = uVar8 & 0xfffffffffffffff8;
      pbVar9 = pbVar6 + 0x10;
      pbVar10 = pbVar7 + 0x10;
      uVar12 = uVar11;
      do {
        pbVar2 = pbVar9 + -8;
        uVar15 = *(undefined8 *)(pbVar9 + -0x10);
        uVar17 = *(undefined8 *)(pbVar9 + 8);
        uVar16 = *(undefined8 *)pbVar9;
        pbVar9 = pbVar9 + 0x20;
        uVar12 = uVar12 - 8;
        *(undefined8 *)(pbVar10 + -8) = *(undefined8 *)pbVar2;
        *(undefined8 *)(pbVar10 + -0x10) = uVar15;
        *(undefined8 *)(pbVar10 + 8) = uVar17;
        *(undefined8 *)pbVar10 = uVar16;
        pbVar10 = pbVar10 + 0x20;
      } while (uVar12 != 0);
      bVar5 = uVar8 == uVar11;
      uVar8 = uVar8 - uVar11;
      pbVar9 = pbVar7 + uVar11 * 4;
      pbVar10 = pbVar6 + uVar11 * 4;
      if (bVar5) goto LAB_00efd88c;
    }
    do {
      uVar8 = uVar8 - 1;
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar10;
      pbVar9 = pbVar9 + 4;
      pbVar10 = pbVar10 + 4;
    } while (uVar8 != 0);
  }
LAB_00efd88c:
  if (bVar3) {
    operator_delete(pbVar6);
  }
  if (bVar4) {
    *(ulong *)this = uVar14 + 1 | 1;
    *(ulong *)(this + 8) = uVar13;
    *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> **)
     (this + 0x10) = pbVar7;
  }
  else {
    *this = SUB41((int)uVar13 << 1,0);
  }
  return;
}

