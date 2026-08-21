
/* v8::internal::compiler::MemoryOptimizer::MergeStates(v8::internal::ZoneVector<v8::internal::compiler::MemoryLowering::AllocationState
   const*> const&) */

AllocationState * __thiscall
v8::internal::compiler::MemoryOptimizer::MergeStates(MemoryOptimizer *this,ZoneVector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Zone *this_00;
  AllocationGroup *pAVar3;
  ulong uVar4;
  ulong uVar5;
  AllocationState *this_01;
  
  puVar2 = *(undefined8 **)param_1;
  this_01 = (AllocationState *)*puVar2;
  uVar4 = *(long *)(param_1 + 8) - (long)puVar2 >> 3;
  pAVar3 = *(AllocationGroup **)this_01;
  if (1 < uVar4) {
    uVar5 = 1;
    do {
      puVar1 = puVar2 + uVar5;
      uVar5 = uVar5 + 1;
      if ((AllocationState *)*puVar1 != this_01) {
        this_01 = (AllocationState *)0x0;
      }
      if (*(AllocationGroup **)*puVar1 != pAVar3) {
        pAVar3 = (AllocationGroup *)0x0;
      }
    } while (uVar5 < uVar4);
  }
  if (this_01 == (AllocationState *)0x0) {
    if (pAVar3 == (AllocationGroup *)0x0) {
      this_01 = *(AllocationState **)(this + 0xd8);
    }
    else {
      this_00 = *(Zone **)(this + 0x150);
      this_01 = *(AllocationState **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x20) {
        this_01 = (AllocationState *)Zone::NewExpand(this_00,0x20);
      }
      else {
        *(AllocationState **)(this_00 + 0x10) = this_01 + 0x20;
      }
      MemoryLowering::AllocationState::AllocationState(this_01,pAVar3,(Node *)0x0);
    }
  }
  return this_01;
}

