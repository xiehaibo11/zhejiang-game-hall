
/* std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> >::basic_string(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&, unsigned long,
   unsigned long, std::__ndk1::allocator<char32_t> const&) */

void std::__ndk1::
     basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
     basic_string(basic_string *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  basic_string *pbVar1;
  allocator *paVar2;
  byte bVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  allocator *paVar6;
  allocator *paVar7;
  long lVar8;
  basic_string *pbVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  bVar3 = *(byte *)param_2;
  uVar10 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  if (uVar10 < param_3) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  lVar8 = param_2 + 4;
  if ((bVar3 & 1) != 0) {
    lVar8 = *(long *)(param_2 + 0x10);
  }
  paVar2 = (allocator *)(uVar10 - param_3);
  if (param_4 <= (allocator *)(uVar10 - param_3)) {
    paVar2 = param_4;
  }
  if ((allocator *)0x3fffffffffffffef < paVar2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (paVar2 < (allocator *)0x5) {
    pbVar9 = param_1 + 4;
    *param_1 = SUB41((int)paVar2 << 1,0);
    if (paVar2 == (allocator *)0x0) goto LAB_00aaa0b0;
  }
  else {
    if ((ulong)(paVar2 + 4) >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar10 = (ulong)(paVar2 + 4) & 0xfffffffffffffffc;
    pbVar9 = operator_new(uVar10 << 2);
    *(allocator **)(param_1 + 8) = paVar2;
    *(basic_string **)(param_1 + 0x10) = pbVar9;
    *(ulong *)param_1 = uVar10 | 1;
  }
  pbVar4 = (basic_string *)(lVar8 + param_3 * 4);
  pbVar5 = pbVar9;
  paVar6 = paVar2;
  if (((allocator *)0x7 < paVar2) &&
     (((basic_string *)(lVar8 + (long)(paVar2 + param_3) * 4) <= pbVar9 ||
      (pbVar9 + (long)paVar2 * 4 <= pbVar4)))) {
    paVar7 = (allocator *)((ulong)paVar2 & 0xfffffffffffffff8);
    lVar8 = 0;
    paVar6 = paVar7;
    do {
      pbVar5 = pbVar4 + lVar8;
      uVar11 = *(undefined8 *)pbVar5;
      uVar13 = *(undefined8 *)(pbVar5 + 0x18);
      uVar12 = *(undefined8 *)(pbVar5 + 0x10);
      pbVar1 = pbVar9 + lVar8;
      paVar6 = paVar6 + -8;
      lVar8 = lVar8 + 0x20;
      *(undefined8 *)(pbVar1 + 8) = *(undefined8 *)(pbVar5 + 8);
      *(undefined8 *)pbVar1 = uVar11;
      *(undefined8 *)(pbVar1 + 0x18) = uVar13;
      *(undefined8 *)(pbVar1 + 0x10) = uVar12;
    } while (paVar6 != (allocator *)0x0);
    pbVar4 = pbVar4 + (long)paVar7 * 4;
    pbVar5 = pbVar9 + (long)paVar7 * 4;
    paVar6 = paVar2 + -(long)paVar7;
    if (paVar2 == paVar7) goto LAB_00aaa0b0;
  }
  do {
    paVar6 = paVar6 + -1;
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar4;
    pbVar4 = pbVar4 + 4;
    pbVar5 = pbVar5 + 4;
  } while (paVar6 != (allocator *)0x0);
LAB_00aaa0b0:
  *(undefined4 *)(pbVar9 + (long)paVar2 * 4) = 0;
  return;
}

