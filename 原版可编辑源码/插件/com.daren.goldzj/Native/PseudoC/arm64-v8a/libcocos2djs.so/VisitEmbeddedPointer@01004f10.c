
/* v8::internal::ScavengeVisitor::VisitEmbeddedPointer(v8::internal::Code, v8::internal::RelocInfo*)
    */

void __thiscall
v8::internal::ScavengeVisitor::VisitEmbeddedPointer
          (ScavengeVisitor *this,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  uint *puVar2;
  Instruction *this_00;
  long lVar3;
  undefined8 *local_28;
  
  this_00 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar3 = param_3[3];
    puVar2 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    local_28 = (undefined8 *)(lVar3 - 1U & 0xffffffff00000000 | (ulong)*puVar2);
  }
  else {
    IVar1 = this_00[3];
    local_28 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar1 == (Instruction)0x58) {
      local_28 = (undefined8 *)*local_28;
    }
  }
  if ((*(byte *)(((ulong)local_28 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
    Scavenger::ScavengeObject<v8::internal::FullHeapObjectSlot>(*(Scavenger **)(this + 8),&local_28)
    ;
  }
  return;
}

