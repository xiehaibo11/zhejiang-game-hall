
/* v8::internal::compiler::MemoryOptimizer::MemoryOptimizer(v8::internal::compiler::JSGraph*,
   v8::internal::Zone*, v8::internal::PoisoningMitigationLevel,
   v8::internal::compiler::MemoryLowering::AllocationFolding, char const*,
   v8::internal::TickCounter*) */

void __thiscall
v8::internal::compiler::MemoryOptimizer::MemoryOptimizer
          (MemoryOptimizer *this,JSGraph *param_1,Zone *param_2,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  AllocationState *this_00;
  code *pcVar2;
  undefined **local_a0;
  code *pcStack_98;
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  GraphAssembler::GraphAssembler((GraphAssembler *)this,param_1,param_2,(Schedule *)0x0);
  local_a0 = &PTR_FUN_01cd95b0;
  pcStack_98 = FUN_017940ac;
  local_80 = (long *)&local_a0;
  MemoryLowering::MemoryLowering
            ((MemoryLowering *)(this + 0x40),param_1,param_2,this,param_4,param_5,&local_a0,param_6)
  ;
  if (&local_a0 == (undefined ***)local_80) {
    pcVar2 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_01794018;
    pcVar2 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar2)();
LAB_01794018:
  *(JSGraph **)(this + 0xd0) = param_1;
  this_00 = *(AllocationState **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)this_00) < 0x20) {
    this_00 = (AllocationState *)Zone::NewExpand(param_2,0x20);
  }
  else {
    *(AllocationState **)(param_2 + 0x10) = this_00 + 0x20;
  }
  MemoryLowering::AllocationState::AllocationState(this_00);
  *(undefined8 *)(this + 0xe8) = 0;
  *(Zone **)(this + 0xf0) = param_2;
  *(undefined8 *)(this + 0xf8) = 0;
  *(AllocationState **)(this + 0xd8) = this_00;
  *(MemoryOptimizer **)(this + 0xe0) = this + 0xe8;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(Zone **)(this + 0x120) = param_2;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(Zone **)(this + 0x140) = param_2;
  *(undefined8 *)(this + 0x148) = 0;
  *(Zone **)(this + 0x150) = param_2;
  *(undefined8 *)(this + 0x158) = param_7;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

