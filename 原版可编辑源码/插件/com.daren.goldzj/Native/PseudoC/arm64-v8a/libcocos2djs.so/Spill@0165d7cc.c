
/* v8::internal::compiler::RegisterAllocator::Spill(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

void __thiscall
v8::internal::compiler::RegisterAllocator::Spill(RegisterAllocator *this,uint *param_1,uint param_3)

{
  TopLevelLiveRange *pTVar1;
  uint uVar2;
  Zone *this_00;
  uint uVar3;
  TopLevelLiveRange *pTVar4;
  SpillRange *this_01;
  undefined8 *puVar5;
  
  pTVar4 = *(TopLevelLiveRange **)(param_1 + 8);
  if (((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) &&
     (PrintF("Spilling live range %d:%d mode %d\n",(ulong)*(uint *)(pTVar4 + 0x5c),(ulong)*param_1,
             (ulong)param_3), (*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0)) {
    PrintF("Starting spill type is %d\n",(ulong)(*(uint *)(pTVar4 + 4) >> 5 & 3));
  }
  if (((byte)pTVar4[4] & 0x60) == 0) {
    puVar5 = *(undefined8 **)this;
    if ((*(byte *)(puVar5 + 0x3a) >> 2 & 1) != 0) {
      PrintF("New spill range needed");
      puVar5 = *(undefined8 **)this;
    }
    this_01 = *(SpillRange **)(pTVar4 + 0x70);
    if (this_01 == (SpillRange *)0x0) {
      this_00 = (Zone *)*puVar5;
      this_01 = *(SpillRange **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x38) {
        this_01 = (SpillRange *)Zone::NewExpand(this_00,0x38);
      }
      else {
        *(SpillRange **)(this_00 + 0x10) = this_01 + 0x38;
      }
      SpillRange::SpillRange(this_01,pTVar4,(Zone *)*puVar5);
    }
    uVar2 = *(uint *)(pTVar4 + 4);
    uVar3 = uVar2 & 0xffffff9f | 0x40;
    if ((uVar2 & 0x60) != 0x40 && param_3 == 1) {
      uVar3 = uVar2 | 0x60;
    }
    *(uint *)(pTVar4 + 4) = uVar3;
    pTVar1 = pTVar4;
    if (*(TopLevelLiveRange **)(pTVar4 + 0x68) != (TopLevelLiveRange *)0x0) {
      pTVar1 = *(TopLevelLiveRange **)(pTVar4 + 0x68);
    }
    *(SpillRange **)(puVar5[0x25] + (long)*(int *)(pTVar1 + 0x5c) * 8) = this_01;
  }
  if ((param_3 == 0) && (uVar3 = *(uint *)(pTVar4 + 4), (~uVar3 & 0x60) == 0)) {
    if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
      PrintF("Upgrading\n");
      uVar3 = *(uint *)(pTVar4 + 4);
    }
    *(uint *)(pTVar4 + 4) = uVar3 & 0xffffff9f | 0x40;
  }
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Final spill type is %d\n",(ulong)(*(uint *)(pTVar4 + 4) >> 5 & 3));
  }
  param_1[1] = param_1[1] & 0xffffe07f | 0x1001;
  return;
}

