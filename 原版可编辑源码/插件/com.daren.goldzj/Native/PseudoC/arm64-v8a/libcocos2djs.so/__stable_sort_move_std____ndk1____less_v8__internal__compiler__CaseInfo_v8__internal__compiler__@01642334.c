
/* void std::__ndk1::__stable_sort_move<std::__ndk1::__less<v8::internal::compiler::CaseInfo,
   v8::internal::compiler::CaseInfo>&, std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >(std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>,
   std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>,
   std::__ndk1::__less<v8::internal::compiler::CaseInfo, v8::internal::compiler::CaseInfo>&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >::value_type*) */

void std::__ndk1::
     __stable_sort_move<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
               undefined8 *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      if (*(int *)((long)param_2 + -0xc) < *(int *)((long)param_1 + 4)) {
        uVar9 = param_2[-2];
        param_5[1] = param_2[-1];
        *param_5 = uVar9;
        uVar9 = *param_1;
        param_5[3] = param_1[1];
        param_5[2] = uVar9;
      }
      else {
        uVar9 = *param_1;
        param_5[1] = param_1[1];
        *param_5 = uVar9;
        uVar9 = param_2[-2];
        param_5[3] = param_2[-1];
        param_5[2] = uVar9;
      }
    }
    else if (param_4 == 1) {
      uVar9 = *param_1;
      param_5[1] = param_1[1];
      *param_5 = uVar9;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        uVar9 = *param_1;
        param_5[1] = param_1[1];
        *param_5 = uVar9;
        if (param_1 + 2 != param_2) {
          lVar1 = 0;
          puVar3 = param_5;
          puVar2 = param_1 + 2;
          do {
            puVar5 = puVar2;
            puVar2 = puVar3 + 2;
            puVar7 = puVar2;
            if (*(int *)((long)param_1 + 0x14) < *(int *)((long)puVar3 + 4)) {
              puVar3[3] = puVar3[1];
              *puVar2 = *puVar3;
              puVar7 = param_5;
              if (puVar3 != param_5) {
                lVar6 = 0;
                do {
                  puVar7 = (undefined8 *)((long)puVar3 + lVar6);
                  if (*(int *)((long)puVar7 + -0xc) <= *(int *)((long)param_1 + 0x14)) break;
                  lVar6 = lVar6 + -0x10;
                  puVar7[1] = puVar7[-1];
                  *puVar7 = puVar7[-2];
                  puVar7 = param_5;
                } while (lVar1 != lVar6);
              }
            }
            uVar9 = *puVar5;
            lVar1 = lVar1 + -0x10;
            puVar7[1] = puVar5[1];
            *puVar7 = uVar9;
            puVar3 = puVar2;
            puVar2 = puVar5 + 2;
            param_1 = puVar5;
          } while (puVar5 + 2 != param_2);
        }
      }
    }
    else {
      uVar8 = param_4 >> 1;
      puVar3 = param_1 + uVar8 * 2;
      __stable_sort<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                (param_1,puVar3,param_3,uVar8,param_5,uVar8);
      __stable_sort<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                (puVar3,param_2,param_3,param_4 - uVar8,param_5 + uVar8 * 2,param_4 - uVar8);
      puVar2 = puVar3;
      puVar7 = param_5;
      puVar5 = param_1;
      if (uVar8 != 0) {
        do {
          if (puVar2 == param_2) {
            if (puVar5 == puVar3) {
              return;
            }
            lVar1 = 0;
            do {
              uVar9 = *(undefined8 *)((long)puVar5 + lVar1);
              ((undefined8 *)((long)puVar7 + lVar1))[1] = ((undefined8 *)((long)puVar5 + lVar1))[1];
              *(undefined8 *)((long)puVar7 + lVar1) = uVar9;
              lVar1 = lVar1 + 0x10;
            } while ((long)param_1 + (uVar8 * 0x10 - (long)puVar5) != lVar1);
            return;
          }
          if (*(int *)((long)puVar2 + 4) < *(int *)((long)puVar5 + 4)) {
            uVar10 = puVar2[1];
            uVar9 = *puVar2;
            puVar2 = puVar2 + 2;
            puVar4 = puVar5;
          }
          else {
            puVar4 = puVar5 + 2;
            uVar10 = puVar5[1];
            uVar9 = *puVar5;
          }
          param_5 = puVar7 + 2;
          puVar7[1] = uVar10;
          *puVar7 = uVar9;
          puVar7 = param_5;
          puVar5 = puVar4;
        } while (puVar4 != puVar3);
      }
      for (; puVar2 != param_2; puVar2 = puVar2 + 2) {
        uVar9 = *puVar2;
        param_5[1] = puVar2[1];
        *param_5 = uVar9;
        param_5 = param_5 + 2;
      }
    }
  }
  return;
}

