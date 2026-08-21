
bool FUN_01837018(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return false;
    }
    lVar1 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pointer_type_info::typeinfo,0);
    if (lVar1 == 0) {
      return false;
    }
    if ((*(uint *)(lVar1 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) != 0) {
      return false;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == *(long *)(lVar1 + 0x18)) {
      return true;
    }
    if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
      return false;
    }
    if (lVar2 == 0) {
      return false;
    }
    lVar2 = __dynamic_cast(lVar2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pointer_type_info::typeinfo,0);
    if (lVar2 == 0) break;
    param_2 = *(long *)(lVar1 + 0x18);
    param_1 = lVar2;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return false;
  }
  lVar2 = __dynamic_cast(*(long *)(param_1 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo,
                         &__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
  if (lVar2 == 0) {
    return false;
  }
  if (*(long *)(lVar1 + 0x18) == 0) {
    return false;
  }
  lVar1 = __dynamic_cast(*(long *)(lVar1 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo,
                         &__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
  if (lVar1 != 0) {
    if ((*(uint *)(lVar1 + 0x10) & (*(uint *)(lVar2 + 0x10) ^ 0xffffffff)) != 0) {
      return false;
    }
    if (*(long *)(lVar2 + 0x18) != *(long *)(lVar1 + 0x18)) {
      return false;
    }
    return *(long *)(lVar2 + 0x20) == *(long *)(lVar1 + 0x20);
  }
  return false;
}

