
/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<long, long>&,
   v8::internal::UnalignedSlot<long> >(v8::internal::UnalignedSlot<long>,
   v8::internal::UnalignedSlot<long>, v8::internal::UnalignedSlot<long>,
   v8::internal::UnalignedSlot<long>, std::__ndk1::__less<long, long>&) */

uint std::__ndk1::__sort4<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
               (long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = __sort3<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>();
  lVar2 = *param_3;
  if (*param_4 < lVar2) {
    *param_3 = *param_4;
    *param_4 = lVar2;
    lVar2 = *param_2;
    if (*param_3 < lVar2) {
      *param_2 = *param_3;
      *param_3 = lVar2;
      lVar2 = *param_1;
      if (*param_2 < lVar2) {
        uVar1 = uVar1 + 3;
        *param_1 = *param_2;
        *param_2 = lVar2;
      }
      else {
        uVar1 = uVar1 + 2;
      }
    }
    else {
      uVar1 = uVar1 + 1;
    }
  }
  return uVar1;
}

