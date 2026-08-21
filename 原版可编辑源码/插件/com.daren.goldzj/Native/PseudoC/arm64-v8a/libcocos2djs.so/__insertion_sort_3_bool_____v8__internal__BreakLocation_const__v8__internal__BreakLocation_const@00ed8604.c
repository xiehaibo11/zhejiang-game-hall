
/* void std::__ndk1::__insertion_sort_3<bool (*&)(v8::internal::BreakLocation const&,
   v8::internal::BreakLocation const&), v8::internal::BreakLocation*>(v8::internal::BreakLocation*,
   v8::internal::BreakLocation*, bool (*&)(v8::internal::BreakLocation const&,
   v8::internal::BreakLocation const&)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
               (BreakLocation *param_1,BreakLocation *param_2,
               _func_bool_BreakLocation_ptr_BreakLocation_ptr *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  BreakLocation *pBVar4;
  BreakLocation *pBVar5;
  BreakLocation *pBVar6;
  long lVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pBVar4 = param_1 + 0x18;
  pBVar6 = param_1 + 0x30;
  uVar2 = (**(code **)param_3)(pBVar4,param_1);
  uVar3 = (**(code **)param_3)(pBVar6,pBVar4);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      local_50 = *(undefined8 *)(param_1 + 0x28);
      uStack_58 = *(undefined8 *)(param_1 + 0x20);
      local_60 = *(undefined8 *)pBVar4;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)pBVar4 = *(undefined8 *)pBVar6;
      *(undefined8 *)(param_1 + 0x40) = local_50;
      *(undefined8 *)(param_1 + 0x38) = uStack_58;
      *(undefined8 *)pBVar6 = local_60;
      uVar2 = (**(code **)param_3)(pBVar4,param_1);
      if ((uVar2 & 1) != 0) {
        local_50 = *(undefined8 *)(param_1 + 0x10);
        uStack_58 = *(undefined8 *)(param_1 + 8);
        local_60 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)param_1 = *(undefined8 *)pBVar4;
        *(undefined8 *)(param_1 + 0x28) = local_50;
        *(undefined8 *)(param_1 + 0x20) = uStack_58;
        *(undefined8 *)pBVar4 = local_60;
      }
    }
  }
  else {
    if ((uVar3 & 1) == 0) {
      local_50 = *(undefined8 *)(param_1 + 0x10);
      uStack_58 = *(undefined8 *)(param_1 + 8);
      local_60 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)param_1 = *(undefined8 *)pBVar4;
      *(undefined8 *)(param_1 + 0x28) = local_50;
      *(undefined8 *)(param_1 + 0x20) = uStack_58;
      *(undefined8 *)pBVar4 = local_60;
      uVar2 = (**(code **)param_3)(pBVar6,pBVar4);
      if ((uVar2 & 1) == 0) goto LAB_00ed8770;
      local_50 = *(undefined8 *)(param_1 + 0x28);
      uStack_58 = *(undefined8 *)(param_1 + 0x20);
      local_60 = *(undefined8 *)pBVar4;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)pBVar4 = *(undefined8 *)pBVar6;
    }
    else {
      local_50 = *(undefined8 *)(param_1 + 0x10);
      uStack_58 = *(undefined8 *)(param_1 + 8);
      local_60 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)param_1 = *(undefined8 *)pBVar6;
    }
    *(undefined8 *)(param_1 + 0x40) = local_50;
    *(undefined8 *)(param_1 + 0x38) = uStack_58;
    *(undefined8 *)pBVar6 = local_60;
  }
LAB_00ed8770:
  if (param_1 + 0x48 != param_2) {
    lVar7 = 0;
    pBVar4 = param_1 + 0x48;
    do {
      pBVar5 = pBVar4;
      uVar2 = (**(code **)param_3)(pBVar5,pBVar6);
      if ((uVar2 & 1) != 0) {
        local_50 = *(undefined8 *)(pBVar5 + 0x10);
        uStack_58 = *(undefined8 *)(pBVar5 + 8);
        local_60 = *(undefined8 *)pBVar5;
        lVar1 = lVar7;
        do {
          lVar8 = lVar1;
          *(undefined8 *)(param_1 + lVar8 + 0x50) = *(undefined8 *)(param_1 + lVar8 + 0x38);
          *(undefined8 *)(param_1 + lVar8 + 0x48) = *(undefined8 *)(param_1 + lVar8 + 0x30);
          *(undefined8 *)(param_1 + lVar8 + 0x58) = *(undefined8 *)(param_1 + lVar8 + 0x40);
          pBVar4 = param_1;
          if (lVar8 == -0x30) goto LAB_00ed8788;
          uVar2 = (**(code **)param_3)(&local_60,param_1 + lVar8 + 0x18);
          lVar1 = lVar8 + -0x18;
        } while ((uVar2 & 1) != 0);
        pBVar4 = param_1 + lVar8 + 0x30;
LAB_00ed8788:
        *(undefined8 *)(pBVar4 + 0x10) = local_50;
        *(undefined8 *)(pBVar4 + 8) = uStack_58;
        *(undefined8 *)pBVar4 = local_60;
      }
      lVar7 = lVar7 + 0x18;
      pBVar4 = pBVar5 + 0x18;
      pBVar6 = pBVar5;
    } while (pBVar5 + 0x18 != param_2);
  }
  return;
}

