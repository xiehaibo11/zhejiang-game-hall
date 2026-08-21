
bool FUN_01251f5c(long param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  
  if (*(char **)(param_2 + 8) == "Dn") {
    puVar4 = &DAT_014a72c0;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar3 = __dynamic_cast(*(long *)(param_1 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo,
                             &__cxxabiv1::__function_type_info::typeinfo,0);
      if (lVar3 != 0) {
        puVar4 = &DAT_014a72b0;
      }
    }
    *param_3 = puVar4;
LAB_01251ff0:
    bVar1 = true;
  }
  else {
    if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
      lVar3 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                             &__cxxabiv1::__pbase_type_info::typeinfo,0);
      if (lVar3 != 0) {
        if ((*(byte *)(lVar3 + 0x10) & 0x18) != 0) goto LAB_01251f94;
        if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) goto LAB_01251ff0;
      }
    }
    else {
LAB_01251f94:
      if ((param_1 == param_2) ||
         (iVar2 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8)), iVar2 == 0))
      goto LAB_01251ff0;
    }
    lVar3 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
    bVar1 = false;
    if (lVar3 != 0) {
      if ((((*(uint *)(lVar3 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 7) == 0) &&
          ((*(uint *)(param_1 + 0x10) & (*(uint *)(lVar3 + 0x10) ^ 0xffffffff) & 0x60) == 0)) &&
         (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(lVar3 + 0x18) + 8))) {
        bVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8) == *(long *)(*(long *)(lVar3 + 0x20) + 8);
      }
      else {
        bVar1 = false;
      }
    }
  }
  return bVar1;
}

