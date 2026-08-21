
/* v8::internal::compiler::LoadEliminationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LoadEliminationPhase::Run
          (LoadEliminationPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *pGVar5;
  undefined8 *puVar6;
  TypeNarrowingReducer aTStack_3b8 [136];
  ConstantFoldingReducer aCStack_330 [32];
  TypedOptimization aTStack_310 [64];
  CommonOperatorReducer aCStack_2d0 [64];
  ValueNumberingReducer aVStack_290 [48];
  CheckpointElimination aCStack_260 [16];
  undefined **local_250;
  Node **local_248;
  long local_240;
  long local_238;
  undefined8 uStack_230;
  Zone *local_228;
  undefined8 uStack_220;
  RedundancyElimination aRStack_218 [56];
  DeadCodeElimination aDStack_1e0 [48];
  Node *local_1b0 [29];
  BranchElimination aBStack_c8 [112];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar6 = *(undefined8 **)(param_1 + 0xd8);
  lVar4 = *(long *)(param_1 + 0x18);
  pGVar5 = *(Graph **)(param_1 + 0xa0);
  pNVar3 = (Node *)puVar6[0x2c];
  if (pNVar3 == (Node *)0x0) {
    this_00 = (Graph *)*puVar6;
    pOVar2 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar6[1]);
    local_1b0[0] = (Node *)0x0;
    pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,0,local_1b0,false);
    puVar6[0x2c] = pNVar3;
  }
  GraphReducer::GraphReducer
            ((GraphReducer *)local_1b0,param_2,pGVar5,(TickCounter *)(lVar4 + 0x98),pNVar3);
  BranchElimination::BranchElimination
            (aBStack_c8,local_1b0,*(undefined8 *)(param_1 + 0xd8),param_2,0);
  DeadCodeElimination::DeadCodeElimination
            (aDStack_1e0,(Editor *)local_1b0,*(Graph **)(param_1 + 0xa0),
             *(CommonOperatorBuilder **)(param_1 + 200),param_2);
  RedundancyElimination::RedundancyElimination(aRStack_218,(Editor *)local_1b0,param_2);
  uStack_220 = *(undefined8 *)(param_1 + 0xd8);
  local_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_250 = &PTR__LoadElimination_01cd0050;
  local_248 = local_1b0;
  local_228 = param_2;
  CheckpointElimination::CheckpointElimination(aCStack_260,(Editor *)local_1b0);
  ValueNumberingReducer::ValueNumberingReducer
            (aVStack_290,param_2,(Zone *)**(undefined8 **)(param_1 + 0xa0));
  CommonOperatorReducer::CommonOperatorReducer
            (aCStack_2d0,(Editor *)local_1b0,*(Graph **)(param_1 + 0xa0),
             *(JSHeapBroker **)(param_1 + 0x140),*(CommonOperatorBuilder **)(param_1 + 200),
             *(MachineOperatorBuilder **)(param_1 + 0xc0),param_2);
  TypedOptimization::TypedOptimization
            (aTStack_310,(Editor *)local_1b0,*(CompilationDependencies **)(param_1 + 0x138),
             *(JSGraph **)(param_1 + 0xd8),*(JSHeapBroker **)(param_1 + 0x140));
  ConstantFoldingReducer::ConstantFoldingReducer
            (aCStack_330,(Editor *)local_1b0,*(JSGraph **)(param_1 + 0xd8),
             *(JSHeapBroker **)(param_1 + 0x140));
  TypeNarrowingReducer::TypeNarrowingReducer
            (aTStack_3b8,(Editor *)local_1b0,*(JSGraph **)(param_1 + 0xd8),
             *(JSHeapBroker **)(param_1 + 0x140));
  FUN_012a889c(param_1,local_1b0,aBStack_c8);
  FUN_012a889c(param_1,local_1b0,aDStack_1e0);
  FUN_012a889c(param_1,local_1b0,aRStack_218);
  FUN_012a889c(param_1,local_1b0,&local_250);
  FUN_012a889c(param_1,local_1b0,aTStack_3b8);
  FUN_012a889c(param_1,local_1b0,aCStack_330);
  FUN_012a889c(param_1,local_1b0,aTStack_310);
  FUN_012a889c(param_1,local_1b0,aCStack_260);
  FUN_012a889c(param_1,local_1b0,aCStack_2d0);
  FUN_012a889c(param_1,local_1b0,aVStack_290);
  GraphReducer::ReduceGraph((GraphReducer *)local_1b0);
  TypeNarrowingReducer::~TypeNarrowingReducer(aTStack_3b8);
  ConstantFoldingReducer::~ConstantFoldingReducer(aCStack_330);
  TypedOptimization::~TypedOptimization(aTStack_310);
  ValueNumberingReducer::~ValueNumberingReducer(aVStack_290);
  if (local_240 != 0) {
    local_238 = local_240;
  }
  local_250 = &PTR__LoadElimination_01cd0050;
  RedundancyElimination::~RedundancyElimination(aRStack_218);
  BranchElimination::~BranchElimination(aBStack_c8);
  GraphReducer::~GraphReducer((GraphReducer *)local_1b0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

