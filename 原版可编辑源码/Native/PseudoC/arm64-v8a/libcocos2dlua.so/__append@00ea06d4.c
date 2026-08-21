
/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__append(unsigned
   long, unsigned char const&) */

void __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,ulong param_1,
          uchar *param_2)

{
  void *__src;
  uchar uVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  uchar *puVar4;
  uchar *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uchar *puVar9;
  long lVar10;
  long lVar11;
  
  puVar4 = *(uchar **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4)) {
    puVar9 = puVar4;
    if (param_1 != 0) {
      puVar9 = puVar4 + param_1;
      if ((0x1f < param_1) && ((param_2 + 1 <= puVar4 || (puVar9 <= param_2)))) {
        uVar1 = *param_2;
        uVar3 = param_1 & 0xffffffffffffffe0;
        puVar5 = puVar4 + 0x10;
        uVar8 = uVar3;
        do {
          *(ulong *)(puVar5 + -8) =
               CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
          *(ulong *)(puVar5 + -0x10) =
               CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
          *(ulong *)(puVar5 + 8) =
               CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
          *(ulong *)puVar5 =
               CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
          uVar8 = uVar8 - 0x20;
          puVar5 = puVar5 + 0x20;
        } while (uVar8 != 0);
        puVar4 = puVar4 + uVar3;
        if (uVar3 == param_1) goto LAB_00ea07ac;
      }
      do {
        puVar5 = puVar4 + 1;
        *puVar4 = *param_2;
        puVar4 = puVar5;
      } while (puVar9 != puVar5);
    }
LAB_00ea07ac:
    *(uchar **)(this + 8) = puVar9;
    return;
  }
  lVar10 = *(long *)this;
  lVar11 = (long)puVar4 - lVar10;
  uVar8 = lVar11 + param_1;
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  uVar3 = *(long *)(this + 0x10) - lVar10;
  if (uVar3 < 0x3fffffffffffffff) {
    uVar3 = uVar3 * 2;
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    if (uVar8 != 0) goto LAB_00ea07b8;
    pvVar2 = (void *)0x0;
  }
  else {
    uVar8 = 0x7fffffffffffffff;
LAB_00ea07b8:
    pvVar2 = operator_new(uVar8);
  }
  puVar9 = (uchar *)((long)pvVar2 + lVar11);
  puVar5 = puVar9;
  if ((0x1f < param_1) && ((param_2 + 1 <= puVar9 || (puVar9 + param_1 <= param_2)))) {
    uVar1 = *param_2;
    uVar6 = param_1 & 0xffffffffffffffe0;
    puVar7 = (undefined8 *)((long)pvVar2 + lVar11 + 0x10);
    uVar3 = uVar6;
    do {
      puVar7[-1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar7[-2] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar7[1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      *puVar7 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
      uVar3 = uVar3 - 0x20;
      puVar7 = puVar7 + 4;
    } while (uVar3 != 0);
    puVar5 = puVar9 + uVar6;
    if (uVar6 == param_1) goto LAB_00ea0840;
  }
  puVar4 = (uchar *)((long)pvVar2 + (long)(puVar4 + ((param_1 - (long)puVar5) - lVar10)));
  do {
    puVar4 = puVar4 + -1;
    *puVar5 = *param_2;
    puVar5 = puVar5 + 1;
  } while (puVar4 != (uchar *)0x0);
LAB_00ea0840:
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy(puVar9 + -__n,__src,__n);
  }
  *(uchar **)this = puVar9 + -__n;
  *(uchar **)(this + 8) = puVar9 + param_1;
  *(ulong *)(this + 0x10) = (long)pvVar2 + uVar8;
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

