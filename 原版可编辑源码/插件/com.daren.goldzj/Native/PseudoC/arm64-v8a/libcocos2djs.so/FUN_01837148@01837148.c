
bool FUN_01837148(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
    if (lVar1 == 0) {
      return false;
    }
    if (((*(uint *)(lVar1 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) == 0) &&
       (*(long *)(param_1 + 0x18) == *(long *)(lVar1 + 0x18))) {
      return *(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x20);
    }
  }
  return false;
}

