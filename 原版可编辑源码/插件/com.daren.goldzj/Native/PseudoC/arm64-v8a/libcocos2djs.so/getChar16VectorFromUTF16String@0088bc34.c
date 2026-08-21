
/* cocos2d::StringUtils::getChar16VectorFromUTF16String(std::__ndk1::basic_string<char16_t,
   std::__ndk1::char_traits<char16_t>, std::__ndk1::allocator<char16_t> > const&) */

void __thiscall
cocos2d::StringUtils::getChar16VectorFromUTF16String(StringUtils *this,basic_string *param_1)

{
  ulong uVar1;
  StringUtils SVar2;
  StringUtils *pSVar3;
  StringUtils *pSVar4;
  undefined8 *in_x8;
  StringUtils *pSVar5;
  StringUtils *pSVar6;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  StringUtils *pSVar7;
  
  SVar2 = *this;
  uVar10 = *(ulong *)(this + 8);
  pSVar5 = *(StringUtils **)(this + 0x10);
  *in_x8 = 0;
  in_x8[1] = 0;
  uVar9 = (ulong)((byte)SVar2 >> 1);
  pSVar3 = this + 2;
  if (((byte)SVar2 & 1) != 0) {
    uVar9 = uVar10;
    pSVar3 = pSVar5;
  }
  in_x8[2] = 0;
  if (uVar9 == 0) {
    return;
  }
  uVar10 = uVar9 * 2;
  if ((uVar9 & 0x7fffffffffffffff) >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  pSVar4 = operator_new(uVar10);
  uVar1 = (uVar10 - 2 >> 1) + 1;
  in_x8[2] = pSVar4 + ((long)(uVar9 << 1) >> 1) * 2;
  *in_x8 = pSVar4;
  in_x8[1] = pSVar4;
  pSVar5 = pSVar4;
  pSVar7 = pSVar3;
  if ((0xf < uVar1) && ((pSVar3 + uVar10 <= pSVar4 || (pSVar4 + uVar10 <= pSVar3)))) {
    uVar8 = uVar1 & 0xfffffffffffffff0;
    pSVar5 = pSVar3 + 0x10;
    pSVar7 = pSVar4 + 0x10;
    uVar9 = uVar8;
    do {
      pSVar6 = pSVar5 + -8;
      uVar11 = *(undefined8 *)(pSVar5 + -0x10);
      uVar13 = *(undefined8 *)(pSVar5 + 8);
      uVar12 = *(undefined8 *)pSVar5;
      pSVar5 = pSVar5 + 0x20;
      uVar9 = uVar9 - 0x10;
      *(undefined8 *)(pSVar7 + -8) = *(undefined8 *)pSVar6;
      *(undefined8 *)(pSVar7 + -0x10) = uVar11;
      *(undefined8 *)(pSVar7 + 8) = uVar13;
      *(undefined8 *)pSVar7 = uVar12;
      pSVar7 = pSVar7 + 0x20;
    } while (uVar9 != 0);
    pSVar5 = pSVar4 + uVar8 * 2;
    pSVar7 = pSVar3 + uVar8 * 2;
    if (uVar1 == uVar8) goto LAB_0088bd24;
  }
  do {
    pSVar6 = pSVar7 + 2;
    *(undefined2 *)pSVar5 = *(undefined2 *)pSVar7;
    pSVar5 = pSVar5 + 2;
    pSVar7 = pSVar6;
  } while (pSVar3 + uVar10 != pSVar6);
LAB_0088bd24:
  in_x8[1] = pSVar4 + ((ulong)(pSVar3 + uVar10 + (-2 - (long)pSVar3)) & 0xfffffffffffffffe) + 2;
  return;
}

