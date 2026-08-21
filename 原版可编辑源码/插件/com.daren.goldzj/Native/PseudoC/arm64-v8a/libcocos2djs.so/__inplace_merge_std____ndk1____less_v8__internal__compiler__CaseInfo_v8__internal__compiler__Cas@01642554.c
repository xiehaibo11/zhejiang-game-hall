
/* void std::__ndk1::__inplace_merge<std::__ndk1::__less<v8::internal::compiler::CaseInfo,
   v8::internal::compiler::CaseInfo>&, std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >(std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>,
   std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>,
   std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>,
   std::__ndk1::__less<v8::internal::compiler::CaseInfo, v8::internal::compiler::CaseInfo>&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >::value_type*, long) */

void std::__ndk1::
     __inplace_merge<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               long param_5,long param_6,undefined8 *param_7,long param_8)

{
  size_t sVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  while( true ) {
    if (param_6 == 0) {
      return;
    }
    if ((param_6 <= param_8) || (param_5 <= param_8)) break;
    if (param_5 == 0) {
      return;
    }
    lVar17 = -param_5;
    while (*(int *)((long)param_1 + 4) <= *(int *)((long)param_2 + 4)) {
      bVar2 = lVar17 == -1;
      lVar17 = lVar17 + 1;
      param_1 = param_1 + 2;
      if (bVar2) {
        return;
      }
    }
    param_5 = -lVar17;
    if (param_5 < param_6) {
      lVar16 = param_6;
      if (param_6 < 0) {
        lVar16 = param_6 + 1;
      }
      lVar16 = lVar16 >> 1;
      puVar18 = param_2 + lVar16 * 2;
      puVar9 = param_1;
      if ((long)param_2 - (long)param_1 != 0) {
        uVar5 = (long)param_2 - (long)param_1 >> 4;
        do {
          uVar10 = uVar5 >> 1;
          uVar11 = uVar5 + ~uVar10;
          uVar5 = uVar10;
          if (*(int *)((long)puVar9 + uVar10 * 0x10 + 4) <= *(int *)((long)puVar18 + 4)) {
            puVar9 = puVar9 + uVar10 * 2 + 2;
            uVar5 = uVar11;
          }
        } while (uVar5 != 0);
      }
      param_5 = (long)puVar9 - (long)param_1 >> 4;
    }
    else {
      if (lVar17 == -1) {
        uVar21 = param_1[1];
        uVar19 = *param_1;
        uVar20 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar20;
        param_2[1] = uVar21;
        *param_2 = uVar19;
        return;
      }
      if (param_5 < 0) {
        param_5 = param_5 + 1;
      }
      param_5 = param_5 >> 1;
      puVar9 = param_1 + param_5 * 2;
      puVar18 = param_2;
      if ((long)param_3 - (long)param_2 != 0) {
        uVar5 = (long)param_3 - (long)param_2 >> 4;
        puVar12 = param_2;
        do {
          uVar11 = uVar5 >> 1;
          puVar18 = puVar12 + uVar11 * 2 + 2;
          uVar5 = uVar5 + ~uVar11;
          if (*(int *)((long)puVar9 + 4) <= *(int *)((long)puVar12 + uVar11 * 0x10 + 4)) {
            puVar18 = puVar12;
            uVar5 = uVar11;
          }
          puVar12 = puVar18;
        } while (uVar5 != 0);
      }
      lVar16 = (long)puVar18 - (long)param_2 >> 4;
    }
    puVar12 = puVar18;
    if ((puVar9 != param_2) && (puVar12 = puVar9, param_2 != puVar18)) {
      if (puVar9 + 2 == param_2) {
        uVar20 = puVar9[1];
        uVar19 = *puVar9;
        sVar1 = (long)puVar18 - (long)param_2;
        if (sVar1 != 0) {
          memmove(puVar9,param_2,sVar1);
        }
        puVar12 = puVar9 + ((long)sVar1 >> 4) * 2;
        puVar12[1] = uVar20;
        *puVar12 = uVar19;
      }
      else if (param_2 + 2 == puVar18) {
        uVar20 = puVar18[-1];
        uVar19 = puVar18[-2];
        sVar1 = (long)puVar18 + (-0x10 - (long)puVar9);
        puVar12 = puVar18;
        if (sVar1 != 0) {
          memmove((undefined8 *)((long)puVar18 - sVar1),puVar9,sVar1);
          puVar12 = (undefined8 *)((long)puVar18 - sVar1);
        }
        puVar9[1] = uVar20;
        *puVar9 = uVar19;
      }
      else {
        lVar6 = (long)param_2 - (long)puVar9 >> 4;
        lVar3 = (long)puVar18 - (long)param_2 >> 4;
        puVar4 = param_2;
        puVar7 = puVar9;
        lVar15 = lVar6;
        lVar14 = lVar3;
        if (lVar6 == lVar3) {
          do {
            uVar21 = puVar7[1];
            uVar19 = *puVar7;
            uVar20 = *puVar4;
            puVar8 = puVar7 + 2;
            puVar7[1] = puVar4[1];
            *puVar7 = uVar20;
            puVar4[1] = uVar21;
            *puVar4 = uVar19;
            puVar4 = puVar4 + 2;
            puVar7 = puVar8;
            puVar12 = param_2;
          } while (param_2 != puVar8);
        }
        else {
          do {
            lVar13 = lVar14;
            lVar14 = 0;
            if (lVar13 != 0) {
              lVar14 = lVar15 / lVar13;
            }
            lVar14 = lVar15 - lVar14 * lVar13;
            lVar15 = lVar13;
          } while (lVar14 != 0);
          if (lVar13 != 0) {
            puVar12 = puVar9 + lVar13 * 2;
            do {
              uVar20 = puVar12[-1];
              uVar19 = puVar12[-2];
              puVar12 = puVar12 + -2;
              puVar7 = puVar12;
              puVar4 = puVar12 + lVar6 * 2;
              do {
                puVar8 = puVar4;
                uVar21 = *puVar8;
                lVar15 = (long)puVar18 - (long)puVar8 >> 4;
                puVar4 = puVar8 + lVar6 * 2;
                if (lVar15 <= lVar6) {
                  puVar4 = puVar9 + (lVar6 - lVar15) * 2;
                }
                puVar7[1] = puVar8[1];
                *puVar7 = uVar21;
                puVar7 = puVar8;
              } while (puVar4 != puVar12);
              puVar8[1] = uVar20;
              *puVar8 = uVar19;
            } while (puVar12 != puVar9);
          }
          puVar12 = puVar9 + lVar3 * 2;
        }
      }
    }
    if (param_5 + lVar16 < (param_6 - (param_5 + lVar16)) - lVar17) {
      __inplace_merge<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                (param_1,puVar9,puVar12,param_4,param_5,lVar16,param_7,param_8);
      param_6 = param_6 - lVar16;
      param_5 = -(param_5 + lVar17);
      param_2 = puVar18;
      param_1 = puVar12;
    }
    else {
      __inplace_merge<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                (puVar12,puVar18,param_3,param_4,-(param_5 + lVar17),param_6 - lVar16,param_7,
                 param_8);
      param_6 = lVar16;
      param_3 = puVar12;
      param_2 = puVar9;
    }
  }
  if (param_6 < param_5) {
    if (param_3 == param_2) {
      return;
    }
    lVar17 = 0;
    do {
      uVar19 = *(undefined8 *)((long)param_2 + lVar17);
      ((undefined8 *)((long)param_7 + lVar17))[1] = ((undefined8 *)((long)param_2 + lVar17))[1];
      *(undefined8 *)((long)param_7 + lVar17) = uVar19;
      lVar17 = lVar17 + 0x10;
    } while ((long)param_3 - (long)param_2 != lVar17);
    if (lVar17 != 0) {
      puVar18 = (undefined8 *)((long)param_7 + lVar17);
      do {
        param_3 = param_3 + -2;
        if (param_2 == param_1) {
          lVar17 = 0;
          do {
            puVar9 = (undefined8 *)((long)puVar18 + lVar17 + -0x10);
            uVar19 = *puVar9;
            ((undefined8 *)((long)param_3 + lVar17))[1] = puVar9[1];
            *(undefined8 *)((long)param_3 + lVar17) = uVar19;
            lVar17 = lVar17 + -0x10;
          } while ((long)param_7 - (long)puVar18 != lVar17);
          return;
        }
        if (*(int *)((long)puVar18 + -0xc) < *(int *)((long)param_2 + -0xc)) {
          uVar20 = param_2[-1];
          uVar19 = param_2[-2];
          puVar9 = puVar18;
          param_2 = param_2 + -2;
        }
        else {
          puVar9 = puVar18 + -2;
          uVar20 = puVar18[-1];
          uVar19 = *puVar9;
        }
        param_3[1] = uVar20;
        *param_3 = uVar19;
        puVar18 = puVar9;
      } while (puVar9 != param_7);
    }
  }
  else {
    if (param_1 == param_2) {
      return;
    }
    lVar17 = 0;
    do {
      uVar19 = *(undefined8 *)((long)param_1 + lVar17);
      ((undefined8 *)((long)param_7 + lVar17))[1] = ((undefined8 *)((long)param_1 + lVar17))[1];
      *(undefined8 *)((long)param_7 + lVar17) = uVar19;
      lVar17 = lVar17 + 0x10;
    } while ((long)param_2 - (long)param_1 != lVar17);
    if (lVar17 != 0) {
      puVar18 = param_7;
      do {
        if (param_2 == param_3) {
          sVar1 = (long)param_7 + (lVar17 - (long)puVar18);
          if (sVar1 == 0) {
            return;
          }
          memmove(param_1,puVar18,sVar1);
          return;
        }
        if (*(int *)((long)param_2 + 4) < *(int *)((long)puVar18 + 4)) {
          uVar20 = param_2[1];
          uVar19 = *param_2;
          puVar9 = puVar18;
          param_2 = param_2 + 2;
        }
        else {
          puVar9 = puVar18 + 2;
          uVar20 = puVar18[1];
          uVar19 = *puVar18;
        }
        param_1[1] = uVar20;
        *param_1 = uVar19;
        param_1 = param_1 + 2;
        puVar18 = puVar9;
      } while ((long)puVar9 - (long)param_7 != lVar17);
    }
  }
  return;
}

