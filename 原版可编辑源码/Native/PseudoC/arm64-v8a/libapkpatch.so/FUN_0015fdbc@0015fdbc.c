
undefined8 FUN_0015fdbc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    lVar1 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pointer_type_info::typeinfo,0);
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(lVar1 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) != 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(lVar1 + 0x18) + 8)) break;
    if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
      return 0;
    }
    lVar2 = __dynamic_cast(*(long *)(param_1 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pointer_type_info::typeinfo,0);
    if (lVar2 == 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        return 0;
      }
      lVar2 = __dynamic_cast(*(long *)(param_1 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo,
                             &__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
      if (lVar2 != 0) {
        uVar3 = FUN_0015feac(lVar2,*(undefined8 *)(lVar1 + 0x18));
        return uVar3;
      }
      return 0;
    }
    param_2 = *(long *)(lVar1 + 0x18);
    param_1 = lVar2;
  }
  return 1;
}

