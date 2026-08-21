
/* v8::internal::compiler::StoreStoreEliminationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::StoreStoreEliminationPhase::Run
          (StoreStoreEliminationPhase *this,PipelineData *param_1,Zone *param_2)

{
  long local_70;
  long local_68;
  undefined8 local_60;
  Zone *pZStack_58;
  GraphTrimmer aGStack_50 [48];
  
  GraphTrimmer::GraphTrimmer(aGStack_50,param_2,*(Graph **)(param_1 + 0xa0));
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  pZStack_58 = param_2;
  JSGraph::GetCachedNodes(*(JSGraph **)(param_1 + 0xd8),(ZoneVector *)&local_70);
  GraphTrimmer::TrimGraph<std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>>
            (aGStack_50,local_70,local_68);
  StoreStoreElimination::Run
            (*(JSGraph **)(param_1 + 0xd8),(TickCounter *)(*(long *)(param_1 + 0x18) + 0x98),param_2
            );
  if (local_70 != 0) {
    local_68 = local_70;
  }
  GraphTrimmer::~GraphTrimmer(aGStack_50);
  return;
}

