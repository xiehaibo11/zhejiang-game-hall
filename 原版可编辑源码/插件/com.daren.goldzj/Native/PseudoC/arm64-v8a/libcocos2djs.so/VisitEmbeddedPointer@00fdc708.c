
/* v8::internal::RecordMigratedSlotVisitor::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::RecordMigratedSlotVisitor::VisitEmbeddedPointer
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  Instruction *this;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  this = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar3 = param_3[3];
    puVar2 = (uint *)Instruction::ImmPCOffsetTarget(this);
    puVar4 = (undefined8 *)(lVar3 - 1U & 0xffffffff00000000 | (ulong)*puVar2);
  }
  else {
    IVar1 = this[3];
    puVar4 = (undefined8 *)Instruction::ImmPCOffsetTarget(this);
    if (IVar1 == (Instruction)0x58) {
      puVar4 = (undefined8 *)*puVar4;
    }
  }
  if ((*(byte *)(((ulong)puVar4 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
    Heap_GenerationalBarrierForCodeSlow(param_2,param_3,puVar4);
  }
  MarkCompactCollector::RecordRelocSlot(param_2,param_3,puVar4);
  return;
}

