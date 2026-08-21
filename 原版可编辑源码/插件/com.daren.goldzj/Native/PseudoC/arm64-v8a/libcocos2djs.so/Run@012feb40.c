
/* v8::internal::compiler::Typer::Run(v8::internal::ZoneVector<v8::internal::compiler::Node*>
   const&, v8::internal::compiler::LoopVariableOptimizer*) */

void __thiscall
v8::internal::compiler::Typer::Run(Typer *this,ZoneVector *param_1,LoopVariableOptimizer *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  GraphReducer aGStack_1a0 [232];
  undefined **local_b8;
  Typer *local_b0;
  LoopVariableOptimizer *pLStack_a8;
  __tree_node **local_a0;
  __tree_node *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 != (LoopVariableOptimizer *)0x0) {
    LoopVariableOptimizer::ChangeToInductionVariablePhis(param_2);
  }
  local_a0 = &local_98;
  local_b8 = &PTR__Visitor_01cc3b20;
  local_90 = **(undefined8 **)(this + 8);
  local_98 = (__tree_node *)0x0;
  uStack_88 = 0;
  local_70 = **(undefined8 **)(this + 8);
  local_80 = 0;
  uStack_78 = 0;
  local_50 = 0x3f800000;
  local_68 = 0;
  uStack_58 = 0;
  local_b0 = this;
  pLStack_a8 = param_2;
  local_60 = local_70;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
            *)&local_80,100);
  GraphReducer::GraphReducer
            (aGStack_1a0,*(Zone **)*(Graph **)(this + 8),*(Graph **)(this + 8),
             *(TickCounter **)(this + 0x98),(Node *)0x0);
  GraphReducer::AddReducer(aGStack_1a0,(Reducer *)&local_b8);
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (puVar4 = *(undefined8 **)param_1; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    GraphReducer::ReduceNode(aGStack_1a0,(Node *)*puVar4);
  }
  GraphReducer::ReduceGraph(aGStack_1a0);
  if (param_2 != (LoopVariableOptimizer *)0x0) {
    LoopVariableOptimizer::ChangeToPhisAndInsertGuards(param_2);
  }
  GraphReducer::~GraphReducer(aGStack_1a0);
  local_b8 = &PTR__Visitor_01cc3b20;
  for (plVar3 = (long *)local_68; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
  }
  local_80 = 0;
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
  destroy((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
           *)&local_a0,local_98);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

