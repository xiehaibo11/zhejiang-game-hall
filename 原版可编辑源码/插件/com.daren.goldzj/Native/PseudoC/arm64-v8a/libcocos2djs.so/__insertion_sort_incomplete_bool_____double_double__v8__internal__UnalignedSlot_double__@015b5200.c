
/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(double, double),
   v8::internal::UnalignedSlot<double> >(v8::internal::UnalignedSlot<double>,
   v8::internal::UnalignedSlot<double>, bool (*&)(double, double)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  
  switch((ulong)(long)((int)param_2 - (int)param_1) >> 3 & 0xffffffff) {
  case 0:
  case 1:
    break;
  case 2:
    uVar4 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar4 & 1) != 0) {
      uVar10 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar10;
      return true;
    }
    break;
  case 3:
    __sort3<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
              (param_1,param_1 + 1,param_2 + -1,param_3);
    return true;
  case 4:
    __sort4<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    return true;
  case 5:
    FUN_015b5028(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    uVar3 = __sort3<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
                      (param_1,param_1 + 1,param_1 + 2,param_3);
    uVar4 = (ulong)uVar3;
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      puVar5 = param_1 + 2;
      puVar7 = param_1 + 3;
      do {
        uVar4 = (*(code *)*param_3)(*puVar7,*puVar5,uVar4);
        if ((uVar4 & 1) != 0) {
          uVar10 = *puVar7;
          lVar2 = lVar8;
          do {
            lVar6 = lVar2;
            *(undefined8 *)((long)param_1 + lVar6 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar6 + 0x10);
            puVar5 = param_1;
            if (lVar6 == -0x10) goto LAB_015b52bc;
            uVar4 = (*(code *)*param_3)(uVar10,*(undefined8 *)((long)param_1 + lVar6 + 8));
            lVar2 = lVar6 + -8;
          } while ((uVar4 & 1) != 0);
          puVar5 = (undefined8 *)((long)param_1 + lVar6 + 0x10);
LAB_015b52bc:
          iVar9 = iVar9 + 1;
          *puVar5 = uVar10;
          if (iVar9 == 8) {
            return puVar7 + 1 == param_2;
          }
        }
        puVar1 = puVar7 + 1;
        lVar8 = lVar8 + 8;
        puVar5 = puVar7;
        puVar7 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  return true;
}

