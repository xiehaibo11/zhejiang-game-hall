
/* void std::__ndk1::__sort<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,
   v8::internal::AtomicSlot>(v8::internal::AtomicSlot, v8::internal::AtomicSlot,
   v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&) */

void std::__ndk1::
     __sort<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
               (uint *param_1,uint *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  
LAB_0111f2a0:
  puVar13 = param_2 + -1;
  puVar14 = param_1;
LAB_0111f2ac:
  param_1 = puVar14;
  iVar5 = (int)param_2 - (int)param_1;
  iVar2 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  uVar9 = iVar2 >> 2;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_0111f74c_caseD_0;
  case 2:
    uVar11 = *param_3 & 0xffffffff00000000;
    lVar1 = *param_3 + 7;
    if (*(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9
        <= *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((param_2[-1] & 0x7ffffffe) * 2 + 0x14))) + 7)
           >> 9) {
      return;
    }
    uVar9 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar9;
    return;
  case 3:
    __sort3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,puVar13,param_3);
    return;
  case 4:
    __sort4<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,param_1 + 2,puVar13,param_3);
    return;
  case 5:
    FUN_0111fb9c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar13,param_3);
    return;
  default:
    if (iVar5 < 0x7c) {
      __insertion_sort_3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
                (param_1,param_2,param_3);
      return;
    }
    puVar14 = param_1 + (uVar9 >> 1);
    if (iVar5 < 4000) {
      uVar9 = __sort3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
                        (param_1,puVar14,puVar13,param_3);
    }
    else {
      uVar9 = FUN_0111fb9c(param_1,(long)param_1 + (ulong)(uVar9 & 0xfffffffc),puVar14,
                           (long)puVar14 + (ulong)(uVar9 & 0xfffffffc),puVar13,param_3);
    }
    uVar11 = *param_3 & 0xffffffff00000000;
    lVar1 = *param_3 + 7;
    puVar10 = puVar13;
    puVar12 = param_2 + -2;
    if (*(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar14 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9
        <= *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14))) + 7) >>
           9) break;
    goto LAB_0111f3dc;
  }
  while (puVar10 = puVar12, param_1 != puVar10) {
    puVar12 = puVar10 + -1;
    if (*(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar10 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9
        < *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar14 & 0x7ffffffe) * 2 + 0x14))) + 7) >>
          9) goto code_r0x0111f3c4;
  }
  puVar10 = param_1 + 1;
  if (*(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar13 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9 <=
      *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9) {
    if (puVar10 == puVar13) {
      return;
    }
    puVar10 = param_1 + 2;
    while (*(uint *)((uVar11 | *(uint *)(lVar1 + (int)((puVar10[-1] & 0x7ffffffe) * 2 + 0x14))) + 7)
           >> 9 <= *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14)))
                            + 7) >> 9) {
      puVar10 = puVar10 + 1;
      if (param_2 == puVar10) {
        return;
      }
    }
    uVar9 = puVar10[-1];
    puVar10[-1] = *puVar13;
    *puVar13 = uVar9;
  }
  puVar12 = puVar13;
  if (puVar10 == puVar13) {
    return;
  }
  while( true ) {
    uVar11 = *param_3 & 0xffffffff00000000;
    lVar1 = *param_3 + 7;
    do {
      puVar14 = puVar10;
      puVar10 = puVar14 + 1;
    } while (*(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar14 & 0x7ffffffe) * 2 + 0x14))) + 7)
             >> 9 <= *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14)
                                                  )) + 7) >> 9);
    do {
      puVar15 = puVar12 + -1;
      puVar12 = puVar12 + -1;
    } while (*(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14))) + 7)
             >> 9 < *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar15 & 0x7ffffffe) * 2 + 0x14))
                              ) + 7) >> 9);
    if (puVar12 <= puVar14) break;
    uVar9 = *puVar14;
    *puVar14 = *puVar12;
    *puVar12 = uVar9;
  }
  goto LAB_0111f2ac;
code_r0x0111f3c4:
  uVar4 = *param_1;
  uVar9 = uVar9 + 1;
  *param_1 = *puVar10;
  *puVar10 = uVar4;
LAB_0111f3dc:
  puVar12 = param_1 + 1;
  puVar15 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      uVar11 = *param_3 & 0xffffffff00000000;
      lVar1 = *param_3 + 7;
      puVar12 = puVar15 + -1;
      do {
        puVar15 = puVar12;
        puVar12 = puVar15 + 1;
      } while (*(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar12 & 0x7ffffffe) * 2 + 0x14))) + 7
                        ) >> 9 <
               *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar14 & 0x7ffffffe) * 2 + 0x14))) + 7
                        ) >> 9);
      puVar15 = puVar15 + 2;
      do {
        puVar3 = puVar10 + -1;
        puVar10 = puVar10 + -1;
      } while (*(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar14 & 0x7ffffffe) * 2 + 0x14))) + 7
                        ) >> 9 <=
               *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar3 & 0x7ffffffe) * 2 + 0x14))) + 7)
               >> 9);
      if (puVar10 < puVar12) break;
      uVar4 = *puVar12;
      uVar9 = uVar9 + 1;
      puVar3 = puVar10;
      if (puVar14 != puVar12) {
        puVar3 = puVar14;
      }
      *puVar12 = *puVar10;
      *puVar10 = uVar4;
      puVar14 = puVar3;
    }
  }
  if ((puVar12 != puVar14) &&
     (uVar11 = *param_3 & 0xffffffff00000000, lVar1 = *param_3 + 7,
     *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar14 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9 <
     *(uint *)((uVar11 | *(uint *)(lVar1 + (int)((*puVar12 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9)) {
    uVar4 = *puVar12;
    uVar9 = uVar9 + 1;
    *puVar12 = *puVar14;
    *puVar14 = uVar4;
  }
  if (uVar9 == 0) {
    bVar7 = __insertion_sort_incomplete<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
                      (param_1,puVar12,param_3);
    bVar8 = __insertion_sort_incomplete<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
                      (puVar12 + 1,param_2,param_3);
    if (bVar8) goto LAB_0111f72c;
    puVar14 = puVar12 + 1;
    if (bVar7) goto LAB_0111f2ac;
  }
  iVar5 = (int)puVar12 - (int)param_1;
  iVar6 = (int)param_2 - (int)puVar12;
  iVar2 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  iVar5 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  if (iVar5 >> 2 <= iVar2 >> 2) {
    __sort<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
              (puVar12 + 1,param_2,param_3);
    param_2 = puVar12;
    goto LAB_0111f2a0;
  }
  __sort<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
            (param_1,puVar12,param_3);
  puVar14 = puVar12 + 1;
  goto LAB_0111f2ac;
LAB_0111f72c:
  param_2 = puVar12;
  if (bVar7) {
switchD_0111f74c_caseD_0:
    return;
  }
  goto LAB_0111f2a0;
}

