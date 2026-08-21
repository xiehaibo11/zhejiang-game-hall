
/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(v8::internal::BreakLocation const&,
   v8::internal::BreakLocation const&), v8::internal::BreakLocation*>(v8::internal::BreakLocation*,
   v8::internal::BreakLocation*, bool (*&)(v8::internal::BreakLocation const&,
   v8::internal::BreakLocation const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
               (BreakLocation *param_1,BreakLocation *param_2,
               _func_bool_BreakLocation_ptr_BreakLocation_ptr *param_3)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  BreakLocation *pBVar6;
  BreakLocation *pBVar7;
  BreakLocation *pBVar8;
  int iVar9;
  long lVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar5 = (long)param_2 - (long)param_1 >> 3;
  if ((ulong)(lVar5 * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00ed8888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_00ed888c +
                      (ulong)*(ushort *)(&DAT_019989ea + lVar5 * 0x5555555555555556) * 4))(1);
    return (bool)uVar2;
  }
  pBVar6 = param_1 + 0x18;
  pBVar8 = param_1 + 0x30;
  uVar3 = (**(code **)param_3)(pBVar6,param_1);
  uVar4 = (**(code **)param_3)(pBVar8,pBVar6);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 & 1) != 0) {
      local_60 = *(undefined8 *)(param_1 + 0x28);
      uStack_68 = *(undefined8 *)(param_1 + 0x20);
      local_70 = *(undefined8 *)pBVar6;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)pBVar6 = *(undefined8 *)pBVar8;
      *(undefined8 *)(param_1 + 0x40) = local_60;
      *(undefined8 *)(param_1 + 0x38) = uStack_68;
      *(undefined8 *)pBVar8 = local_70;
      uVar3 = (**(code **)param_3)(pBVar6,param_1);
      if ((uVar3 & 1) != 0) {
        local_60 = *(undefined8 *)(param_1 + 0x10);
        uStack_68 = *(undefined8 *)(param_1 + 8);
        local_70 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)param_1 = *(undefined8 *)pBVar6;
        *(undefined8 *)(param_1 + 0x28) = local_60;
        *(undefined8 *)(param_1 + 0x20) = uStack_68;
        *(undefined8 *)pBVar6 = local_70;
      }
    }
  }
  else {
    if ((uVar4 & 1) == 0) {
      local_60 = *(undefined8 *)(param_1 + 0x10);
      uStack_68 = *(undefined8 *)(param_1 + 8);
      local_70 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)param_1 = *(undefined8 *)pBVar6;
      *(undefined8 *)(param_1 + 0x28) = local_60;
      *(undefined8 *)(param_1 + 0x20) = uStack_68;
      *(undefined8 *)pBVar6 = local_70;
      uVar3 = (**(code **)param_3)(pBVar8,pBVar6);
      if ((uVar3 & 1) == 0) goto LAB_00ed8c94;
      local_60 = *(undefined8 *)(param_1 + 0x28);
      uStack_68 = *(undefined8 *)(param_1 + 0x20);
      local_70 = *(undefined8 *)pBVar6;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)pBVar6 = *(undefined8 *)pBVar8;
    }
    else {
      local_60 = *(undefined8 *)(param_1 + 0x10);
      uStack_68 = *(undefined8 *)(param_1 + 8);
      local_70 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)param_1 = *(undefined8 *)pBVar8;
    }
    *(undefined8 *)(param_1 + 0x40) = local_60;
    *(undefined8 *)(param_1 + 0x38) = uStack_68;
    *(undefined8 *)pBVar8 = local_70;
  }
LAB_00ed8c94:
  if (param_1 + 0x48 != param_2) {
    lVar5 = 0;
    iVar9 = 0;
    pBVar6 = param_1 + 0x48;
    do {
      pBVar7 = pBVar6;
      uVar3 = (**(code **)param_3)(pBVar7,pBVar8);
      if ((uVar3 & 1) != 0) {
        local_60 = *(undefined8 *)(pBVar7 + 0x10);
        uStack_68 = *(undefined8 *)(pBVar7 + 8);
        local_70 = *(undefined8 *)pBVar7;
        lVar1 = lVar5;
        do {
          lVar10 = lVar1;
          *(undefined8 *)(param_1 + lVar10 + 0x50) = *(undefined8 *)(param_1 + lVar10 + 0x38);
          *(undefined8 *)(param_1 + lVar10 + 0x48) = *(undefined8 *)(param_1 + lVar10 + 0x30);
          *(undefined8 *)(param_1 + lVar10 + 0x58) = *(undefined8 *)(param_1 + lVar10 + 0x40);
          pBVar6 = param_1;
          if (lVar10 == -0x30) goto LAB_00ed8cb0;
          uVar3 = (**(code **)param_3)(&local_70,param_1 + lVar10 + 0x18);
          lVar1 = lVar10 + -0x18;
        } while ((uVar3 & 1) != 0);
        pBVar6 = param_1 + lVar10 + 0x30;
LAB_00ed8cb0:
        iVar9 = iVar9 + 1;
        *(undefined8 *)(pBVar6 + 0x10) = local_60;
        *(undefined8 *)(pBVar6 + 8) = uStack_68;
        *(undefined8 *)pBVar6 = local_70;
        if (iVar9 == 8) {
          return pBVar7 + 0x18 == param_2;
        }
      }
      lVar5 = lVar5 + 0x18;
      pBVar6 = pBVar7 + 0x18;
      pBVar8 = pBVar7;
    } while (pBVar7 + 0x18 != param_2);
  }
  return true;
}

