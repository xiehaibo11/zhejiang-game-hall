
/* void std::__ndk1::__sort<std::__ndk1::__less<long, long>&, v8::internal::UnalignedSlot<long>
   >(v8::internal::UnalignedSlot<long>, v8::internal::UnalignedSlot<long>, std::__ndk1::__less<long,
   long>&) */

void std::__ndk1::__sort<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
               (long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
LAB_015b5ac8:
  plVar15 = param_2 + -1;
  plVar12 = param_1;
LAB_015b5ad4:
  param_1 = plVar12;
  uVar5 = (ulong)((int)param_2 - (int)param_1);
  iVar7 = (int)(uVar5 >> 3);
  switch(uVar5 >> 3 & 0xffffffff) {
  case 0:
  case 1:
    goto switchD_015b5d20_caseD_0;
  case 2:
    lVar8 = *param_1;
    if (param_2[-1] < lVar8) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar8;
      return;
    }
    return;
  case 3:
    __sort3<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
              (param_1,param_1 + 1,plVar15,param_3);
    return;
  case 4:
    __sort4<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
              (param_1,param_1 + 1,param_1 + 2,plVar15,param_3);
    return;
  case 5:
    FUN_015b5f50(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar15,param_3);
    return;
  default:
    if (0x1e < iVar7) {
      plVar12 = (long *)((uVar5 >> 1 & 0x3fffffff8) + (long)param_1);
      if (iVar7 < 1000) {
        uVar4 = __sort3<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
                          (param_1,plVar12,plVar15,param_3);
      }
      else {
        uVar5 = uVar5 >> 2 & 0x1fffffff8;
        uVar4 = FUN_015b5f50(param_1,uVar5 + (long)param_1,plVar12,(long)plVar12 + uVar5,plVar15,
                             param_3);
      }
      lVar8 = *param_1;
      plVar6 = plVar15;
      plVar9 = param_2 + -2;
      if (*plVar12 <= lVar8) break;
      goto LAB_015b5b80;
    }
    __sort3<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar8 = 0x10;
    plVar12 = param_1 + 3;
    plVar15 = param_1 + 2;
    goto LAB_015b5d88;
  }
  while (plVar6 = plVar9, param_1 != plVar6) {
    plVar9 = plVar6 + -1;
    if (*plVar6 < *plVar12) goto code_r0x015b5b74;
  }
  plVar6 = param_1 + 1;
  if (*plVar15 <= lVar8) {
    if (plVar6 == plVar15) {
      return;
    }
    plVar6 = param_1 + 2;
    while (lVar11 = plVar6[-1], lVar11 <= lVar8) {
      plVar6 = plVar6 + 1;
      if (param_2 == plVar6) {
        return;
      }
    }
    plVar6[-1] = *plVar15;
    *plVar15 = lVar11;
  }
  plVar9 = plVar15;
  if (plVar6 == plVar15) {
    return;
  }
  while( true ) {
    do {
      plVar12 = plVar6;
      plVar6 = plVar12 + 1;
      lVar8 = *plVar12;
    } while (lVar8 <= *param_1);
    do {
      plVar9 = plVar9 + -1;
    } while (*param_1 < *plVar9);
    if (plVar9 <= plVar12) break;
    *plVar12 = *plVar9;
    *plVar9 = lVar8;
  }
  goto LAB_015b5ad4;
code_r0x015b5b74:
  *param_1 = *plVar6;
  *plVar6 = lVar8;
  uVar4 = uVar4 + 1;
LAB_015b5b80:
  plVar9 = param_1 + 1;
  plVar1 = plVar12;
  plVar16 = plVar9;
  if (plVar9 < plVar6) {
    while( true ) {
      plVar12 = plVar1;
      plVar9 = plVar16 + -1;
      do {
        plVar16 = plVar9;
        plVar9 = plVar16 + 1;
        lVar8 = *plVar9;
      } while (lVar8 < *plVar12);
      plVar16 = plVar16 + 2;
      do {
        plVar6 = plVar6 + -1;
      } while (*plVar12 <= *plVar6);
      if (plVar6 < plVar9) break;
      *plVar9 = *plVar6;
      *plVar6 = lVar8;
      uVar4 = uVar4 + 1;
      plVar1 = plVar6;
      if (plVar12 != plVar9) {
        plVar1 = plVar12;
      }
    }
  }
  if (plVar9 != plVar12) {
    lVar8 = *plVar9;
    if (*plVar12 < lVar8) {
      uVar4 = uVar4 + 1;
      *plVar9 = *plVar12;
      *plVar12 = lVar8;
    }
  }
  if (uVar4 == 0) {
    bVar2 = __insertion_sort_incomplete<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
                      (param_1,plVar9,param_3);
    bVar3 = __insertion_sort_incomplete<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
                      (plVar9 + 1,param_2,param_3);
    if (bVar3) goto LAB_015b5cfc;
    plVar12 = plVar9 + 1;
    if (bVar2) goto LAB_015b5ad4;
  }
  if ((int)((ulong)(long)((int)param_2 - (int)plVar9) >> 3) <=
      (int)((ulong)(long)((int)plVar9 - (int)param_1) >> 3)) {
    __sort<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
              (plVar9 + 1,param_2,param_3);
    param_2 = plVar9;
    goto LAB_015b5ac8;
  }
  __sort<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>(param_1,plVar9,param_3);
  plVar12 = plVar9 + 1;
  goto LAB_015b5ad4;
LAB_015b5cfc:
  param_2 = plVar9;
  if (bVar2) {
    return;
  }
  goto LAB_015b5ac8;
LAB_015b5d88:
  plVar6 = plVar12;
  lVar10 = *plVar6;
  lVar13 = *plVar15;
  lVar11 = lVar8;
  if (lVar10 < lVar13) {
    do {
      lVar14 = lVar11;
      *(long *)((long)param_1 + lVar14 + 8) = lVar13;
      plVar12 = param_1;
      if (lVar14 == 0) goto LAB_015b5d70;
      lVar13 = *(long *)((long)param_1 + lVar14 + -8);
      lVar11 = lVar14 + -8;
    } while (lVar10 < lVar13);
    plVar12 = (long *)((long)param_1 + lVar14);
LAB_015b5d70:
    *plVar12 = lVar10;
  }
  lVar8 = lVar8 + 8;
  plVar12 = plVar6 + 1;
  plVar15 = plVar6;
  if (plVar6 + 1 == param_2) {
switchD_015b5d20_caseD_0:
    return;
  }
  goto LAB_015b5d88;
}

