
/* v8::internal::compiler::EscapeAnalysisPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::EscapeAnalysisPhase::Run
          (EscapeAnalysisPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *pGVar5;
  undefined8 *puVar6;
  Node *local_320 [29];
  undefined **local_238 [4];
  long local_218;
  long local_210;
  undefined8 local_1f0;
  long *local_1d8;
  long local_1b8;
  long local_1b0;
  __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  a_Stack_198 [8];
  __tree_node *local_190;
  EscapeAnalysis aEStack_170 [8];
  long local_168;
  undefined8 local_78;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  EscapeAnalysis::EscapeAnalysis
            (aEStack_170,*(JSGraph **)(param_1 + 0xd8),
             (TickCounter *)(*(long *)(param_1 + 0x18) + 0x98),param_2);
  EffectGraphReducer::ReduceFrom((EffectGraphReducer *)aEStack_170,*(Node **)(local_168 + 0x10));
  puVar6 = *(undefined8 **)(param_1 + 0xd8);
  lVar4 = *(long *)(param_1 + 0x18);
  pGVar5 = *(Graph **)(param_1 + 0xa0);
  pNVar3 = (Node *)puVar6[0x2c];
  if (pNVar3 == (Node *)0x0) {
    this_00 = (Graph *)*puVar6;
    pOVar2 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar6[1]);
    local_320[0] = (Node *)0x0;
    pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,0,local_320,false);
    puVar6[0x2c] = pNVar3;
  }
  GraphReducer::GraphReducer
            ((GraphReducer *)local_320,param_2,pGVar5,(TickCounter *)(lVar4 + 0x98),pNVar3);
  EscapeAnalysisReducer::EscapeAnalysisReducer
            ((EscapeAnalysisReducer *)local_238,local_320,*(undefined8 *)(param_1 + 0xd8),local_78,
             param_2);
  FUN_012a889c(param_1,local_320,local_238);
  GraphReducer::ReduceGraph((GraphReducer *)local_320);
  EscapeAnalysisReducer::VerifyReplacement((EscapeAnalysisReducer *)local_238);
  local_238[0] = &PTR__EscapeAnalysisReducer_01ccced8;
  std::__ndk1::
  __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  ::destroy(a_Stack_198,local_190);
  if (local_1b8 != 0) {
    local_1b0 = local_1b8;
  }
  for (; local_1d8 != (long *)0x0; local_1d8 = (long *)*local_1d8) {
  }
  local_1f0 = 0;
  if (local_218 != 0) {
    local_210 = local_218;
  }
  GraphReducer::~GraphReducer((GraphReducer *)local_320);
  EffectGraphReducer::~EffectGraphReducer((EffectGraphReducer *)aEStack_170);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

