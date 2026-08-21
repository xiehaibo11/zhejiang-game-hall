
uint FUN_015b5868(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = std::__ndk1::
          __sort4<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
                    ();
  uVar2 = *param_4;
  if (*param_5 < uVar2) {
    *param_4 = *param_5;
    *param_5 = uVar2;
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
          uVar1 = uVar1 + 4;
          *param_1 = *param_2;
          *param_2 = uVar2;
        }
        else {
          uVar1 = uVar1 + 3;
        }
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

