
/* v8::internal::compiler::InliningPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::InliningPhase::Run(InliningPhase *this,PipelineData *param_1,Zone *param_2)

{
  Graph *this_00;
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  uint *puVar4;
  Graph *pGVar5;
  long lVar6;
  undefined8 *puVar7;
  JSIntrinsicLowering aJStack_398 [32];
  JSNativeContextSpecialization aJStack_378 [88];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined **local_308;
  Node **local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined **local_2c8;
  Node **ppNStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  Zone *local_2a8;
  uint local_2a0;
  undefined8 local_298;
  __tree_node **pp_Stack_290;
  __tree_node *local_288;
  undefined8 uStack_280;
  CommonOperatorReducer aCStack_278 [64];
  CheckpointElimination aCStack_238 [16];
  DeadCodeElimination aDStack_228 [48];
  Node *local_1f8 [29];
  undefined **local_110;
  Node **ppNStack_108;
  undefined **local_100;
  Node **ppNStack_f8;
  Zone *local_f0;
  undefined8 uStack_e8;
  JSGraph *local_e0;
  JSHeapBroker *pJStack_d8;
  undefined8 local_d0;
  __tree_node **pp_Stack_c8;
  __tree_node *local_c0;
  Zone *pZStack_b8;
  undefined8 local_b0;
  __tree_node **pp_Stack_a8;
  __tree_node *local_a0;
  Zone *pZStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  JSGraph *local_80;
  JSHeapBroker *pJStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar7 = *(undefined8 **)(param_1 + 0xd8);
  lVar6 = *(long *)(param_1 + 0x18);
  pGVar5 = *(Graph **)(param_1 + 0xa0);
  pNVar3 = (Node *)puVar7[0x2c];
  if (pNVar3 == (Node *)0x0) {
    this_00 = (Graph *)*puVar7;
    pOVar2 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar7[1]);
    local_1f8[0] = (Node *)0x0;
    pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,0,local_1f8,false);
    puVar7[0x2c] = pNVar3;
  }
  GraphReducer::GraphReducer
            ((GraphReducer *)local_1f8,param_2,pGVar5,(TickCounter *)(lVar6 + 0x98),pNVar3);
  DeadCodeElimination::DeadCodeElimination
            (aDStack_228,(Editor *)local_1f8,*(Graph **)(param_1 + 0xa0),
             *(CommonOperatorBuilder **)(param_1 + 200),param_2);
  CheckpointElimination::CheckpointElimination(aCStack_238,(Editor *)local_1f8);
  CommonOperatorReducer::CommonOperatorReducer
            (aCStack_278,(Editor *)local_1f8,*(Graph **)(param_1 + 0xa0),
             *(JSHeapBroker **)(param_1 + 0x140),*(CommonOperatorBuilder **)(param_1 + 200),
             *(MachineOperatorBuilder **)(param_1 + 0xc0),param_2);
  puVar4 = *(uint **)(param_1 + 0x18);
  uStack_2f8 = *(undefined8 *)(param_1 + 0xd8);
  local_298 = *(undefined8 *)(param_1 + 0x138);
  local_2d0 = *(undefined8 *)(param_1 + 0x140);
  pp_Stack_290 = &local_288;
  local_2c8 = &PTR__JSCallReducer_01ccd228;
  local_2a0 = *puVar4 >> 5 & 1;
  local_288 = (__tree_node *)0x0;
  uStack_280 = 0;
  local_310 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_318 = *(undefined8 *)(param_1 + 0x1c0);
  local_320 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_2d8 = 0;
  if ((*puVar4 & 1) != 0) {
    uStack_2d8 = *(undefined8 *)(puVar4 + 8);
  }
  local_308 = &PTR__Reducer_01ccd9a8;
  local_300 = local_1f8;
  local_2f0 = local_320;
  uStack_2e8 = uStack_318;
  local_2e0 = local_310;
  ppNStack_2c0 = local_1f8;
  local_2b8 = uStack_2f8;
  uStack_2b0 = local_2d0;
  local_2a8 = param_2;
  JSNativeContextSpecialization::JSNativeContextSpecialization
            (aJStack_378,local_1f8,uStack_2f8,local_2d0,*puVar4 >> 5 & 1,local_298,param_2,
             *(undefined8 *)(lVar6 + 0x40));
  uStack_e8 = *(undefined8 *)(param_1 + 0x18);
  local_e0 = *(JSGraph **)(param_1 + 0xd8);
  pJStack_d8 = *(JSHeapBroker **)(param_1 + 0x140);
  local_d0 = *(undefined8 *)(param_1 + 0xa8);
  local_100 = &PTR__Reducer_01cbe8c8;
  pp_Stack_c8 = &local_c0;
  pp_Stack_a8 = &local_a0;
  local_c0 = (__tree_node *)0x0;
  local_a0 = (__tree_node *)0x0;
  local_b0 = 0;
  local_90 = 0;
  local_70 = 0;
  local_110 = &PTR__JSInliningHeuristic_01ccdb40;
  ppNStack_108 = local_1f8;
  ppNStack_f8 = local_1f8;
  local_f0 = param_2;
  pZStack_b8 = param_2;
  pZStack_98 = param_2;
  uStack_88 = local_d0;
  local_80 = local_e0;
  pJStack_78 = pJStack_d8;
  JSIntrinsicLowering::JSIntrinsicLowering(aJStack_398,(Editor *)local_1f8,local_e0,pJStack_d8);
  FUN_012a889c(param_1,local_1f8,aDStack_228);
  FUN_012a889c(param_1,local_1f8,aCStack_238);
  FUN_012a889c(param_1,local_1f8,aCStack_278);
  FUN_012a889c(param_1,local_1f8,aJStack_378);
  FUN_012a889c(param_1,local_1f8,&local_308);
  FUN_012a889c(param_1,local_1f8,aJStack_398);
  FUN_012a889c(param_1,local_1f8,&local_2c8);
  if ((**(byte **)(param_1 + 0x18) >> 1 & 1) != 0) {
    FUN_012a889c(param_1,local_1f8,&local_110);
  }
  GraphReducer::ReduceGraph((GraphReducer *)local_1f8);
  local_110 = &PTR__JSInliningHeuristic_01ccdb40;
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
  destroy((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
           *)&pp_Stack_a8,local_a0);
  std::__ndk1::
  __tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
  ::destroy((__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
             *)&pp_Stack_c8,local_c0);
  local_2c8 = &PTR__JSCallReducer_01ccd228;
  std::__ndk1::
  __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,std::__ndk1::allocator<v8::internal::compiler::Node*>>
  ::destroy((__tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,std::__ndk1::allocator<v8::internal::compiler::Node*>>
             *)&pp_Stack_290,local_288);
  GraphReducer::~GraphReducer((GraphReducer *)local_1f8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

