
/* v8::internal::VerifyPointersVisitor::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::VerifyPointersVisitor::VisitEmbeddedPointer
          (VerifyPointersVisitor *this,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  uint *puVar2;
  ulong uVar3;
  Instruction *this_00;
  long lVar4;
  Heap *pHVar5;
  undefined8 *puVar6;
  
  this_00 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar4 = param_3[3];
    puVar2 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    puVar6 = (undefined8 *)(lVar4 - 1U & 0xffffffff00000000 | (ulong)*puVar2);
  }
  else {
    IVar1 = this_00[3];
    puVar6 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar1 == (Instruction)0x58) {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  pHVar5 = *(Heap **)(this + 0x10);
  uVar3 = ReadOnlyHeap::Contains(puVar6);
  if (((uVar3 & 1) == 0) && (uVar3 = Heap::Contains(pHVar5,puVar6), (uVar3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidHeapObject(heap_, heap_object)");
  }
  if (*(short *)(((ulong)puVar6 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)(((ulong)puVar6 & 0xffffffff00000000 |
                                 (ulong)*(uint *)((long)puVar6 + -1)) - 1)) == 0xa2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","heap_object.map().IsMap()");
}

