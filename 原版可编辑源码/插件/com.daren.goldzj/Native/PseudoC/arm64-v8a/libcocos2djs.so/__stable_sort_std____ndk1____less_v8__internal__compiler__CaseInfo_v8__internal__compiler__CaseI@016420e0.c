
/* void std::__ndk1::__stable_sort<std::__ndk1::__less<v8::internal::compiler::CaseInfo,
   v8::internal::compiler::CaseInfo>&, std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >(std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>,
   std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>,
   std::__ndk1::__less<v8::internal::compiler::CaseInfo, v8::internal::compiler::CaseInfo>&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >::value_type*, long) */

void std::__ndk1::
     __stable_sort<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
               undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      if (*(int *)((long)param_2 + -0xc) < *(int *)((long)param_1 + 4)) {
        uVar13 = param_1[1];
        uVar7 = *param_1;
        uVar12 = param_2[-2];
        param_1[1] = param_2[-1];
        *param_1 = uVar12;
        param_2[-1] = uVar13;
        param_2[-2] = uVar7;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 2 != param_2)) {
        lVar4 = 0;
        puVar5 = param_1;
        puVar8 = param_1 + 2;
        do {
          iVar2 = *(int *)((long)puVar5 + 0x14);
          uVar7 = puVar5[3];
          uVar3 = *(undefined4 *)puVar8;
          puVar5 = param_1;
          lVar9 = lVar4;
          if (puVar8 != param_1) {
            do {
              puVar1 = (undefined8 *)((long)param_1 + lVar9);
              if (*(int *)((long)puVar1 + 4) <= iVar2) {
                puVar5 = puVar1 + 2;
                break;
              }
              lVar9 = lVar9 + -0x10;
              puVar1[3] = puVar1[1];
              puVar1[2] = *puVar1;
            } while (lVar9 != -0x10);
          }
          *(undefined4 *)puVar5 = uVar3;
          *(int *)((long)puVar5 + 4) = iVar2;
          puVar1 = puVar8 + 2;
          lVar4 = lVar4 + 0x10;
          puVar5[1] = uVar7;
          puVar5 = puVar8;
          puVar8 = puVar1;
        } while (puVar1 != param_2);
      }
    }
    else {
      uVar11 = param_4 >> 1;
      puVar5 = param_1 + uVar11 * 2;
      if (param_6 < (long)param_4) {
        __stable_sort<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                  ();
        __stable_sort<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                  (puVar5,param_2,param_3,param_4 - uVar11,param_5,param_6);
        __inplace_merge<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                  (param_1,puVar5,param_2,param_3,uVar11,param_4 - uVar11,param_5,param_6);
        return;
      }
      __stable_sort_move<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                (param_1,puVar5,param_3,uVar11);
      puVar8 = param_5 + uVar11 * 2;
      __stable_sort_move<std::__ndk1::__less<v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo>&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                (puVar5,param_2,param_3,param_4 - uVar11,puVar8);
      puVar5 = puVar8;
      puVar1 = param_5;
      do {
        if (puVar5 == param_5 + param_4 * 2) {
          if (puVar1 == puVar8) {
            return;
          }
          lVar4 = 0;
          do {
            uVar7 = *(undefined8 *)((long)puVar1 + lVar4);
            ((undefined8 *)((long)param_1 + lVar4))[1] = ((undefined8 *)((long)puVar1 + lVar4))[1];
            *(undefined8 *)((long)param_1 + lVar4) = uVar7;
            lVar4 = lVar4 + 0x10;
          } while ((long)param_5 + (uVar11 * 0x10 - (long)puVar1) != lVar4);
          return;
        }
        if (*(int *)((long)puVar5 + 4) < *(int *)((long)puVar1 + 4)) {
          uVar12 = puVar5[1];
          uVar7 = *puVar5;
          puVar5 = puVar5 + 2;
          puVar6 = puVar1;
        }
        else {
          puVar6 = puVar1 + 2;
          uVar12 = puVar1[1];
          uVar7 = *puVar1;
        }
        puVar10 = param_1 + 2;
        param_1[1] = uVar12;
        *param_1 = uVar7;
        puVar1 = puVar6;
        param_1 = puVar10;
      } while (puVar6 != puVar8);
      if (puVar5 != param_5 + param_4 * 2) {
        lVar4 = 0;
        do {
          uVar7 = *(undefined8 *)((long)puVar5 + lVar4);
          puVar8 = (undefined8 *)((long)puVar10 + lVar4);
          puVar8[1] = ((undefined8 *)((long)puVar5 + lVar4))[1];
          *puVar8 = uVar7;
          lVar4 = lVar4 + 0x10;
        } while ((long)param_5 + (param_4 * 0x10 - (long)puVar5) != lVar4);
      }
    }
  }
  return;
}

