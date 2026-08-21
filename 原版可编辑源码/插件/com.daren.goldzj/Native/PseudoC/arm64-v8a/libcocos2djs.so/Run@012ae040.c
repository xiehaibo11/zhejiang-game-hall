
/* v8::internal::compiler::GenericLoweringPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::GenericLoweringPhase::Run
          (GenericLoweringPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *pNVar2;
  long lVar3;
  Graph *pGVar4;
  undefined8 *puVar5;
  JSGenericLowering aJStack_158 [32];
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
  JSGenericLowering::JSGenericLowering
            (aJStack_158,*(JSGraph **)(param_1 + 0xd8),(Editor *)local_138,
             *(JSHeapBroker **)(param_1 + 0x140));
  FUN_012a889c(param_1,local_138,aJStack_158);
  GraphReducer::ReduceGraph((GraphReducer *)local_138);
  JSGenericLowering::~JSGenericLowering(aJStack_158);
  GraphReducer::~GraphReducer((GraphReducer *)local_138);
  return;
}

