
/* v8::internal::compiler::EarlyOptimizationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::EarlyOptimizationPhase::Run
          (EarlyOptimizationPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *pGVar5;
  undefined8 *puVar6;
  CommonOperatorReducer aCStack_258 [64];
  ValueNumberingReducer aVStack_218 [48];
  RedundancyElimination aRStack_1e8 [56];
  SimplifiedOperatorReducer aSStack_1b0 [32];
  DeadCodeElimination aDStack_190 [48];
  Node *local_160 [29];
  MachineOperatorReducer aMStack_78 [32];
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
    local_160[0] = (Node *)0x0;
    pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,0,local_160,false);
    puVar6[0x2c] = pNVar3;
  }
  GraphReducer::GraphReducer
            ((GraphReducer *)local_160,param_2,pGVar5,(TickCounter *)(lVar4 + 0x98),pNVar3);
  DeadCodeElimination::DeadCodeElimination
            (aDStack_190,(Editor *)local_160,*(Graph **)(param_1 + 0xa0),
             *(CommonOperatorBuilder **)(param_1 + 200),param_2);
  SimplifiedOperatorReducer::SimplifiedOperatorReducer
            (aSStack_1b0,(Editor *)local_160,*(JSGraph **)(param_1 + 0xd8),
             *(JSHeapBroker **)(param_1 + 0x140));
  RedundancyElimination::RedundancyElimination(aRStack_1e8,(Editor *)local_160,param_2);
  ValueNumberingReducer::ValueNumberingReducer
            (aVStack_218,param_2,(Zone *)**(undefined8 **)(param_1 + 0xa0));
  MachineOperatorReducer::MachineOperatorReducer
            (aMStack_78,(Editor *)local_160,*(MachineGraph **)(param_1 + 0xd8),true);
  CommonOperatorReducer::CommonOperatorReducer
            (aCStack_258,(Editor *)local_160,*(Graph **)(param_1 + 0xa0),
             *(JSHeapBroker **)(param_1 + 0x140),*(CommonOperatorBuilder **)(param_1 + 200),
             *(MachineOperatorBuilder **)(param_1 + 0xc0),param_2);
  FUN_012a889c(param_1,local_160,aDStack_190);
  FUN_012a889c(param_1,local_160,aSStack_1b0);
  FUN_012a889c(param_1,local_160,aRStack_1e8);
  FUN_012a889c(param_1,local_160,aMStack_78);
  FUN_012a889c(param_1,local_160,aCStack_258);
  FUN_012a889c(param_1,local_160,aVStack_218);
  GraphReducer::ReduceGraph((GraphReducer *)local_160);
  MachineOperatorReducer::~MachineOperatorReducer(aMStack_78);
  ValueNumberingReducer::~ValueNumberingReducer(aVStack_218);
  RedundancyElimination::~RedundancyElimination(aRStack_1e8);
  SimplifiedOperatorReducer::~SimplifiedOperatorReducer(aSStack_1b0);
  GraphReducer::~GraphReducer((GraphReducer *)local_160);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

