
/* v8::internal::compiler::MachineOperatorOptimizationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::MachineOperatorOptimizationPhase::Run
          (MachineOperatorOptimizationPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *pGVar5;
  undefined8 *puVar6;
  ValueNumberingReducer aVStack_190 [48];
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
  ValueNumberingReducer::ValueNumberingReducer
            (aVStack_190,param_2,(Zone *)**(undefined8 **)(param_1 + 0xa0));
  MachineOperatorReducer::MachineOperatorReducer
            (aMStack_78,(Editor *)local_160,*(MachineGraph **)(param_1 + 0xd8),true);
  FUN_012a889c(param_1,local_160,aMStack_78);
  FUN_012a889c(param_1,local_160,aVStack_190);
  GraphReducer::ReduceGraph((GraphReducer *)local_160);
  MachineOperatorReducer::~MachineOperatorReducer(aMStack_78);
  ValueNumberingReducer::~ValueNumberingReducer(aVStack_190);
  GraphReducer::~GraphReducer((GraphReducer *)local_160);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

