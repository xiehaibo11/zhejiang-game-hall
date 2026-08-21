
ulong FUN_0015faf8(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined8 uStack_41;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char **)(param_2 + 8) == "Dn") {
    *param_3 = 0;
    uVar3 = 1;
  }
  else if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
    lVar4 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pbase_type_info::typeinfo,0);
    if (lVar4 != 0) {
      if ((*(byte *)(lVar4 + 0x10) & 0x18) != 0) goto LAB_0015fb48;
      if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) goto LAB_0015fbc0;
      goto LAB_0015fb60;
    }
LAB_0015fbc0:
    lVar4 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pointer_type_info::typeinfo,0);
    uVar3 = 0;
    if (lVar4 != 0) {
      if ((long *)*param_3 != (long *)0x0) {
        *param_3 = *(long *)*param_3;
      }
      if (((*(uint *)(lVar4 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 7) != 0) ||
         ((*(uint *)(param_1 + 0x10) & (*(uint *)(lVar4 + 0x10) ^ 0xffffffff) & 0x60) != 0))
      goto LAB_0015fc14;
      pcVar7 = *(char **)(*(long *)(param_1 + 0x18) + 8);
      if (pcVar7 == *(char **)(*(long *)(lVar4 + 0x18) + 8)) goto LAB_0015fc88;
      if (pcVar7 == "v") {
        lVar4 = __dynamic_cast(*(long *)(lVar4 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo,
                               &__cxxabiv1::__function_type_info::typeinfo,0);
        uVar3 = (ulong)(lVar4 == 0);
      }
      else {
        lVar5 = __dynamic_cast(*(long *)(param_1 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo,
                               &__cxxabiv1::__pointer_type_info::typeinfo,0);
        if (lVar5 == 0) {
          uVar3 = 0;
          if (*(long *)(param_1 + 0x18) != 0) {
            lVar5 = __dynamic_cast(*(long *)(param_1 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo
                                   ,&__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
            if (lVar5 != 0) {
              if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
                uVar3 = FUN_0015feac(lVar5,*(undefined8 *)(lVar4 + 0x18));
                goto LAB_0015fc70;
              }
              goto LAB_0015fc14;
            }
            uVar3 = 0;
            if (*(long *)(param_1 + 0x18) != 0) {
              lVar5 = __dynamic_cast(*(long *)(param_1 + 0x18),
                                     &__cxxabiv1::__shim_type_info::typeinfo,
                                     &__cxxabiv1::__class_type_info::typeinfo,0);
              uVar3 = 0;
              if (lVar5 != 0) {
                uVar3 = 0;
                if (*(long *)(lVar4 + 0x18) != 0) {
                  plVar6 = (long *)__dynamic_cast(*(long *)(lVar4 + 0x18),
                                                  &__cxxabiv1::__shim_type_info::typeinfo,
                                                  &__cxxabiv1::__class_type_info::typeinfo,0);
                  uVar3 = 0;
                  if (plVar6 != (long *)0x0) {
                    uStack_80 = 0;
                    uStack_70 = 0xffffffffffffffff;
                    uStack_48 = 0;
                    uStack_60 = 0;
                    local_68 = 0;
                    uStack_50 = 0;
                    local_49 = 0;
                    local_58 = 0;
                    uStack_41 = 0x100;
                    local_88 = plVar6;
                    local_78 = lVar5;
                    (**(code **)(*plVar6 + 0x38))(plVar6,&local_88,*param_3,1);
                    uVar3 = (ulong)((int)local_58 == 1);
                    if (((int)local_58 == 1) && (*param_3 != 0)) {
                      *param_3 = local_68;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
            uVar3 = FUN_0015fdbc(lVar5,*(undefined8 *)(lVar4 + 0x18));
LAB_0015fc70:
            if (*(long *)(lVar1 + 0x28) == local_38) {
              return (ulong)((uint)uVar3 & 1);
            }
            goto LAB_0015fdb8;
          }
LAB_0015fc14:
          uVar3 = 0;
        }
      }
    }
  }
  else {
LAB_0015fb48:
    if ((param_1 != param_2) &&
       (iVar2 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8)), iVar2 != 0))
    goto LAB_0015fbc0;
LAB_0015fb60:
    if ((long *)*param_3 != (long *)0x0) {
      uVar3 = 1;
      *param_3 = *(long *)*param_3;
      goto LAB_0015fc8c;
    }
LAB_0015fc88:
    uVar3 = 1;
  }
LAB_0015fc8c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
LAB_0015fdb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

