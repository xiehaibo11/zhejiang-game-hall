
/* v8::internal::compiler::ScheduledMachineLoweringPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::ScheduledMachineLoweringPhase::Run
          (ScheduledMachineLoweringPhase *this,PipelineData *param_1,Zone *param_2)

{
  long lVar1;
  code *pcVar2;
  ScheduledMachineLowering aSStack_160 [64];
  SelectLowering aSStack_120 [32];
  undefined **local_100;
  long alStack_b0 [4];
  long *local_90;
  long local_70;
  long local_68;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ScheduledMachineLowering::ScheduledMachineLowering
            (aSStack_160,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe8),param_2,
             *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
             *(undefined4 *)(*(long *)(param_1 + 0x18) + 4));
  ScheduledMachineLowering::Run(aSStack_160);
  Scheduler::ComputeSpecialRPO(param_2,*(Schedule **)(param_1 + 0xe8));
  if (FLAG_turbo_verify != '\0') {
    Scheduler::GenerateDominatorTree(*(Schedule **)(param_1 + 0xe8));
  }
  FUN_012a9278(*(undefined8 *)(param_1 + 0x18),param_1,*(undefined8 *)(param_1 + 0xe8),
               "machine lowered schedule");
  if (local_70 != 0) {
    local_68 = local_70;
  }
  local_100 = &PTR__MemoryLowering_01cd9578;
  if (alStack_b0 == local_90) {
    pcVar2 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_012aed24;
    pcVar2 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar2)();
LAB_012aed24:
  SelectLowering::~SelectLowering(aSStack_120);
  GraphAssembler::~GraphAssembler((GraphAssembler *)((ulong)aSStack_160 | 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

