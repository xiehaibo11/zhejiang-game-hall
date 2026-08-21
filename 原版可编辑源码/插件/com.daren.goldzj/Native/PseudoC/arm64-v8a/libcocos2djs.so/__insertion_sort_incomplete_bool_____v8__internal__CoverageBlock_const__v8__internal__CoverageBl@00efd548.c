
/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(v8::internal::CoverageBlock const&,
   v8::internal::CoverageBlock const&), v8::internal::CoverageBlock*>(v8::internal::CoverageBlock*,
   v8::internal::CoverageBlock*, bool (*&)(v8::internal::CoverageBlock const&,
   v8::internal::CoverageBlock const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
               (CoverageBlock *param_1,CoverageBlock *param_2,
               _func_bool_CoverageBlock_ptr_CoverageBlock_ptr *param_3)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  CoverageBlock *pCVar6;
  CoverageBlock *pCVar7;
  CoverageBlock *pCVar8;
  int iVar9;
  long lVar10;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar5 = (long)param_2 - (long)param_1 >> 2;
  if ((ulong)(lVar5 * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00efd5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_00efd5a8 +
                      (ulong)*(ushort *)(&DAT_019a6c06 + lVar5 * 0x5555555555555556) * 4))(1);
    return (bool)uVar2;
  }
  pCVar6 = param_1 + 0xc;
  pCVar8 = param_1 + 0x18;
  uVar3 = (**(code **)param_3)(pCVar6,param_1);
  uVar4 = (**(code **)param_3)(pCVar8,pCVar6);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 & 1) != 0) {
      local_58 = *(undefined4 *)(param_1 + 0x14);
      local_60 = *(undefined8 *)pCVar6;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 *)pCVar6 = *(undefined8 *)pCVar8;
      *(undefined4 *)(param_1 + 0x20) = local_58;
      *(undefined8 *)pCVar8 = local_60;
      uVar3 = (**(code **)param_3)(pCVar6,param_1);
      if ((uVar3 & 1) != 0) {
        local_58 = *(undefined4 *)(param_1 + 8);
        local_60 = *(undefined8 *)param_1;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
        *(undefined8 *)param_1 = *(undefined8 *)pCVar6;
        *(undefined4 *)(param_1 + 0x14) = local_58;
        *(undefined8 *)pCVar6 = local_60;
      }
    }
  }
  else {
    if ((uVar4 & 1) == 0) {
      local_58 = *(undefined4 *)(param_1 + 8);
      local_60 = *(undefined8 *)param_1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
      *(undefined8 *)param_1 = *(undefined8 *)pCVar6;
      *(undefined4 *)(param_1 + 0x14) = local_58;
      *(undefined8 *)pCVar6 = local_60;
      uVar3 = (**(code **)param_3)(pCVar8,pCVar6);
      if ((uVar3 & 1) == 0) goto LAB_00efd9b0;
      local_58 = *(undefined4 *)(param_1 + 0x14);
      local_60 = *(undefined8 *)pCVar6;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 *)pCVar6 = *(undefined8 *)pCVar8;
    }
    else {
      local_58 = *(undefined4 *)(param_1 + 8);
      local_60 = *(undefined8 *)param_1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 *)param_1 = *(undefined8 *)pCVar8;
    }
    *(undefined4 *)(param_1 + 0x20) = local_58;
    *(undefined8 *)pCVar8 = local_60;
  }
LAB_00efd9b0:
  if (param_1 + 0x24 != param_2) {
    lVar5 = 0;
    iVar9 = 0;
    pCVar6 = param_1 + 0x24;
    do {
      pCVar7 = pCVar6;
      uVar3 = (**(code **)param_3)(pCVar7,pCVar8);
      if ((uVar3 & 1) != 0) {
        local_58 = *(undefined4 *)(pCVar7 + 8);
        local_60 = *(undefined8 *)pCVar7;
        lVar1 = lVar5;
        do {
          lVar10 = lVar1;
          *(undefined8 *)(param_1 + lVar10 + 0x24) = *(undefined8 *)(param_1 + lVar10 + 0x18);
          *(undefined4 *)(param_1 + lVar10 + 0x2c) = *(undefined4 *)(param_1 + lVar10 + 0x20);
          pCVar6 = param_1;
          if (lVar10 == -0x18) goto LAB_00efd9cc;
          uVar3 = (**(code **)param_3)(&local_60,param_1 + lVar10 + 0xc);
          lVar1 = lVar10 + -0xc;
        } while ((uVar3 & 1) != 0);
        pCVar6 = param_1 + lVar10 + 0x18;
LAB_00efd9cc:
        iVar9 = iVar9 + 1;
        *(undefined4 *)(pCVar6 + 8) = local_58;
        *(undefined8 *)pCVar6 = local_60;
        if (iVar9 == 8) {
          return pCVar7 + 0xc == param_2;
        }
      }
      lVar5 = lVar5 + 0xc;
      pCVar6 = pCVar7 + 0xc;
      pCVar8 = pCVar7;
    } while (pCVar7 + 0xc != param_2);
  }
  return true;
}

