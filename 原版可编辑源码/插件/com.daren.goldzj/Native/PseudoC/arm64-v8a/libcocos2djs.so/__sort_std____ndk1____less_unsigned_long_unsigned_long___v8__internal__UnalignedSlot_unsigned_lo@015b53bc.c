
/* void std::__ndk1::__sort<std::__ndk1::__less<unsigned long, unsigned long>&,
   v8::internal::UnalignedSlot<unsigned long> >(v8::internal::UnalignedSlot<unsigned long>,
   v8::internal::UnalignedSlot<unsigned long>, std::__ndk1::__less<unsigned long, unsigned long>&)
    */

void std::__ndk1::
     __sort<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
               (ulong *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  
LAB_015b53e0:
  puVar14 = param_2 + -1;
  puVar12 = param_1;
LAB_015b53ec:
  param_1 = puVar12;
  uVar6 = (ulong)((int)param_2 - (int)param_1);
  iVar8 = (int)(uVar6 >> 3);
  switch(uVar6 >> 3 & 0xffffffff) {
  case 0:
  case 1:
    goto switchD_015b5638_caseD_0;
  case 2:
    uVar6 = *param_1;
    if (param_2[-1] < uVar6) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
      return;
    }
    return;
  case 3:
    __sort3<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
              (param_1,param_1 + 1,puVar14,param_3);
    return;
  case 4:
    __sort4<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
              (param_1,param_1 + 1,param_1 + 2,puVar14,param_3);
    return;
  case 5:
    FUN_015b5868(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar14,param_3);
    return;
  default:
    if (0x1e < iVar8) {
      puVar12 = (ulong *)((uVar6 >> 1 & 0x3fffffff8) + (long)param_1);
      if (iVar8 < 1000) {
        uVar5 = __sort3<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
                          (param_1,puVar12,puVar14,param_3);
      }
      else {
        uVar6 = uVar6 >> 2 & 0x1fffffff8;
        uVar5 = FUN_015b5868(param_1,uVar6 + (long)param_1,puVar12,(long)puVar12 + uVar6,puVar14,
                             param_3);
      }
      uVar6 = *param_1;
      puVar7 = puVar14;
      puVar9 = param_2 + -2;
      if (*puVar12 <= uVar6) break;
      goto LAB_015b5498;
    }
    __sort3<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar10 = 0x10;
    puVar12 = param_1 + 3;
    puVar14 = param_1 + 2;
    goto LAB_015b56a0;
  }
  while (puVar7 = puVar9, param_1 != puVar7) {
    puVar9 = puVar7 + -1;
    if (*puVar7 < *puVar12) goto code_r0x015b548c;
  }
  puVar7 = param_1 + 1;
  if (*puVar14 <= uVar6) {
    if (puVar7 == puVar14) {
      return;
    }
    puVar7 = param_1 + 2;
    while (uVar11 = puVar7[-1], uVar11 <= uVar6) {
      puVar7 = puVar7 + 1;
      if (param_2 == puVar7) {
        return;
      }
    }
    puVar7[-1] = *puVar14;
    *puVar14 = uVar11;
  }
  puVar9 = puVar14;
  if (puVar7 == puVar14) {
    return;
  }
  while( true ) {
    do {
      puVar12 = puVar7;
      puVar7 = puVar12 + 1;
      uVar6 = *puVar12;
    } while (uVar6 <= *param_1);
    do {
      puVar9 = puVar9 + -1;
    } while (*param_1 < *puVar9);
    if (puVar9 <= puVar12) break;
    *puVar12 = *puVar9;
    *puVar9 = uVar6;
  }
  goto LAB_015b53ec;
code_r0x015b548c:
  *param_1 = *puVar7;
  *puVar7 = uVar6;
  uVar5 = uVar5 + 1;
LAB_015b5498:
  puVar9 = param_1 + 1;
  puVar2 = puVar12;
  puVar15 = puVar9;
  if (puVar9 < puVar7) {
    while( true ) {
      puVar12 = puVar2;
      puVar9 = puVar15 + -1;
      do {
        puVar15 = puVar9;
        puVar9 = puVar15 + 1;
        uVar6 = *puVar9;
      } while (uVar6 < *puVar12);
      puVar15 = puVar15 + 2;
      do {
        puVar7 = puVar7 + -1;
      } while (*puVar12 <= *puVar7);
      if (puVar7 < puVar9) break;
      *puVar9 = *puVar7;
      *puVar7 = uVar6;
      uVar5 = uVar5 + 1;
      puVar2 = puVar7;
      if (puVar12 != puVar9) {
        puVar2 = puVar12;
      }
    }
  }
  if (puVar9 != puVar12) {
    uVar6 = *puVar9;
    if (*puVar12 < uVar6) {
      uVar5 = uVar5 + 1;
      *puVar9 = *puVar12;
      *puVar12 = uVar6;
    }
  }
  if (uVar5 == 0) {
    bVar3 = __insertion_sort_incomplete<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
                      (param_1,puVar9,param_3);
    bVar4 = __insertion_sort_incomplete<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
                      (puVar9 + 1,param_2,param_3);
    if (bVar4) goto LAB_015b5614;
    puVar12 = puVar9 + 1;
    if (bVar3) goto LAB_015b53ec;
  }
  if ((int)((ulong)(long)((int)param_2 - (int)puVar9) >> 3) <=
      (int)((ulong)(long)((int)puVar9 - (int)param_1) >> 3)) {
    __sort<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
              (puVar9 + 1,param_2,param_3);
    param_2 = puVar9;
    goto LAB_015b53e0;
  }
  __sort<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
            (param_1,puVar9,param_3);
  puVar12 = puVar9 + 1;
  goto LAB_015b53ec;
LAB_015b5614:
  param_2 = puVar9;
  if (bVar3) {
    return;
  }
  goto LAB_015b53e0;
LAB_015b56a0:
  puVar7 = puVar12;
  uVar6 = *puVar7;
  uVar11 = *puVar14;
  lVar1 = lVar10;
  if (uVar6 < uVar11) {
    do {
      lVar13 = lVar1;
      *(ulong *)((long)param_1 + lVar13 + 8) = uVar11;
      puVar12 = param_1;
      if (lVar13 == 0) goto LAB_015b5688;
      uVar11 = *(ulong *)((long)param_1 + lVar13 + -8);
      lVar1 = lVar13 + -8;
    } while (uVar6 < uVar11);
    puVar12 = (ulong *)((long)param_1 + lVar13);
LAB_015b5688:
    *puVar12 = uVar6;
  }
  lVar10 = lVar10 + 8;
  puVar12 = puVar7 + 1;
  puVar14 = puVar7;
  if (puVar7 + 1 == param_2) {
switchD_015b5638_caseD_0:
    return;
  }
  goto LAB_015b56a0;
}

