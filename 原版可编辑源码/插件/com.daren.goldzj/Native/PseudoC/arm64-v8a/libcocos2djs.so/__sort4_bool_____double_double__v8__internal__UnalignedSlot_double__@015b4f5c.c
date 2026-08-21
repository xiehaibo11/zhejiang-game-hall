
/* unsigned int std::__ndk1::__sort4<bool (*&)(double, double), v8::internal::UnalignedSlot<double>
   >(v8::internal::UnalignedSlot<double>, v8::internal::UnalignedSlot<double>,
   v8::internal::UnalignedSlot<double>, v8::internal::UnalignedSlot<double>, bool (*&)(double,
   double)) */

uint std::__ndk1::__sort4<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = __sort3<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>();
  uVar2 = (*(code *)*param_5)(*param_4,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar2 = (*(code *)*param_5)(*param_3,*param_2);
    if ((uVar2 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar2 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar1 + 2;
      }
      else {
        uVar3 = *param_1;
        uVar1 = uVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return uVar1;
}

