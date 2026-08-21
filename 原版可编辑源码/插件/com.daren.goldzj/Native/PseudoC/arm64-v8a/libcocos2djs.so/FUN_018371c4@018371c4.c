
bool FUN_018371c4(pointer_____offset_0x10___ *param_1,pointer_____offset_0x10___ *param_2,
                 undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_2 == &decltype(nullptr)::typeinfo) {
    puVar3 = &DAT_01a679d0;
    if (param_1[3] != (pointer_____offset_0x10___)0x0) {
      lVar2 = __dynamic_cast(param_1[3],&__cxxabiv1::__shim_type_info::typeinfo,
                             &__cxxabiv1::__function_type_info::typeinfo,0);
      if (lVar2 != 0) {
        puVar3 = &DAT_01a679c0;
      }
    }
    *param_3 = puVar3;
    return true;
  }
  if (((ulong)param_1[2] & 0x18) == 0) {
    if (param_2 == (pointer_____offset_0x10___ *)0x0) {
      return false;
    }
    lVar2 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pbase_type_info::typeinfo,0);
    if (lVar2 == 0) goto LAB_01837208;
    if ((*(byte *)(lVar2 + 0x10) & 0x18) == 0) {
      if (param_1 == param_2) {
        return true;
      }
      goto LAB_01837208;
    }
  }
  iVar1 = strcmp(param_1[1],param_2[1]);
  if (iVar1 == 0) {
    return true;
  }
LAB_01837208:
  lVar2 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                         &__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
  if (lVar2 == 0) {
    return false;
  }
  if ((((*(uint *)(lVar2 + 0x10) & (*(uint *)(param_1 + 2) ^ 0xffffffff) & 7) == 0) &&
      ((*(uint *)(param_1 + 2) & (*(uint *)(lVar2 + 0x10) ^ 0xffffffff) & 0x60) == 0)) &&
     (param_1[3] == *(pointer_____offset_0x10___ *)(lVar2 + 0x18))) {
    return param_1[4] == *(pointer_____offset_0x10___ *)(lVar2 + 0x20);
  }
  return false;
}

