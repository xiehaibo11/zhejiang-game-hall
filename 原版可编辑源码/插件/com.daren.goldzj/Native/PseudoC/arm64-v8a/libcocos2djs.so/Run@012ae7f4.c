
/* v8::internal::compiler::MemoryOptimizationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::MemoryOptimizationPhase::Run
          (MemoryOptimizationPhase *this,PipelineData *param_1,Zone *param_2)

{
  uint *puVar1;
  long lVar2;
  long local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  Zone *pZStack_1d8;
  GraphTrimmer aGStack_1d0 [48];
  MemoryOptimizer aMStack_1a0 [360];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  GraphTrimmer::GraphTrimmer(aGStack_1d0,param_2,*(Graph **)(param_1 + 0xa0));
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  pZStack_1d8 = param_2;
  JSGraph::GetCachedNodes(*(JSGraph **)(param_1 + 0xd8),(ZoneVector *)&local_1f0);
  GraphTrimmer::TrimGraph<std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>>
            (aGStack_1d0,local_1f0,local_1e8);
  puVar1 = *(uint **)(param_1 + 0x18);
  MemoryOptimizer::MemoryOptimizer
            (aMStack_1a0,*(undefined8 *)(param_1 + 0xd8),param_2,puVar1[1],
             (*puVar1 >> 0xb ^ 0xffffffff) & 1,*(undefined8 *)(param_1 + 0x20),puVar1 + 0x26);
  MemoryOptimizer::Optimize(aMStack_1a0);
  MemoryOptimizer::~MemoryOptimizer(aMStack_1a0);
  if (local_1f0 != 0) {
    local_1e8 = local_1f0;
  }
  GraphTrimmer::~GraphTrimmer(aGStack_1d0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

