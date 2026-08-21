
ulong FUN_01836d20(pointer_____offset_0x10___ *param_1,pointer_____offset_0x10___ *param_2,
                  long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  pointer_____offset_0x10___ puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  pointer_____offset_0x10___ puVar8;
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
  if (param_2 == &decltype(nullptr)::typeinfo) {
    *param_3 = 0;
LAB_01836e88:
    uVar6 = 1;
  }
  else {
    if (((ulong)param_1[2] & 0x18) == 0) {
      if (param_2 != (pointer_____offset_0x10___ *)0x0) {
        lVar3 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                               &__cxxabiv1::__pbase_type_info::typeinfo,0);
        if (lVar3 != 0) {
          if ((*(byte *)(lVar3 + 0x10) & 0x18) != 0) goto LAB_01836d6c;
          if (param_1 == param_2) goto LAB_01836e78;
        }
        goto LAB_01836d7c;
      }
LAB_01836ee8:
      uVar6 = 0;
      goto LAB_01836eec;
    }
LAB_01836d6c:
    iVar2 = strcmp(param_1[1],param_2[1]);
    if (iVar2 == 0) {
LAB_01836e78:
      if ((long *)*param_3 == (long *)0x0) goto LAB_01836e88;
      lVar3 = *(long *)*param_3;
LAB_01836e84:
      *param_3 = lVar3;
      goto LAB_01836e88;
    }
LAB_01836d7c:
    lVar3 = __dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                           &__cxxabiv1::__pointer_type_info::typeinfo,0);
    uVar6 = 0;
    if (lVar3 == 0) goto LAB_01836eec;
    if ((long *)*param_3 != (long *)0x0) {
      *param_3 = *(long *)*param_3;
    }
    if (((*(uint *)(lVar3 + 0x10) & (*(uint *)(param_1 + 2) ^ 0xffffffff) & 7) != 0) ||
       ((*(uint *)(param_1 + 2) & (*(uint *)(lVar3 + 0x10) ^ 0xffffffff) & 0x60) != 0))
    goto LAB_01836ee8;
    puVar4 = param_1[3];
    puVar8 = *(pointer_____offset_0x10___ *)(lVar3 + 0x18);
    if (puVar4 == puVar8) goto LAB_01836e88;
    if (puVar4 == (pointer_____offset_0x10___)&void::typeinfo) {
      if (puVar8 == (pointer_____offset_0x10___)0x0) goto LAB_01836e88;
      lVar3 = __dynamic_cast(puVar8,&__cxxabiv1::__shim_type_info::typeinfo,
                             &__cxxabiv1::__function_type_info::typeinfo,0);
      uVar6 = (ulong)(lVar3 == 0);
    }
    else {
      uVar6 = 0;
      if (puVar4 != (pointer_____offset_0x10___)0x0) {
        lVar5 = __dynamic_cast(puVar4,&__cxxabiv1::__shim_type_info::typeinfo,
                               &__cxxabiv1::__pointer_type_info::typeinfo,0);
        if (lVar5 != 0) {
          if (((ulong)param_1[2] & 1) != 0) {
            uVar6 = FUN_01837018(lVar5,*(undefined8 *)(lVar3 + 0x18));
            if (*(long *)(lVar1 + 0x28) == local_48) {
              return (ulong)((uint)uVar6 & 1);
            }
            goto LAB_01837014;
          }
          goto LAB_01836ee8;
        }
        uVar6 = 0;
        if (param_1[3] != (pointer_____offset_0x10___)0x0) {
          lVar5 = __dynamic_cast(param_1[3],&__cxxabiv1::__shim_type_info::typeinfo,
                                 &__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
          if (lVar5 == 0) {
            uVar6 = 0;
            if (param_1[3] != (pointer_____offset_0x10___)0x0) {
              lVar5 = __dynamic_cast(param_1[3],&__cxxabiv1::__shim_type_info::typeinfo,
                                     &__cxxabiv1::__class_type_info::typeinfo,0);
              uVar6 = 0;
              if (lVar5 != 0) {
                uVar6 = 0;
                if (*(long *)(lVar3 + 0x18) != 0) {
                  plVar7 = (long *)__dynamic_cast(*(long *)(lVar3 + 0x18),
                                                  &__cxxabiv1::__shim_type_info::typeinfo,
                                                  &__cxxabiv1::__class_type_info::typeinfo,0);
                  uVar6 = 0;
                  if (plVar7 != (long *)0x0) {
                    uStack_90 = 0;
                    uStack_80 = 0xffffffffffffffff;
                    uStack_58 = 0;
                    uStack_60 = 0;
                    local_59 = 0;
                    local_68 = 0;
                    uStack_70 = 0;
                    local_78 = 0;
                    uStack_51 = 0x100;
                    local_98 = plVar7;
                    local_88 = lVar5;
                    (**(code **)(*plVar7 + 0x38))(plVar7,&local_98,*param_3,1);
                    if ((int)local_68 == 1) {
                      lVar3 = local_78;
                      if (*param_3 != 0) goto LAB_01836e84;
                      goto LAB_01836e88;
                    }
                    goto LAB_01836ee8;
                  }
                }
              }
            }
          }
          else {
            if (((ulong)param_1[2] & 1) == 0) goto LAB_01836ee8;
            uVar6 = 0;
            if (*(long *)(lVar3 + 0x18) != 0) {
              lVar3 = __dynamic_cast(*(long *)(lVar3 + 0x18),&__cxxabiv1::__shim_type_info::typeinfo
                                     ,&__cxxabiv1::__pointer_to_member_type_info::typeinfo,0);
              uVar6 = 0;
              if (lVar3 != 0) {
                if (((*(uint *)(lVar3 + 0x10) & (*(uint *)(lVar5 + 0x10) ^ 0xffffffff)) != 0) ||
                   (*(long *)(lVar5 + 0x18) != *(long *)(lVar3 + 0x18))) goto LAB_01836ee8;
                uVar6 = (ulong)(*(long *)(lVar5 + 0x20) == *(long *)(lVar3 + 0x20));
              }
            }
          }
        }
      }
    }
  }
LAB_01836eec:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
LAB_01837014:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

