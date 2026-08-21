
/* v8::internal::compiler::TypedLoweringPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::TypedLoweringPhase::Run
          (TypedLoweringPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *pNVar2;
  long lVar3;
  Graph *pGVar4;
  undefined8 *puVar5;
  CommonOperatorReducer aCStack_2a0 [64];
  CheckpointElimination aCStack_260 [16];
  SimplifiedOperatorReducer aSStack_250 [32];
  TypedOptimization aTStack_230 [64];
  ConstantFoldingReducer aCStack_1f0 [32];
  JSTypedLowering aJStack_1d0 [56];
  undefined **local_198;
  Node **ppNStack_190;
  undefined8 local_188;
  JSGraph *pJStack_180;
  JSHeapBroker *local_178;
  Zone *pZStack_170;
  DeadCodeElimination aDStack_168 [48];
  Node *local_138 [29];
  
  puVar5 = *(undefined8 **)(param_1 + 0xd8);
  lVar3 = *(long *)(param_1 + 0x18);
  pGVar4 = *(Graph **)(param_1 + 0xa0);
  pNVar2 = (Node *)puVar5[0x2c];
  if (pNVar2 == (Node *)0x0) {
    this_00 = (Graph *)*puVar5;
    pOVar1 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar5[1]);
    local_138[0] = (Node *)0x0;
    pNVar2 = (Node *)Graph::NewNode(this_00,pOVar1,0,local_138,false);
    puVar5[0x2c] = pNVar2;
  }
  GraphReducer::GraphReducer
            ((GraphReducer *)local_138,param_2,pGVar4,(TickCounter *)(lVar3 + 0x98),pNVar2);
  DeadCodeElimination::DeadCodeElimination
            (aDStack_168,(Editor *)local_138,*(Graph **)(param_1 + 0xa0),
             *(CommonOperatorBuilder **)(param_1 + 200),param_2);
  pJStack_180 = *(JSGraph **)(param_1 + 0xd8);
  local_188 = *(undefined8 *)(param_1 + 0x138);
  local_178 = *(JSHeapBroker **)(param_1 + 0x140);
  local_198 = &PTR__Reducer_01ccd9e0;
  ppNStack_190 = local_138;
  pZStack_170 = param_2;
  JSTypedLowering::JSTypedLowering(aJStack_1d0,(Editor *)local_138,pJStack_180,local_178,param_2);
  ConstantFoldingReducer::ConstantFoldingReducer
            (aCStack_1f0,(Editor *)local_138,*(JSGraph **)(param_1 + 0xd8),
             *(JSHeapBroker **)(param_1 + 0x140));
  TypedOptimization::TypedOptimization
            (aTStack_230,(Editor *)local_138,*(CompilationDependencies **)(param_1 + 0x138),
             *(JSGraph **)(param_1 + 0xd8),*(JSHeapBroker **)(param_1 + 0x140));
  SimplifiedOperatorReducer::SimplifiedOperatorReducer
            (aSStack_250,(Editor *)local_138,*(JSGraph **)(param_1 + 0xd8),
             *(JSHeapBroker **)(param_1 + 0x140));
  CheckpointElimination::CheckpointElimination(aCStack_260,(Editor *)local_138);
  CommonOperatorReducer::CommonOperatorReducer
            (aCStack_2a0,(Editor *)local_138,*(Graph **)(param_1 + 0xa0),
             *(JSHeapBroker **)(param_1 + 0x140),*(CommonOperatorBuilder **)(param_1 + 200),
             *(MachineOperatorBuilder **)(param_1 + 0xc0),param_2);
  FUN_012a889c(param_1,local_138,aDStack_168);
  FUN_012a889c(param_1,local_138,&local_198);
  FUN_012a889c(param_1,local_138,aCStack_1f0);
  FUN_012a889c(param_1,local_138,aJStack_1d0);
  FUN_012a889c(param_1,local_138,aTStack_230);
  FUN_012a889c(param_1,local_138,aSStack_250);
  FUN_012a889c(param_1,local_138,aCStack_260);
  FUN_012a889c(param_1,local_138,aCStack_2a0);
  GraphReducer::ReduceGraph((GraphReducer *)local_138);
  SimplifiedOperatorReducer::~SimplifiedOperatorReducer(aSStack_250);
  TypedOptimization::~TypedOptimization(aTStack_230);
  ConstantFoldingReducer::~ConstantFoldingReducer(aCStack_1f0);
  GraphReducer::~GraphReducer((GraphReducer *)local_138);
  return;
}

