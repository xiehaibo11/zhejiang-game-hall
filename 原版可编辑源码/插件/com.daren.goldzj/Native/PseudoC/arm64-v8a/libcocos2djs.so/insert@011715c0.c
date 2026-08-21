
/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>
   >::insert(std::__ndk1::__wrap_iter<unsigned char const*>, unsigned long, unsigned char const&) */

undefined1 * __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,undefined1 *param_2,
          ulong param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  size_t __n;
  long lVar13;
  undefined1 *puVar14;
  
  if (param_3 == 0) {
    return param_2;
  }
  puVar7 = *(undefined1 **)(this + 8);
  if (param_3 <= (ulong)(*(long *)(this + 0x10) - (long)puVar7)) {
    uVar8 = (long)puVar7 - (long)param_2;
    puVar11 = puVar7;
    uVar6 = param_3;
    if (uVar8 < param_3) {
      lVar13 = param_3 - uVar8;
      do {
        lVar13 = lVar13 + -1;
        *puVar11 = *param_4;
        puVar11 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar11;
      } while (lVar13 != 0);
      uVar6 = uVar8;
      if (uVar8 == 0) {
        return param_2;
      }
    }
    puVar12 = param_2 + param_3;
    sVar5 = (long)puVar11 - (long)puVar12;
    if (puVar11 + -param_3 < puVar7) {
      puVar7 = puVar7 + (long)(puVar12 + (-(long)param_2 - (long)puVar11));
      puVar14 = puVar11 + (long)param_2 + -(long)puVar12;
      puVar12 = puVar11;
      do {
        puVar7 = puVar7 + -1;
        *puVar12 = *puVar14;
        puVar12 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar12;
        puVar14 = puVar14 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
    if (sVar5 != 0) {
      memmove(puVar11 + -sVar5,param_2,sVar5);
    }
    puVar7 = param_4;
    if ((param_2 <= param_4) && (puVar7 = param_4 + param_3, *(undefined1 **)(this + 8) <= param_4))
    {
      puVar7 = param_4;
    }
    puVar11 = param_2;
    if ((0x1f < uVar6) && ((puVar7 + 1 <= param_2 || (param_2 + uVar6 <= puVar7)))) {
      uVar1 = *puVar7;
      uVar10 = uVar6 & 0xffffffffffffffe0;
      puVar9 = (undefined8 *)(param_2 + 0x10);
      uVar8 = uVar10;
      do {
        puVar9[-1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        puVar9[-2] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        puVar9[1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        *puVar9 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        uVar8 = uVar8 - 0x20;
        puVar9 = puVar9 + 4;
      } while (uVar8 != 0);
      bVar2 = uVar6 == uVar10;
      puVar11 = param_2 + uVar10;
      uVar6 = uVar6 - uVar10;
      if (bVar2) {
        return param_2;
      }
    }
    do {
      uVar6 = uVar6 - 1;
      *puVar11 = *puVar7;
      puVar11 = puVar11 + 1;
    } while (uVar6 != 0);
    return param_2;
  }
  lVar13 = *(long *)this;
  puVar7 = puVar7 + (param_3 - lVar13);
  if ((long)puVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = *(long *)(this + 0x10) - lVar13;
  puVar11 = (undefined1 *)(uVar6 * 2);
  if (puVar7 <= puVar11) {
    puVar7 = puVar11;
  }
  if (0x3ffffffffffffffe < uVar6) {
    puVar7 = (undefined1 *)0x7fffffffffffffff;
  }
  if (puVar7 == (undefined1 *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = operator_new((ulong)puVar7);
  }
  puVar11 = (undefined1 *)((long)pvVar3 + ((long)param_2 - lVar13));
  puVar12 = puVar11;
  if ((0x1f < param_3) &&
     ((param_4 + 1 <= puVar11 ||
      ((undefined1 *)((long)pvVar3 + (long)(param_2 + (param_3 - lVar13))) <= param_4)))) {
    uVar1 = *param_4;
    uVar8 = param_3 & 0xffffffffffffffe0;
    puVar14 = puVar11 + uVar8;
    puVar9 = (undefined8 *)((long)pvVar3 + ((long)param_2 - lVar13) + 0x10);
    uVar6 = uVar8;
    do {
      puVar9[-1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar9[-2] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar9[1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      *puVar9 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
      uVar6 = uVar6 - 0x20;
      puVar9 = puVar9 + 4;
    } while (uVar6 != 0);
    bVar2 = uVar8 == param_3;
    param_3 = param_3 - uVar8;
    puVar12 = puVar14;
    if (bVar2) goto LAB_01171780;
  }
  do {
    param_3 = param_3 - 1;
    puVar14 = puVar12 + 1;
    *puVar12 = *param_4;
    puVar12 = puVar14;
  } while (param_3 != 0);
LAB_01171780:
  sVar5 = (long)param_2 - (long)*(void **)this;
  if (0 < (long)sVar5) {
    memcpy(puVar11 + -sVar5,*(void **)this,sVar5);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar14,param_2,__n);
    puVar14 = puVar14 + __n;
  }
  pvVar4 = *(void **)this;
  *(undefined1 **)this = puVar11 + -sVar5;
  *(undefined1 **)(this + 8) = puVar14;
  *(undefined1 **)(this + 0x10) = (undefined1 *)((long)pvVar3 + (long)puVar7);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  return puVar11;
}

