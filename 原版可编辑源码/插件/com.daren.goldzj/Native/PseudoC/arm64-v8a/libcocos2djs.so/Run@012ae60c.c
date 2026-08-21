
/* v8::internal::compiler::LateOptimizationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LateOptimizationPhase::Run
          (LateOptimizationPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *pGVar5;
  undefined8 *puVar6;
  SelectLowering aSStack_2c0 [24];
  GraphAssembler aGStack_2a8 [56];
  CommonOperatorReducer aCStack_270 [64];
  ValueNumberingReducer aVStack_230 [48];
  DeadCodeElimination aDStack_200 [48];
  Node *local_1d0 [29];
  MachineOperatorReducer aMStack_e8 [32];
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
    local_1d0[0] = (Node *)0x0;
    pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,0,local_1d0,false);
    puVar6[0x2c] = pNVar3;
  }
  GraphReducer::GraphReducer
            ((GraphReducer *)local_1d0,param_2,pGVar5,(TickCounter *)(lVar4 + 0x98),pNVar3);
  BranchElimination::BranchElimination
            (aBStack_c8,local_1d0,*(undefined8 *)(param_1 + 0xd8),param_2,1);
  DeadCodeElimination::DeadCodeElimination
            (aDStack_200,(Editor *)local_1d0,*(Graph **)(param_1 + 0xa0),
             *(CommonOperatorBuilder **)(param_1 + 200),param_2);
  ValueNumberingReducer::ValueNumberingReducer
            (aVStack_230,param_2,(Zone *)**(undefined8 **)(param_1 + 0xa0));
  MachineOperatorReducer::MachineOperatorReducer
            (aMStack_e8,(Editor *)local_1d0,*(MachineGraph **)(param_1 + 0xd8),true);
  CommonOperatorReducer::CommonOperatorReducer
            (aCStack_270,(Editor *)local_1d0,*(Graph **)(param_1 + 0xa0),
             *(JSHeapBroker **)(param_1 + 0x140),*(CommonOperatorBuilder **)(param_1 + 200),
             *(MachineOperatorBuilder **)(param_1 + 0xc0),param_2);
  GraphAssembler::GraphAssembler(aGStack_2a8,*(JSGraph **)(param_1 + 0xd8),param_2,(Schedule *)0x0);
  SelectLowering::SelectLowering(aSStack_2c0,aGStack_2a8,*(Graph **)(param_1 + 0xa0));
  FUN_012a889c(param_1,local_1d0,aBStack_c8);
  FUN_012a889c(param_1,local_1d0,aDStack_200);
  FUN_012a889c(param_1,local_1d0,aMStack_e8);
  FUN_012a889c(param_1,local_1d0,aCStack_270);
  FUN_012a889c(param_1,local_1d0,aSStack_2c0);
  FUN_012a889c(param_1,local_1d0,aVStack_230);
  GraphReducer::ReduceGraph((GraphReducer *)local_1d0);
  SelectLowering::~SelectLowering(aSStack_2c0);
  GraphAssembler::~GraphAssembler(aGStack_2a8);
  MachineOperatorReducer::~MachineOperatorReducer(aMStack_e8);
  ValueNumberingReducer::~ValueNumberingReducer(aVStack_230);
  BranchElimination::~BranchElimination(aBStack_c8);
  GraphReducer::~GraphReducer((GraphReducer *)local_1d0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

