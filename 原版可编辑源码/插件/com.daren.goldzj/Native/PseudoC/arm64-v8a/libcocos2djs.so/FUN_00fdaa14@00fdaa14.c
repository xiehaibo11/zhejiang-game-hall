
void FUN_00fdaa14(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  Instruction *this;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  this = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar4 = param_3[3];
    puVar2 = (uint *)v8::internal::Instruction::ImmPCOffsetTarget(this);
    puVar3 = (undefined8 *)(lVar4 - 1U & 0xffffffff00000000 | (ulong)*puVar2);
  }
  else {
    IVar1 = this[3];
    puVar3 = (undefined8 *)v8::internal::Instruction::ImmPCOffsetTarget(this);
    if (IVar1 == (Instruction)0x58) {
      puVar3 = (undefined8 *)*puVar3;
    }
  }
  uVar5 = *(ulong *)(((ulong)puVar3 & 0xfffffffffffc0000) + 8);
  if (((uVar5 & 0x18) != 0) && (((uint)uVar5 >> 4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "Heap::InYoungGeneration(heap_object) implies Heap::InToPage(heap_object)");
  }
  if ((*(byte *)(((ulong)puVar3 & 0xfffffffffffc0000) + 8) >> 6 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!MarkCompactCollector::IsOnEvacuationCandidate(heap_object)");
}

