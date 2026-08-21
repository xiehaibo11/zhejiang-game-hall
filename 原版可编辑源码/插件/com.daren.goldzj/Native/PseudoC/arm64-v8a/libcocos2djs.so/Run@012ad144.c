
/* v8::internal::compiler::CopyMetadataForConcurrentCompilePhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::CopyMetadataForConcurrentCompilePhase::Run
          (CopyMetadataForConcurrentCompilePhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  undefined8 *puVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *pGVar5;
  undefined8 *puVar6;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  Zone *pZStack_150;
  JSHeapCopyReducer aJStack_148 [16];
  Node *local_138 [29];
  
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
  JSHeapCopyReducer::JSHeapCopyReducer(aJStack_148,*(JSHeapBroker **)(param_1 + 0x140));
  FUN_012a889c(param_1,local_138,aJStack_148);
  GraphReducer::ReduceGraph((GraphReducer *)local_138);
  local_168 = (undefined8 *)0x0;
  local_160 = (undefined8 *)0x0;
  local_158 = 0;
  pZStack_150 = param_2;
  JSGraph::GetCachedNodes(*(JSGraph **)(param_1 + 0xd8),(ZoneVector *)&local_168);
  puVar1 = local_160;
  for (puVar6 = local_168; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    GraphReducer::ReduceNode((GraphReducer *)local_138,(Node *)*puVar6);
  }
  if (local_168 != (undefined8 *)0x0) {
    local_160 = local_168;
  }
  GraphReducer::~GraphReducer((GraphReducer *)local_138);
  return;
}

