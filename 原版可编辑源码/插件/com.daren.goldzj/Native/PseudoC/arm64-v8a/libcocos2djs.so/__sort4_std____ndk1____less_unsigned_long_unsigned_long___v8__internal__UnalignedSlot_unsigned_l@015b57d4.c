
/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<unsigned long, unsigned long>&,
   v8::internal::UnalignedSlot<unsigned long> >(v8::internal::UnalignedSlot<unsigned long>,
   v8::internal::UnalignedSlot<unsigned long>, v8::internal::UnalignedSlot<unsigned long>,
   v8::internal::UnalignedSlot<unsigned long>, std::__ndk1::__less<unsigned long, unsigned long>&)
    */

uint std::__ndk1::
     __sort4<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
               (ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = __sort3<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
                    ();
  uVar2 = *param_3;
  if (*param_4 < uVar2) {
    *param_3 = *param_4;
    *param_4 = uVar2;
    uVar2 = *param_2;
    if (*param_3 < uVar2) {
      *param_2 = *param_3;
      *param_3 = uVar2;
      uVar2 = *param_1;
      if (*param_2 < uVar2) {
        uVar1 = uVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar2;
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

