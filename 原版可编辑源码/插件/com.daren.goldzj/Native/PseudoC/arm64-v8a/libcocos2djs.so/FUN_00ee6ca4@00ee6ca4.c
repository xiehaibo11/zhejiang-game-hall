
void FUN_00ee6ca4(long *param_1,AsmJs *param_2,ParseInfo *param_3,FunctionLiteral *param_4,
                 AccountingAllocator *param_5,vector *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  AccountingAllocator *pAVar8;
  undefined4 uVar9;
  long *plVar10;
  long local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  
  if (((v8::internal::FLAG_validate_asm != '\0') && ((*(uint *)(param_2 + 8) >> 0xc & 1) == 0)) &&
     ((pAVar8 = param_5, v8::internal::FLAG_stress_validate_asm != '\0' ||
      (uVar4 = v8::internal::Scope::IsAsmModule(*(Scope **)(param_3 + 0x28)), (uVar4 & 1) != 0)))) {
    v8::internal::AsmJs::NewCompilationJob(param_2,param_3,param_4,pAVar8);
    plVar10 = (long *)*param_1;
    lVar5 = v8::base::TimeTicks::HighResolutionNow();
    iVar3 = (**(code **)(*plVar10 + 0x10))(plVar10);
    uVar9 = 2;
    if (iVar3 != 0) {
      uVar9 = 4;
    }
    *(undefined4 *)(plVar10 + 1) = uVar9;
    lVar6 = v8::base::TimeTicks::HighResolutionNow();
    plVar10[6] = (lVar6 - lVar5) + plVar10[6];
    if (iVar3 == 0) {
      return;
    }
    plVar10 = (long *)*param_1;
    *param_1 = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  local_68 = (undefined8 *)0x0;
  v8::internal::interpreter::Interpreter::NewCompilationJob
            ((Interpreter *)param_2,param_3,param_4,(AccountingAllocator *)&local_68,param_6);
  plVar10 = local_70;
  lVar5 = v8::base::TimeTicks::HighResolutionNow();
  iVar3 = (**(code **)(*plVar10 + 0x10))(plVar10);
  uVar9 = 2;
  if (iVar3 != 0) {
    uVar9 = 4;
  }
  *(undefined4 *)(plVar10 + 1) = uVar9;
  lVar6 = v8::base::TimeTicks::HighResolutionNow();
  puVar2 = local_60;
  plVar10[6] = (lVar6 - lVar5) + plVar10[6];
  plVar10 = local_70;
  puVar1 = local_68;
  if (iVar3 == 0) {
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      local_70 = plVar10;
      FUN_00ee6ca4(&local_78,param_2,*puVar1,param_4,param_5);
      lVar5 = local_78;
      if (local_78 == 0) goto LAB_00ee6dec;
      puVar7 = operator_new(0x10);
      *puVar7 = *(undefined8 *)param_5;
      puVar7[1] = lVar5;
      *(undefined8 **)param_5 = puVar7;
      plVar10 = local_70;
    }
    local_70 = (long *)0x0;
    *param_1 = (long)plVar10;
  }
  else {
LAB_00ee6dec:
    plVar10 = local_70;
    *param_1 = 0;
    local_70 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  if (local_68 != (undefined8 *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  return;
}

