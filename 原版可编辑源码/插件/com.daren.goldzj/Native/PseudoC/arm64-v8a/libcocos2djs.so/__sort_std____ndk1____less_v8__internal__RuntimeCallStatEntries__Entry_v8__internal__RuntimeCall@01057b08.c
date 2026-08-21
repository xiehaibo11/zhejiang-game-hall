
/* void std::__ndk1::__sort<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,
   v8::internal::RuntimeCallStatEntries::Entry>&,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   > 
   >(std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   >, std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,
   v8::internal::RuntimeCallStatEntries::Entry>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
LAB_01057b44:
  puVar15 = param_4 + 5;
  puVar17 = param_2;
LAB_01057b54:
  param_2 = puVar17;
  lVar7 = (long)param_2 - (long)param_4;
  uVar5 = (lVar7 >> 3) * -0x3333333333333333;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_0105802c_caseD_0;
  case 2:
    if ((long)param_2[-4] <= (long)param_4[1]) {
      if ((long)param_2[-4] < (long)param_4[1]) {
        return;
      }
      if ((ulong)param_2[-3] <= (ulong)param_4[2]) {
        return;
      }
    }
    uVar8 = param_2[-1];
    uVar23 = param_2[-4];
    uVar21 = param_2[-5];
    uVar20 = param_2[-2];
    uVar18 = param_2[-3];
    uVar19 = *param_4;
    uVar24 = param_4[3];
    uVar22 = param_4[2];
    uVar9 = param_4[4];
    param_2[-4] = param_4[1];
    param_2[-5] = uVar19;
    param_2[-2] = uVar24;
    param_2[-3] = uVar22;
    param_2[-1] = uVar9;
    param_4[1] = uVar23;
    *param_4 = uVar21;
    param_4[3] = uVar20;
    param_4[2] = uVar18;
    param_4[4] = uVar8;
    return;
  case 3:
    __sort3<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
              (param_1,param_2,param_2 + -5,param_2 + -5,param_3,param_4 + 5,param_5);
    return;
  case 4:
    __sort4<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
              (param_1,param_2,param_2 + -5,param_2 + -5,param_2 + -10,param_2 + -10,param_3,
               param_4 + 5,param_5);
    return;
  case 5:
    FUN_010585c0(param_1,param_2,param_2 + -5,param_2 + -5,param_2 + -10,param_2 + -10,
                 param_2 + -0xf,param_2 + -0xf,param_3,param_4 + 5,param_5);
    goto switchD_0105802c_caseD_0;
  }
  if (lVar7 < 0x4d8) {
    puVar15 = param_2 + -10;
    __sort3<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
              (param_1,param_2,param_2 + -5,param_2 + -5,puVar15,puVar15,param_5);
    if (param_2 + -0xf == param_4) {
      return;
    }
    lVar7 = 0;
    puVar17 = param_2 + -0xf;
    goto LAB_010580e8;
  }
  puVar17 = param_2 + (uVar5 >> 1) * -5;
  if (lVar7 < 0x9c19) {
    uVar4 = __sort3<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
                      (param_1,param_2,param_1,puVar17,param_3,puVar15,param_5);
  }
  else {
    uVar4 = FUN_010585c0(param_1,param_2,param_2 + (uVar5 >> 2) * -5,param_2 + (uVar5 >> 2) * -5,
                         param_1,puVar17,puVar17 + (uVar5 >> 2) * -5,puVar17 + (uVar5 >> 2) * -5,
                         param_3,puVar15,param_5);
  }
  lVar7 = param_2[-4];
  lVar10 = puVar17[-4];
  puVar12 = param_2 + -5;
  puVar6 = puVar15;
  if ((lVar10 <= lVar7) &&
     ((puVar16 = param_4 + 10, lVar10 < lVar7 || ((ulong)puVar17[-3] <= (ulong)param_2[-3])))) {
    for (; puVar16 != param_2; puVar16 = puVar16 + 5) {
      if (((long)puVar16[-4] < lVar10) ||
         (((long)puVar16[-4] <= lVar10 && ((ulong)puVar16[-3] < (ulong)puVar17[-3])))) {
        uVar8 = param_2[-1];
        uVar23 = param_2[-4];
        uVar21 = *puVar12;
        uVar20 = param_2[-2];
        uVar18 = param_2[-3];
        uVar4 = uVar4 + 1;
        uVar19 = puVar16[-5];
        uVar24 = puVar16[-2];
        uVar22 = puVar16[-3];
        uVar9 = puVar16[-1];
        param_2[-4] = puVar16[-4];
        *puVar12 = uVar19;
        param_2[-2] = uVar24;
        param_2[-3] = uVar22;
        param_2[-1] = uVar9;
        puVar16[-2] = uVar20;
        puVar16[-3] = uVar18;
        puVar16[-1] = uVar8;
        puVar16[-4] = uVar23;
        puVar16[-5] = uVar21;
        puVar6 = puVar16;
        goto joined_r0x01057ca8;
      }
    }
    if (((long)param_4[1] <= lVar7) &&
       (((long)param_4[1] < lVar7 || ((ulong)param_4[2] <= (ulong)param_2[-3])))) {
      if (puVar12 == puVar15) {
        return;
      }
      puVar12 = param_2 + -10;
      while (((long)puVar12[1] <= lVar7 &&
             (((long)puVar12[1] < lVar7 || ((ulong)puVar12[2] <= (ulong)param_2[-3]))))) {
        puVar12 = puVar12 + -5;
        if (param_4 == puVar12) {
          return;
        }
      }
      uVar8 = puVar12[4];
      uVar23 = puVar12[1];
      uVar21 = *puVar12;
      uVar20 = puVar12[3];
      uVar18 = puVar12[2];
      uVar19 = *param_4;
      uVar24 = param_4[3];
      uVar22 = param_4[2];
      uVar9 = param_4[4];
      puVar12[1] = param_4[1];
      *puVar12 = uVar19;
      puVar12[3] = uVar24;
      puVar12[2] = uVar22;
      puVar12[4] = uVar9;
      param_4[1] = uVar23;
      *param_4 = uVar21;
      param_4[3] = uVar20;
      param_4[2] = uVar18;
      param_4[4] = uVar8;
    }
    if (puVar15 == puVar12) {
      return;
    }
    do {
      lVar7 = param_2[-4];
      lVar10 = puVar12[-4];
      puVar16 = puVar12;
      if (lVar7 < lVar10) {
        puVar11 = puVar12 + -5;
        puVar17 = puVar12;
      }
      else {
        do {
          puVar12 = puVar16;
          puVar16 = puVar12 + -5;
          if ((lVar7 <= lVar10) &&
             (puVar11 = puVar16, puVar17 = puVar12, (ulong)param_2[-3] < (ulong)puVar12[-3]))
          goto LAB_01057f78;
          lVar10 = puVar12[-9];
        } while (lVar10 <= lVar7);
        puVar11 = puVar12 + -10;
        puVar12 = puVar16;
        puVar17 = puVar16;
      }
LAB_01057f78:
      do {
        do {
          puVar16 = puVar6;
          puVar6 = puVar16 + 5;
        } while (lVar7 < (long)puVar16[1]);
      } while ((lVar7 <= (long)puVar16[1]) && ((ulong)param_2[-3] < (ulong)puVar16[2]));
      if (puVar12 <= puVar6) goto LAB_01057b54;
      uVar8 = puVar11[4];
      uVar23 = puVar11[1];
      uVar21 = *puVar11;
      uVar20 = puVar11[3];
      uVar18 = puVar11[2];
      uVar19 = *puVar16;
      uVar24 = puVar16[3];
      uVar22 = puVar16[2];
      uVar9 = puVar16[4];
      puVar11[1] = puVar16[1];
      *puVar11 = uVar19;
      puVar11[3] = uVar24;
      puVar11[2] = uVar22;
      puVar11[4] = uVar9;
      puVar16[3] = uVar20;
      puVar16[2] = uVar18;
      puVar16[4] = uVar8;
      puVar16[1] = uVar23;
      *puVar16 = uVar21;
      puVar12 = puVar11;
    } while( true );
  }
joined_r0x01057ca8:
  puVar16 = puVar12;
  if (puVar6 < puVar12) {
    do {
      lVar7 = puVar17[-4];
      do {
        do {
          puVar16 = puVar12;
          puVar12 = puVar16 + -5;
        } while ((long)puVar16[-4] < lVar7);
      } while (((long)puVar16[-4] <= lVar7) && ((ulong)puVar16[-3] < (ulong)puVar17[-3]));
      lVar10 = puVar6[1];
      puVar11 = puVar6;
      while (puVar6 = puVar11 + 5, lVar7 <= lVar10) {
        if ((lVar10 <= lVar7) && ((ulong)puVar6[-3] < (ulong)puVar17[-3])) {
          puVar11 = puVar6 + -5;
          break;
        }
        puVar11 = puVar6;
        lVar10 = puVar6[1];
      }
      if (puVar16 < puVar6) break;
      uVar8 = puVar16[-1];
      uVar23 = puVar16[-4];
      uVar21 = *puVar12;
      uVar20 = puVar16[-2];
      uVar18 = puVar16[-3];
      uVar4 = uVar4 + 1;
      uVar19 = *puVar11;
      uVar24 = puVar11[3];
      uVar22 = puVar11[2];
      uVar9 = puVar11[4];
      puVar1 = puVar6;
      if (puVar17 != puVar16) {
        puVar1 = puVar17;
      }
      puVar16[-4] = puVar11[1];
      *puVar12 = uVar19;
      puVar16[-2] = uVar24;
      puVar16[-3] = uVar22;
      puVar16[-1] = uVar9;
      puVar11[1] = uVar23;
      *puVar11 = uVar21;
      puVar11[3] = uVar20;
      puVar11[2] = uVar18;
      puVar11[4] = uVar8;
      puVar17 = puVar1;
    } while( true );
  }
  if (puVar17 == puVar16) {
LAB_01057dfc:
    if (uVar4 == 0) {
LAB_01057e00:
      bVar2 = __insertion_sort_incomplete<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
                        (param_1,param_2,param_1,puVar16,param_5);
      puVar17 = puVar16 + -5;
      bVar3 = __insertion_sort_incomplete<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
                        (puVar17,puVar17,param_3,param_4,param_5);
      if (bVar3) goto LAB_01058008;
      if (bVar2) goto LAB_01057b54;
    }
  }
  else {
    if (((long)puVar16[-4] <= (long)puVar17[-4]) &&
       (((long)puVar16[-4] < (long)puVar17[-4] || ((ulong)puVar16[-3] <= (ulong)puVar17[-3]))))
    goto LAB_01057dfc;
    uVar8 = puVar16[-1];
    uVar23 = puVar16[-4];
    uVar21 = puVar16[-5];
    uVar20 = puVar16[-2];
    uVar18 = puVar16[-3];
    uVar19 = puVar17[-5];
    uVar24 = puVar17[-2];
    uVar22 = puVar17[-3];
    uVar9 = puVar17[-1];
    puVar16[-4] = puVar17[-4];
    puVar16[-5] = uVar19;
    puVar16[-2] = uVar24;
    puVar16[-3] = uVar22;
    puVar16[-1] = uVar9;
    puVar17[-4] = uVar23;
    puVar17[-5] = uVar21;
    puVar17[-2] = uVar20;
    puVar17[-3] = uVar18;
    puVar17[-1] = uVar8;
    if (uVar4 == 0xffffffff) goto LAB_01057e00;
  }
  if (((long)puVar16 - (long)param_4 >> 3) * -0x3333333333333333 <=
      ((long)param_2 - (long)puVar16 >> 3) * -0x3333333333333333) {
    __sort<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
              (puVar16 + -5,puVar16 + -5,param_3,param_4,param_5);
    param_4 = puVar16;
    param_3 = param_1;
    goto LAB_01057b44;
  }
  __sort<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
            (param_1,param_2,param_1,puVar16,param_5);
  puVar17 = puVar16 + -5;
  goto LAB_01057b54;
LAB_010580e8:
  puVar6 = puVar17;
  lVar10 = puVar6[-4];
  puVar17 = puVar6 + -5;
  if (lVar10 < (long)puVar15[-4]) {
    uVar5 = puVar6[-3];
LAB_01058104:
    uVar19 = puVar6[-1];
    uVar9 = puVar6[-2];
    uVar8 = puVar6[-5];
    uVar20 = puVar15[-4];
    uVar18 = puVar15[-5];
    uVar22 = puVar15[-2];
    uVar21 = puVar15[-3];
    puVar6[-1] = puVar15[-1];
    puVar6[-4] = uVar20;
    *puVar17 = uVar18;
    puVar6[-2] = uVar22;
    puVar6[-3] = uVar21;
    lVar13 = lVar7;
    puVar12 = param_2;
    if (puVar15 != param_2) {
      do {
        lVar14 = *(long *)((long)param_2 + lVar13 + -0x48);
        if (lVar14 <= lVar10) {
          if (lVar14 < lVar10) {
            puVar12 = (undefined8 *)((long)param_2 + lVar13 + -0x50);
            break;
          }
          puVar12 = puVar15;
          if (*(ulong *)((long)param_2 + lVar13 + -0x40) <= uVar5) break;
        }
        lVar14 = lVar13 + 0x28;
        puVar15 = puVar15 + 5;
        *(undefined8 *)((long)param_2 + lVar13 + -0x70) =
             *(undefined8 *)((long)param_2 + lVar13 + -0x48);
        *(undefined8 *)((long)param_2 + lVar13 + -0x78) =
             *(undefined8 *)((long)param_2 + lVar13 + -0x50);
        *(undefined8 *)((long)param_2 + lVar13 + -0x60) =
             *(undefined8 *)((long)param_2 + lVar13 + -0x38);
        *(undefined8 *)((long)param_2 + lVar13 + -0x68) =
             *(undefined8 *)((long)param_2 + lVar13 + -0x40);
        *(undefined8 *)((long)param_2 + lVar13 + -0x58) =
             *(undefined8 *)((long)param_2 + lVar13 + -0x30);
        lVar13 = lVar14;
        puVar12 = param_2;
      } while (lVar14 != 0x50);
    }
    puVar12[-5] = uVar8;
    puVar12[-4] = lVar10;
    puVar12[-3] = uVar5;
    puVar12[-1] = uVar19;
    puVar12[-2] = uVar9;
  }
  else if ((lVar10 <= (long)puVar15[-4]) && (uVar5 = puVar6[-3], uVar5 < (ulong)puVar15[-3]))
  goto LAB_01058104;
  lVar7 = lVar7 + -0x28;
  puVar15 = puVar6;
  if (puVar17 == param_4) {
switchD_0105802c_caseD_0:
    return;
  }
  goto LAB_010580e8;
LAB_01058008:
  param_4 = puVar16;
  param_3 = param_1;
  if (bVar2) {
    return;
  }
  goto LAB_01057b44;
}

