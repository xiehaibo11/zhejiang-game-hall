
/* v8::internal::compiler::EffectControlLinearizationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizationPhase::Run
          (EffectControlLinearizationPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  undefined8 uVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *pGVar5;
  undefined8 *puVar6;
  long local_1a8;
  long local_1a0;
  undefined8 local_198;
  Zone *pZStack_190;
  DeadCodeElimination aDStack_168 [48];
  Node *local_138 [29];
  
  GraphTrimmer::GraphTrimmer((GraphTrimmer *)local_138,param_2,*(Graph **)(param_1 + 0xa0));
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  pZStack_190 = param_2;
  JSGraph::GetCachedNodes(*(JSGraph **)(param_1 + 0xd8),(ZoneVector *)&local_1a8);
  GraphTrimmer::TrimGraph<std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>>
            ((GraphTrimmer *)local_138,local_1a8,local_1a0);
  uVar1 = Scheduler::ComputeSchedule
                    (param_2,*(undefined8 *)(param_1 + 0xa0),4,*(long *)(param_1 + 0x18) + 0x98);
  FUN_012a9278(*(undefined8 *)(param_1 + 0x18),param_1,uVar1,"effect linearization schedule");
  LinearizeEffectControl
            (*(undefined8 *)(param_1 + 0xd8),uVar1,param_2,*(undefined8 *)(param_1 + 0xa8),
             *(undefined8 *)(param_1 + 0xb0),*(int *)(*(long *)(param_1 + 0x18) + 4) != 1,1);
  if (local_1a8 != 0) {
    local_1a0 = local_1a8;
  }
  GraphTrimmer::~GraphTrimmer((GraphTrimmer *)local_138);
  puVar6 = *(undefined8 **)(param_1 + 0xd8);
  lVar4 = *(long *)(param_1 + 0x18);
  pGVar5 = *(Graph **)(param_1 + 0xa0);
  pNVar3 = (Node *)puVar6[0x2c];
  if (pNVar3 == (Node *)0x0) {
    this_00 = (Graph *)*puVar6;
    pOVar2 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar6[1]);
    local_138[0] = (Node *)0x0;
    pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,0,local_138,false);
    puVar6[0x2c] = pNVar3;
  }
  GraphReducer::GraphReducer
            ((GraphReducer *)local_138,param_2,pGVar5,(TickCounter *)(lVar4 + 0x98),pNVar3);
  DeadCodeElimination::DeadCodeElimination
            (aDStack_168,(Editor *)local_138,*(Graph **)(param_1 + 0xa0),
             *(CommonOperatorBuilder **)(param_1 + 200),param_2);
  CommonOperatorReducer::CommonOperatorReducer
            ((CommonOperatorReducer *)&local_1a8,(Editor *)local_138,*(Graph **)(param_1 + 0xa0),
             *(JSHeapBroker **)(param_1 + 0x140),*(CommonOperatorBuilder **)(param_1 + 200),
             *(MachineOperatorBuilder **)(param_1 + 0xc0),param_2);
  FUN_012a889c(param_1,local_138,aDStack_168);
  FUN_012a889c(param_1,local_138,&local_1a8);
  GraphReducer::ReduceGraph((GraphReducer *)local_138);
  GraphReducer::~GraphReducer((GraphReducer *)local_138);
  return;
}

