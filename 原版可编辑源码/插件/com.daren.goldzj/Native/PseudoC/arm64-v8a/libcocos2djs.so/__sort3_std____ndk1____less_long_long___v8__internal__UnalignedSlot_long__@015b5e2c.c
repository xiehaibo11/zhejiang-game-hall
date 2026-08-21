
/* unsigned int std::__ndk1::__sort3<std::__ndk1::__less<long, long>&,
   v8::internal::UnalignedSlot<long> >(v8::internal::UnalignedSlot<long>,
   v8::internal::UnalignedSlot<long>, v8::internal::UnalignedSlot<long>, std::__ndk1::__less<long,
   long>&) */

uint std::__ndk1::__sort3<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
               (long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  lVar1 = *param_1;
  lVar3 = *param_3;
  if (lVar2 < lVar1) {
    if (lVar3 < lVar2) {
      *param_1 = lVar3;
      *param_3 = lVar1;
      return 1;
    }
    *param_1 = lVar2;
    *param_2 = lVar1;
    if (*param_3 < lVar1) {
      *param_2 = *param_3;
      *param_3 = lVar1;
      return 2;
    }
  }
  else {
    if (lVar2 <= lVar3) {
      return 0;
    }
    *param_2 = lVar3;
    *param_3 = lVar2;
    lVar1 = *param_1;
    if (*param_2 < lVar1) {
      *param_1 = *param_2;
      *param_2 = lVar1;
      return 2;
    }
  }
  return 1;
}

