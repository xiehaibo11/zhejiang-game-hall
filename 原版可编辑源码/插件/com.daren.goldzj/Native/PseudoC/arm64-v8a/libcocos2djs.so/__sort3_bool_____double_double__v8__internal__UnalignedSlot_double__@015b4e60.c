
/* unsigned int std::__ndk1::__sort3<bool (*&)(double, double), v8::internal::UnalignedSlot<double>
   >(v8::internal::UnalignedSlot<double>, v8::internal::UnalignedSlot<double>,
   v8::internal::UnalignedSlot<double>, bool (*&)(double, double)) */

uint std::__ndk1::__sort3<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)*param_4)(*param_2,*param_1);
  uVar2 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if ((uVar1 & 1) == 0) {
      return 1;
    }
    uVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar3;
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) != 0) {
      *param_1 = *param_3;
      *param_3 = uVar3;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = uVar3;
    uVar1 = (*(code *)*param_4)(*param_3,*param_2);
    if ((uVar1 & 1) == 0) {
      return 1;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
  }
  return 2;
}

