
/* v8::internal::compiler::ControlFlowOptimizationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::ControlFlowOptimizationPhase::Run
          (ControlFlowOptimizationPhase *this,PipelineData *param_1,Zone *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ControlFlowOptimizer aCStack_a0 [24];
  long *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long local_60;
  long local_40;
  
  ControlFlowOptimizer::ControlFlowOptimizer
            (aCStack_a0,*(Graph **)(param_1 + 0xa0),*(CommonOperatorBuilder **)(param_1 + 200),
             *(MachineOperatorBuilder **)(param_1 + 0xc0),
             (TickCounter *)(*(long *)(param_1 + 0x18) + 0x98),param_2);
  ControlFlowOptimizer::Optimize(aCStack_a0);
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_88);
  if (local_80 == local_78) {
LAB_012ae5bc:
    if (((local_88 != (long *)0x0) && (0xf < (ulong)(local_70 - (long)local_88))) &&
       ((uVar1 = local_70 - (long)local_88 >> 3, local_60 == 0 ||
        (*(ulong *)(local_60 + 8) <= uVar1)))) {
      local_88[1] = uVar1;
      *local_88 = local_60;
    }
    return;
  }
  plVar3 = (long *)*local_80;
  plVar2 = (long *)local_40;
  if (local_40 != 0) goto LAB_012ae58c;
  do {
    plVar2 = plVar3;
    plVar2[1] = 0x200;
    *plVar2 = local_40;
    local_40 = (long)plVar2;
    do {
      local_80 = local_80 + 1;
      if (local_78 == local_80) goto LAB_012ae5bc;
      plVar3 = (long *)*local_80;
      if (plVar2 == (long *)0x0) break;
LAB_012ae58c:
    } while (0x200 < *(ulong *)((long)plVar2 + 8));
  } while( true );
}

