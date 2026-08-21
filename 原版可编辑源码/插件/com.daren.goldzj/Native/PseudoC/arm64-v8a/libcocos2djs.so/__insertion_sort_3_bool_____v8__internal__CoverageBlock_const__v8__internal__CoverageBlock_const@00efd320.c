
/* void std::__ndk1::__insertion_sort_3<bool (*&)(v8::internal::CoverageBlock const&,
   v8::internal::CoverageBlock const&), v8::internal::CoverageBlock*>(v8::internal::CoverageBlock*,
   v8::internal::CoverageBlock*, bool (*&)(v8::internal::CoverageBlock const&,
   v8::internal::CoverageBlock const&)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
               (CoverageBlock *param_1,CoverageBlock *param_2,
               _func_bool_CoverageBlock_ptr_CoverageBlock_ptr *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  CoverageBlock *pCVar4;
  CoverageBlock *pCVar5;
  CoverageBlock *pCVar6;
  long lVar7;
  long lVar8;
  undefined8 local_50;
  undefined4 local_48;
  
  pCVar4 = param_1 + 0xc;
  pCVar6 = param_1 + 0x18;
  uVar2 = (**(code **)param_3)(pCVar4,param_1);
  uVar3 = (**(code **)param_3)(pCVar6,pCVar4);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      local_48 = *(undefined4 *)(param_1 + 0x14);
      local_50 = *(undefined8 *)pCVar4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 *)pCVar4 = *(undefined8 *)pCVar6;
      *(undefined4 *)(param_1 + 0x20) = local_48;
      *(undefined8 *)pCVar6 = local_50;
      uVar2 = (**(code **)param_3)(pCVar4,param_1);
      if ((uVar2 & 1) != 0) {
        local_48 = *(undefined4 *)(param_1 + 8);
        local_50 = *(undefined8 *)param_1;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
        *(undefined8 *)param_1 = *(undefined8 *)pCVar4;
        *(undefined4 *)(param_1 + 0x14) = local_48;
        *(undefined8 *)pCVar4 = local_50;
      }
    }
  }
  else {
    if ((uVar3 & 1) == 0) {
      local_48 = *(undefined4 *)(param_1 + 8);
      local_50 = *(undefined8 *)param_1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
      *(undefined8 *)param_1 = *(undefined8 *)pCVar4;
      *(undefined4 *)(param_1 + 0x14) = local_48;
      *(undefined8 *)pCVar4 = local_50;
      uVar2 = (**(code **)param_3)(pCVar6,pCVar4);
      if ((uVar2 & 1) == 0) goto LAB_00efd48c;
      local_48 = *(undefined4 *)(param_1 + 0x14);
      local_50 = *(undefined8 *)pCVar4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 *)pCVar4 = *(undefined8 *)pCVar6;
    }
    else {
      local_48 = *(undefined4 *)(param_1 + 8);
      local_50 = *(undefined8 *)param_1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 *)param_1 = *(undefined8 *)pCVar6;
    }
    *(undefined4 *)(param_1 + 0x20) = local_48;
    *(undefined8 *)pCVar6 = local_50;
  }
LAB_00efd48c:
  if (param_1 + 0x24 != param_2) {
    lVar7 = 0;
    pCVar4 = param_1 + 0x24;
    do {
      pCVar5 = pCVar4;
      uVar2 = (**(code **)param_3)(pCVar5,pCVar6);
      if ((uVar2 & 1) != 0) {
        local_48 = *(undefined4 *)(pCVar5 + 8);
        local_50 = *(undefined8 *)pCVar5;
        lVar1 = lVar7;
        do {
          lVar8 = lVar1;
          *(undefined8 *)(param_1 + lVar8 + 0x24) = *(undefined8 *)(param_1 + lVar8 + 0x18);
          *(undefined4 *)(param_1 + lVar8 + 0x2c) = *(undefined4 *)(param_1 + lVar8 + 0x20);
          pCVar4 = param_1;
          if (lVar8 == -0x18) goto LAB_00efd4a4;
          uVar2 = (**(code **)param_3)(&local_50,param_1 + lVar8 + 0xc);
          lVar1 = lVar8 + -0xc;
        } while ((uVar2 & 1) != 0);
        pCVar4 = param_1 + lVar8 + 0x18;
LAB_00efd4a4:
        *(undefined4 *)(pCVar4 + 8) = local_48;
        *(undefined8 *)pCVar4 = local_50;
      }
      lVar7 = lVar7 + 0xc;
      pCVar4 = pCVar5 + 0xc;
      pCVar6 = pCVar5;
    } while (pCVar5 + 0xc != param_2);
  }
  return;
}

