
/* v8::internal::IndexedReferencesExtractor::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::IndexedReferencesExtractor::VisitEmbeddedPointer
          (IndexedReferencesExtractor *this,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  Instruction IVar2;
  uint *puVar3;
  ulong *puVar4;
  Instruction *this_00;
  long lVar5;
  
  this_00 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar5 = param_3[3];
    puVar3 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    puVar4 = (ulong *)(lVar5 - 1U & 0xffffffff00000000 | (ulong)*puVar3);
  }
  else {
    IVar2 = this_00[3];
    puVar4 = (ulong *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar2 == (Instruction)0x58) {
      puVar4 = (ulong *)*puVar4;
    }
  }
  iVar1 = *(int *)(this + 0x30);
  *(int *)(this + 0x30) = iVar1 + 1;
  V8HeapExplorer::SetHiddenReference
            (*(V8HeapExplorer **)(this + 8),*(undefined8 *)(this + 0x10),
             *(undefined8 *)(this + 0x28),iVar1,puVar4,0xfffffffc);
  return;
}

