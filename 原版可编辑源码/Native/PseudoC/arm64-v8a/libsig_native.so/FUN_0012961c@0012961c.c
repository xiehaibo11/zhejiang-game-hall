
ulong FUN_0012961c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined8 uStack_51;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char **)(param_2 + 8) == "Dn") {
    *param_3 = 0;
LAB_0012969c:
    uVar3 = 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x10) & 0x18) != 0) {
LAB_0012966c:
      if ((param_1 != param_2) &&
         (iVar2 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8)), iVar2 != 0))
      goto LAB_00129704;
LAB_00129684:
      if ((long *)*param_3 == (long *)0x0) goto LAB_0012969c;
      lVar4 = *(long *)*param_3;
LAB_00129690:
      *param_3 = lVar4;
      goto LAB_0012969c;
    }
    lVar4 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pbase_type_info::typeinfo,0);
    if (lVar4 != 0) {
      if ((*(byte *)(lVar4 + 0x10) & 0x18) != 0) goto LAB_0012966c;
      if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) goto LAB_00129704;
      goto LAB_00129684;
    }
LAB_00129704:
    lVar4 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pointer_type_info::typeinfo,0);
    uVar3 = 0;
    if (lVar4 == 0) goto LAB_001296a0;
    if ((long *)*param_3 != (long *)0x0) {
      *param_3 = *(long *)*param_3;
    }
    if (((*(uint *)(lVar4 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 7) != 0) ||
       ((*(uint *)(param_1 + 0x10) & (*(uint *)(lVar4 + 0x10) ^ 0xffffffff) & 0x60) != 0))
    goto LAB_00129758;
    lVar5 = *(long *)(param_1 + 0x18);
    lVar7 = *(long *)(lVar4 + 0x18);
    if (*(char **)(lVar5 + 8) == *(char **)(lVar7 + 8)) goto LAB_0012969c;
    if (*(char **)(lVar5 + 8) == "v") {
      if (lVar7 == 0) goto LAB_0012969c;
      lVar4 = __dynamic_cast(lVar7,&__cxxabiv1::__shim_type_info::typeinfo,
                             &__cxxabiv1::__function_type_info::typeinfo,0);
      uVar3 = (ulong)(lVar4 == 0);
    }
    else {
      uVar3 = 0;
      if (lVar5 != 0) {
        lVar5 = __dynamic_cast(lVar5,&__cxxabiv1::__shim_type_info::typeinfo,
                               &__cxxabiv1::__pointer_type_info::typeinfo,0);
        if (lVar5 == 0) {
          uVar3 = 0;
          if (*(long *)(param_1 + 0x18) != 0) {
            lVar5 = __dynamic_cast(*(long *)(param_1 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo
                                   ,&__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
            if (lVar5 == 0) {
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
                      uStack_90 = 0;
                      uStack_80 = 0xffffffffffffffff;
                      uStack_58 = 0;
                      uStack_70 = 0;
                      local_78 = 0;
                      uStack_60 = 0;
                      local_59 = 0;
                      local_68 = 0;
                      uStack_51 = 0x100;
                      local_98 = plVar6;
                      local_88 = lVar5;
                      (**(code **)(*plVar6 + 0x38))(plVar6,&local_98,*param_3,1);
                      if ((int)local_68 == 1) {
                        lVar4 = local_78;
                        if (*param_3 != 0) goto LAB_00129690;
                        goto LAB_0012969c;
                      }
                      goto LAB_00129758;
                    }
                  }
                }
              }
            }
            else {
              if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_00129758;
              uVar3 = 0;
              if (*(long *)(lVar4 + 0x18) != 0) {
                lVar4 = __dynamic_cast(*(long *)(lVar4 + 0x18),
                                       &__cxxabiv1::__shim_type_info::typeinfo,
                                       &__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
                uVar3 = 0;
                if (lVar4 != 0) {
                  if (((*(uint *)(lVar4 + 0x10) & (*(uint *)(lVar5 + 0x10) ^ 0xffffffff)) != 0) ||
                     (*(long *)(*(long *)(lVar5 + 0x18) + 8) !=
                      *(long *)(*(long *)(lVar4 + 0x18) + 8))) goto LAB_00129758;
                  uVar3 = (ulong)(*(long *)(*(long *)(lVar5 + 0x20) + 8) ==
                                 *(long *)(*(long *)(lVar4 + 0x20) + 8));
                }
              }
            }
          }
        }
        else {
          if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
            uVar3 = FUN_0012993c(lVar5,*(undefined8 *)(lVar4 + 0x18));
            if (*(long *)(lVar1 + 0x28) == local_48) {
              return (ulong)((uint)uVar3 & 1);
            }
            goto LAB_00129938;
          }
LAB_00129758:
          uVar3 = 0;
        }
      }
    }
  }
LAB_001296a0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
LAB_00129938:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

