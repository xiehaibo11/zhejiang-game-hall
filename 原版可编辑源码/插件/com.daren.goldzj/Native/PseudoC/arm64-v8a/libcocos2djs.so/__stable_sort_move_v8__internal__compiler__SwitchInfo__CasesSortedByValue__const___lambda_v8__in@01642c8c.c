
/* void std::__ndk1::__stable_sort_move<v8::internal::compiler::SwitchInfo::CasesSortedByValue()
   const::{lambda(v8::internal::compiler::CaseInfo, v8::internal::compiler::CaseInfo)#1}&,
   std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >(std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>,
   std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>,
   v8::internal::compiler::SwitchInfo::CasesSortedByValue()
   const::{lambda(v8::internal::compiler::CaseInfo, v8::internal::compiler::CaseInfo)#1}&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>
   >::value_type*) */

void std::__ndk1::
     __stable_sort_move<v8::internal::compiler::SwitchInfo::CasesSortedByValue()const::_lambda(v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo)_1_&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
               (int *param_1,int *param_2,undefined8 param_3,ulong param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      piVar1 = param_2 + -4;
      if (*piVar1 < *param_1) {
        uVar9 = *(undefined8 *)piVar1;
        *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)param_5 = uVar9;
        uVar9 = *(undefined8 *)param_1;
        *(undefined8 *)(param_5 + 6) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_5 + 4) = uVar9;
      }
      else {
        uVar9 = *(undefined8 *)param_1;
        *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_5 = uVar9;
        uVar9 = *(undefined8 *)piVar1;
        *(undefined8 *)(param_5 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_5 + 4) = uVar9;
      }
    }
    else if (param_4 == 1) {
      uVar9 = *(undefined8 *)param_1;
      *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_5 = uVar9;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        uVar9 = *(undefined8 *)param_1;
        *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_5 = uVar9;
        if (param_1 + 4 != param_2) {
          lVar3 = 0;
          piVar1 = param_1 + 4;
          piVar2 = param_5;
          do {
            piVar5 = piVar2 + 4;
            piVar6 = piVar5;
            if (*piVar1 < *piVar2) {
              *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(piVar2 + 2);
              *(undefined8 *)piVar5 = *(undefined8 *)piVar2;
              piVar6 = param_5;
              if (piVar2 != param_5) {
                lVar7 = 0;
                do {
                  piVar6 = (int *)((long)piVar2 + lVar7);
                  if (piVar6[-4] <= *piVar1) break;
                  lVar7 = lVar7 + -0x10;
                  *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(piVar6 + -2);
                  *(undefined8 *)piVar6 = *(undefined8 *)(piVar6 + -4);
                  piVar6 = param_5;
                } while (lVar3 != lVar7);
              }
            }
            piVar4 = piVar1 + 4;
            uVar9 = *(undefined8 *)piVar1;
            lVar3 = lVar3 + -0x10;
            *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(piVar1 + 2);
            *(undefined8 *)piVar6 = uVar9;
            piVar1 = piVar4;
            piVar2 = piVar5;
          } while (piVar4 != param_2);
        }
      }
    }
    else {
      uVar8 = param_4 >> 1;
      piVar1 = param_1 + uVar8 * 4;
      __stable_sort<v8::internal::compiler::SwitchInfo::CasesSortedByValue()const::_lambda(v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo)_1_&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                (param_1,piVar1,param_3,uVar8,param_5,uVar8);
      __stable_sort<v8::internal::compiler::SwitchInfo::CasesSortedByValue()const::_lambda(v8::internal::compiler::CaseInfo,v8::internal::compiler::CaseInfo)_1_&,std::__ndk1::__wrap_iter<v8::internal::compiler::CaseInfo*>>
                (piVar1,param_2,param_3,param_4 - uVar8,param_5 + uVar8 * 4,param_4 - uVar8);
      piVar2 = piVar1;
      piVar6 = param_5;
      piVar5 = param_1;
      if (uVar8 != 0) {
        do {
          if (piVar2 == param_2) {
            if (piVar5 == piVar1) {
              return;
            }
            lVar3 = 0;
            do {
              uVar9 = *(undefined8 *)((long)piVar5 + lVar3);
              ((undefined8 *)((long)piVar6 + lVar3))[1] = ((undefined8 *)((long)piVar5 + lVar3))[1];
              *(undefined8 *)((long)piVar6 + lVar3) = uVar9;
              lVar3 = lVar3 + 0x10;
            } while ((long)param_1 + (uVar8 * 0x10 - (long)piVar5) != lVar3);
            return;
          }
          if (*piVar2 < *piVar5) {
            uVar10 = *(undefined8 *)(piVar2 + 2);
            uVar9 = *(undefined8 *)piVar2;
            piVar2 = piVar2 + 4;
            piVar4 = piVar5;
          }
          else {
            piVar4 = piVar5 + 4;
            uVar10 = *(undefined8 *)(piVar5 + 2);
            uVar9 = *(undefined8 *)piVar5;
          }
          param_5 = piVar6 + 4;
          *(undefined8 *)(piVar6 + 2) = uVar10;
          *(undefined8 *)piVar6 = uVar9;
          piVar6 = param_5;
          piVar5 = piVar4;
        } while (piVar4 != piVar1);
      }
      for (; piVar2 != param_2; piVar2 = piVar2 + 4) {
        uVar9 = *(undefined8 *)piVar2;
        *(undefined8 *)(param_5 + 2) = *(undefined8 *)(piVar2 + 2);
        *(undefined8 *)param_5 = uVar9;
        param_5 = param_5 + 4;
      }
    }
  }
  return;
}

