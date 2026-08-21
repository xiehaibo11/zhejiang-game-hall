
/* v8::internal::IterateAndScavengePromotedObjectsVisitor::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::IterateAndScavengePromotedObjectsVisitor::VisitEmbeddedPointer
          (IterateAndScavengePromotedObjectsVisitor *this,ulong param_2,undefined8 *param_3)

{
  Instruction IVar1;
  int iVar2;
  uint *puVar3;
  MemoryChunk *pMVar4;
  Instruction *this_00;
  long lVar5;
  undefined8 *local_18;
  
  this_00 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar5 = param_3[3];
    puVar3 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    local_18 = (undefined8 *)(lVar5 - 1U & 0xffffffff00000000 | (ulong)*puVar3);
  }
  else {
    IVar1 = this_00[3];
    local_18 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar1 == (Instruction)0x58) {
      local_18 = (undefined8 *)*local_18;
    }
  }
  if ((*(byte *)(((ulong)local_18 & 0xfffffffffffc0000) + 8) >> 3 & 1) == 0) {
    if ((this[0x10] != (IterateAndScavengePromotedObjectsVisitor)0x0) &&
       ((*(byte *)(((ulong)local_18 & 0xfffffffffffc0000) + 8) >> 6 & 1) != 0)) {
      RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                ((MemoryChunk *)(param_2 & 0xfffffffffffc0000),(ulong)&local_18);
    }
  }
  else {
    iVar2 = Scavenger::ScavengeObject<v8::internal::FullHeapObjectSlot>
                      (*(Scavenger **)(this + 8),&local_18);
    if (iVar2 == 0) {
      pMVar4 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
      if (*(long *)((ulong)pMVar4 | 0x70) == 0) {
        RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>
                  (pMVar4,(ulong)&local_18);
      }
      else {
        RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar4,(ulong)&local_18);
      }
    }
  }
  return;
}

