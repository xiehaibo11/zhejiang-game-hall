
/* v8::internal::compiler::CsaEarlyOptimizationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::CsaEarlyOptimizationPhase::Run
          (CsaEarlyOptimizationPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  uint uVar1;
  long lVar2;
  Operator *pOVar3;
  ulong uVar4;
  Node *pNVar5;
  long lVar6;
  Graph *pGVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ValueNumberingReducer aVStack_2b0 [48];
  CommonOperatorReducer aCStack_280 [64];
  DeadCodeElimination aDStack_240 [48];
  Node *local_210 [29];
  undefined **local_128;
  Node **ppNStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  Zone *pZStack_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  Zone *pZStack_e0;
  long *local_d8;
  Zone *pZStack_d0;
  BranchElimination aBStack_c8 [112];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar10 = *(undefined8 **)(param_1 + 0xd8);
  lVar6 = *(long *)(param_1 + 0x18);
  pGVar7 = *(Graph **)(param_1 + 0xa0);
  pNVar5 = (Node *)puVar10[0x2c];
  if (pNVar5 == (Node *)0x0) {
    this_00 = (Graph *)*puVar10;
    pOVar3 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar10[1]);
    local_210[0] = (Node *)0x0;
    pNVar5 = (Node *)Graph::NewNode(this_00,pOVar3,0,local_210,false);
    puVar10[0x2c] = pNVar5;
  }
  GraphReducer::GraphReducer
            ((GraphReducer *)local_210,param_2,pGVar7,(TickCounter *)(lVar6 + 0x98),pNVar5);
  BranchElimination::BranchElimination
            (aBStack_c8,local_210,*(undefined8 *)(param_1 + 0xd8),param_2,1);
  DeadCodeElimination::DeadCodeElimination
            (aDStack_240,(Editor *)local_210,*(Graph **)(param_1 + 0xa0),
             *(CommonOperatorBuilder **)(param_1 + 200),param_2);
  CommonOperatorReducer::CommonOperatorReducer
            (aCStack_280,(Editor *)local_210,*(Graph **)(param_1 + 0xa0),
             *(JSHeapBroker **)(param_1 + 0x140),*(CommonOperatorBuilder **)(param_1 + 200),
             *(MachineOperatorBuilder **)(param_1 + 0xc0),param_2);
  ValueNumberingReducer::ValueNumberingReducer
            (aVStack_2b0,param_2,(Zone *)**(undefined8 **)(param_1 + 0xa0));
  plVar8 = *(long **)(param_1 + 0xd8);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uVar1 = *(uint *)(*plVar8 + 0x1c);
  uVar9 = (ulong)uVar1;
  local_f8 = (undefined8 *)0x0;
  local_f0 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  local_128 = &PTR__CsaLoadElimination_01ccce68;
  ppNStack_120 = local_210;
  pZStack_100 = param_2;
  pZStack_e0 = param_2;
  if (uVar1 != 0) {
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar10 = *(undefined8 **)(param_2 + 0x10);
    uVar4 = uVar9 * 8;
    if (uVar4 < (ulong)(*(long *)(param_2 + 0x18) - (long)puVar10) ||
        uVar4 - (*(long *)(param_2 + 0x18) - (long)puVar10) == 0) {
      *(undefined8 **)(param_2 + 0x10) = puVar10 + uVar9;
    }
    else {
      puVar10 = (undefined8 *)Zone::NewExpand(param_2,uVar4);
    }
    local_e8 = puVar10 + uVar9;
    local_f0 = puVar10;
    do {
      *local_f0 = 0;
      uVar9 = uVar9 - 1;
      local_f0 = local_f0 + 1;
      local_f8 = puVar10;
    } while (uVar9 != 0);
  }
  local_d8 = plVar8;
  pZStack_d0 = param_2;
  FUN_012a889c(param_1,local_210,aBStack_c8);
  FUN_012a889c(param_1,local_210,aDStack_240);
  FUN_012a889c(param_1,local_210,aCStack_280);
  FUN_012a889c(param_1,local_210,aVStack_2b0);
  FUN_012a889c(param_1,local_210,&local_128);
  GraphReducer::ReduceGraph((GraphReducer *)local_210);
  if (local_f8 != (undefined8 *)0x0) {
    local_f0 = local_f8;
  }
  local_128 = &PTR__CsaLoadElimination_01ccce68;
  ValueNumberingReducer::~ValueNumberingReducer(aVStack_2b0);
  BranchElimination::~BranchElimination(aBStack_c8);
  GraphReducer::~GraphReducer((GraphReducer *)local_210);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

