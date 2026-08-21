
/* unsigned int std::__ndk1::__sort3<std::__ndk1::__less<unsigned long, unsigned long>&,
   v8::internal::UnalignedSlot<unsigned long> >(v8::internal::UnalignedSlot<unsigned long>,
   v8::internal::UnalignedSlot<unsigned long>, v8::internal::UnalignedSlot<unsigned long>,
   std::__ndk1::__less<unsigned long, unsigned long>&) */

uint std::__ndk1::
     __sort3<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
               (ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar1 = *param_1;
  uVar3 = *param_3;
  if (uVar2 < uVar1) {
    if (uVar3 < uVar2) {
      *param_1 = uVar3;
      *param_3 = uVar1;
      return 1;
    }
    *param_1 = uVar2;
    *param_2 = uVar1;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      return 2;
    }
  }
  else {
    if (uVar2 <= uVar3) {
      return 0;
    }
    *param_2 = uVar3;
    *param_3 = uVar2;
    uVar1 = *param_1;
    if (*param_2 < uVar1) {
      *param_1 = *param_2;
      *param_2 = uVar1;
      return 2;
    }
  }
  return 1;
}

