
/* v8::internal::compiler::Scheduler::ComputeSpecialRPONumbering() */

void __thiscall v8::internal::compiler::Scheduler::ComputeSpecialRPONumbering(Scheduler *this)

{
  SpecialRPONumberer *this_00;
  Zone *this_01;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- COMPUTING SPECIAL RPO ----------------------------------\n");
  }
  this_01 = *(Zone **)this;
  this_00 = *(SpecialRPONumberer **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0xa8) {
    this_00 = (SpecialRPONumberer *)Zone::NewExpand(this_01,0xa8);
  }
  else {
    *(SpecialRPONumberer **)(this_01 + 0x10) = this_00 + 0xa8;
  }
  uVar1 = *(undefined8 *)this;
  uVar2 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)this_00 = uVar1;
  *(undefined8 *)(this_00 + 8) = uVar2;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = uVar1;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = uVar1;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = uVar1;
  *(undefined8 *)(this_00 + 0xa0) = uVar1;
  *(SpecialRPONumberer **)(this + 0xd8) = this_00;
  SpecialRPONumberer::ComputeAndInsertSpecialRPO
            (this_00,*(BasicBlock **)(*(long *)(this_00 + 8) + 0x68),
             *(BasicBlock **)(*(long *)(this_00 + 8) + 0x70));
  return;
}

