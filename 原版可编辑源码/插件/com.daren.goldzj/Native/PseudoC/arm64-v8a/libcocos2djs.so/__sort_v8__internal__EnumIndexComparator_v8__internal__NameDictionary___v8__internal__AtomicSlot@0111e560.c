
/* void std::__ndk1::__sort<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,
   v8::internal::AtomicSlot>(v8::internal::AtomicSlot, v8::internal::AtomicSlot,
   v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&) */

void std::__ndk1::
     __sort<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
               (uint *param_1,uint *param_2,long *param_3)

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
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  
LAB_0111e590:
  puVar12 = param_2 + -1;
  puVar13 = param_1;
LAB_0111e59c:
  param_1 = puVar13;
  iVar5 = (int)param_2 - (int)param_1;
  iVar2 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  uVar9 = iVar2 >> 2;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_0111e99c_caseD_0;
  case 2:
    if (*(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 *param_3 + 7) >> 9 <=
        *(uint *)((((long)((ulong)param_2[-1] << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20
                  ) + *param_3 + 7) >> 9) {
      return;
    }
    uVar9 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar9;
    return;
  case 3:
    __sort3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,puVar12,param_3);
    return;
  case 4:
    __sort4<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,param_1 + 2,puVar12,param_3);
    return;
  case 5:
    FUN_0111ed94(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar12,param_3);
    return;
  default:
    if (iVar5 < 0x7c) {
      __insertion_sort_3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
                (param_1,param_2,param_3);
      return;
    }
    puVar13 = param_1 + (uVar9 >> 1);
    if (iVar5 < 4000) {
      uVar9 = __sort3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
                        (param_1,puVar13,puVar12,param_3);
    }
    else {
      uVar9 = FUN_0111ed94(param_1,(long)param_1 + (ulong)(uVar9 & 0xfffffffc),puVar13,
                           (long)puVar13 + (ulong)(uVar9 & 0xfffffffc),puVar12,param_3);
    }
    lVar1 = *param_3 + 7;
    puVar10 = puVar12;
    puVar11 = param_2 + -2;
    if (*(uint *)((((long)((ulong)*puVar13 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 lVar1) >> 9 <=
        *(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 lVar1) >> 9) break;
    goto LAB_0111e6a8;
  }
  while (puVar10 = puVar11, param_1 != puVar10) {
    puVar11 = puVar10 + -1;
    if (*(uint *)((((long)((ulong)*puVar10 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 lVar1) >> 9 <
        *(uint *)((((long)((ulong)*puVar13 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 lVar1) >> 9) goto code_r0x0111e690;
  }
  puVar10 = param_1 + 1;
  if (*(uint *)((((long)((ulong)*puVar12 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
               lVar1) >> 9 <=
      *(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
               lVar1) >> 9) {
    if (puVar10 == puVar12) {
      return;
    }
    puVar10 = param_1 + 2;
    while (*(uint *)((((long)((ulong)puVar10[-1] << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                     0x20) + lVar1) >> 9 <=
           *(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20
                     ) + lVar1) >> 9) {
      puVar10 = puVar10 + 1;
      if (param_2 == puVar10) {
        return;
      }
    }
    uVar9 = puVar10[-1];
    puVar10[-1] = *puVar12;
    *puVar12 = uVar9;
  }
  puVar11 = puVar12;
  if (puVar10 == puVar12) {
    return;
  }
  while( true ) {
    lVar1 = *param_3 + 7;
    do {
      puVar13 = puVar10;
      puVar10 = puVar13 + 1;
    } while (*(uint *)((((long)((ulong)*puVar13 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                       0x20) + lVar1) >> 9 <=
             *(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                       0x20) + lVar1) >> 9);
    do {
      puVar14 = puVar11 + -1;
      puVar11 = puVar11 + -1;
    } while (*(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                       0x20) + lVar1) >> 9 <
             *(uint *)((((long)((ulong)*puVar14 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                       0x20) + lVar1) >> 9);
    if (puVar11 <= puVar13) break;
    uVar9 = *puVar13;
    *puVar13 = *puVar11;
    *puVar11 = uVar9;
  }
  goto LAB_0111e59c;
code_r0x0111e690:
  uVar4 = *param_1;
  uVar9 = uVar9 + 1;
  *param_1 = *puVar10;
  *puVar10 = uVar4;
LAB_0111e6a8:
  puVar11 = param_1 + 1;
  puVar14 = puVar11;
  if (puVar11 < puVar10) {
    while( true ) {
      lVar1 = *param_3 + 7;
      puVar11 = puVar14 + -1;
      do {
        puVar14 = puVar11;
        puVar11 = puVar14 + 1;
      } while (*(uint *)((((long)((ulong)*puVar11 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                         0x20) + lVar1) >> 9 <
               *(uint *)((((long)((ulong)*puVar13 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                         0x20) + lVar1) >> 9);
      puVar14 = puVar14 + 2;
      do {
        puVar3 = puVar10 + -1;
        puVar10 = puVar10 + -1;
      } while (*(uint *)((((long)((ulong)*puVar13 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                         0x20) + lVar1) >> 9 <=
               *(uint *)((((long)((ulong)*puVar3 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                         0x20) + lVar1) >> 9);
      if (puVar10 < puVar11) break;
      uVar4 = *puVar11;
      uVar9 = uVar9 + 1;
      puVar3 = puVar10;
      if (puVar13 != puVar11) {
        puVar3 = puVar13;
      }
      *puVar11 = *puVar10;
      *puVar10 = uVar4;
      puVar13 = puVar3;
    }
  }
  if ((puVar11 != puVar13) &&
     (*(uint *)((((long)((ulong)*puVar13 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
               *param_3 + 7) >> 9 <
      *(uint *)((((long)((ulong)*puVar11 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
               *param_3 + 7) >> 9)) {
    uVar4 = *puVar11;
    uVar9 = uVar9 + 1;
    *puVar11 = *puVar13;
    *puVar13 = uVar4;
  }
  if (uVar9 == 0) {
    bVar7 = __insertion_sort_incomplete<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
                      (param_1,puVar11,param_3);
    bVar8 = __insertion_sort_incomplete<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
                      (puVar11 + 1,param_2,param_3);
    if (bVar8) goto LAB_0111e97c;
    puVar13 = puVar11 + 1;
    if (bVar7) goto LAB_0111e59c;
  }
  iVar5 = (int)puVar11 - (int)param_1;
  iVar6 = (int)param_2 - (int)puVar11;
  iVar2 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  iVar5 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  if (iVar5 >> 2 <= iVar2 >> 2) {
    __sort<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
              (puVar11 + 1,param_2,param_3);
    param_2 = puVar11;
    goto LAB_0111e590;
  }
  __sort<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
            (param_1,puVar11,param_3);
  puVar13 = puVar11 + 1;
  goto LAB_0111e59c;
LAB_0111e97c:
  param_2 = puVar11;
  if (bVar7) {
switchD_0111e99c_caseD_0:
    return;
  }
  goto LAB_0111e590;
}

