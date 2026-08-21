
/* v8::internal::compiler::TyperPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*, v8::internal::compiler::Typer*) */

void __thiscall
v8::internal::compiler::TyperPhase::Run
          (TyperPhase *this,PipelineData *param_1,Zone *param_2,Typer *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  LoopVariableOptimizer aLStack_e0 [96];
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::InductionVariable*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::InductionVariable*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::InductionVariable*>>>
  a_Stack_80 [8];
  __tree_node *local_78;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  Zone *local_48;
  
  local_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_48 = param_2;
  JSGraph::GetCachedNodes(*(JSGraph **)(param_1 + 0xd8),(ZoneVector *)&local_60);
  uVar3 = JSGraph::TrueConstant(*(JSGraph **)(param_1 + 0xd8));
  if (local_58 < local_50) {
    *local_58 = uVar3;
    puVar5 = local_60;
    puVar2 = local_58;
  }
  else {
    lVar7 = (long)local_58 - (long)local_60 >> 3;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x1c != 0) goto LAB_012ad4a0;
    uVar6 = (long)local_50 - (long)local_60 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffe < (ulong)((long)local_50 - (long)local_60 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = uVar1 * 8;
      lVar4 = *(long *)(local_48 + 0x10);
      if (uVar6 < (ulong)(*(long *)(local_48 + 0x18) - lVar4) ||
          uVar6 - (*(long *)(local_48 + 0x18) - lVar4) == 0) {
        *(ulong *)(local_48 + 0x10) = lVar4 + uVar6;
      }
      else {
        lVar4 = Zone::NewExpand(local_48,uVar6);
      }
    }
    puVar2 = (undefined8 *)(lVar4 + lVar7 * 8);
    *puVar2 = uVar3;
    local_50 = (undefined8 *)(lVar4 + uVar1 * 8);
    puVar5 = puVar2;
    while (local_58 != local_60) {
      local_58 = local_58 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *local_58;
    }
  }
  local_60 = puVar5;
  local_58 = puVar2 + 1;
  uVar3 = JSGraph::FalseConstant(*(JSGraph **)(param_1 + 0xd8));
  if (local_58 < local_50) {
    *local_58 = uVar3;
    puVar5 = local_60;
    puVar2 = local_58;
  }
  else {
    lVar7 = (long)local_58 - (long)local_60 >> 3;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x1c != 0) {
LAB_012ad4a0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = (long)local_50 - (long)local_60 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffe < (ulong)((long)local_50 - (long)local_60 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = uVar1 * 8;
      lVar4 = *(long *)(local_48 + 0x10);
      if (uVar6 < (ulong)(*(long *)(local_48 + 0x18) - lVar4) ||
          uVar6 - (*(long *)(local_48 + 0x18) - lVar4) == 0) {
        *(ulong *)(local_48 + 0x10) = lVar4 + uVar6;
      }
      else {
        lVar4 = Zone::NewExpand(local_48,uVar6);
      }
    }
    puVar2 = (undefined8 *)(lVar4 + lVar7 * 8);
    *puVar2 = uVar3;
    local_50 = (undefined8 *)(lVar4 + uVar1 * 8);
    puVar5 = puVar2;
    while (local_58 != local_60) {
      local_58 = local_58 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *local_58;
    }
  }
  local_60 = puVar5;
  local_58 = puVar2 + 1;
  LoopVariableOptimizer::LoopVariableOptimizer
            (aLStack_e0,(Graph *)**(undefined8 **)(param_1 + 0xd8),
             *(CommonOperatorBuilder **)(param_1 + 200),param_2);
  if (FLAG_turbo_loop_variable != '\0') {
    LoopVariableOptimizer::Run(aLStack_e0);
  }
  Typer::Run(param_3,(ZoneVector *)&local_60,aLStack_e0);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::InductionVariable*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::InductionVariable*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::InductionVariable*>>>
  ::destroy(a_Stack_80,local_78);
  return;
}

