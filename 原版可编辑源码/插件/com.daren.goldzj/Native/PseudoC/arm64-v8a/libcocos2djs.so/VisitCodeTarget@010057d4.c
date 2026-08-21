
/* v8::internal::IterateAndScavengePromotedObjectsVisitor::VisitCodeTarget(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::IterateAndScavengePromotedObjectsVisitor::VisitCodeTarget
          (IterateAndScavengePromotedObjectsVisitor *this,ulong param_2,undefined8 *param_3)

{
  Instruction IVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  MemoryChunk *pMVar6;
  ulong local_38;
  
  IVar1 = ((Instruction *)*param_3)[3];
  puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget((Instruction *)*param_3);
  if (IVar1 == (Instruction)0x58) {
    puVar3 = (undefined8 *)*puVar3;
  }
  puVar4 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
  uVar5 = Isolate::CurrentEmbeddedBlobSize();
  if ((puVar4 <= puVar3) && (puVar3 < (undefined8 *)((long)puVar4 + (uVar5 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  local_38 = (long)puVar3 - 0x3f;
  if ((*(byte *)((local_38 & 0xfffffffffffc0000) + 8) >> 3 & 1) == 0) {
    if ((this[0x10] != (IterateAndScavengePromotedObjectsVisitor)0x0) &&
       ((*(byte *)((local_38 & 0xfffffffffffc0000) + 8) >> 6 & 1) != 0)) {
      RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                ((MemoryChunk *)(param_2 & 0xfffffffffffc0000),(ulong)&local_38);
    }
  }
  else {
    iVar2 = Scavenger::ScavengeObject<v8::internal::FullHeapObjectSlot>
                      (*(Scavenger **)(this + 8),&local_38);
    if (iVar2 == 0) {
      pMVar6 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
      if (*(long *)((ulong)pMVar6 | 0x70) == 0) {
        RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>
                  (pMVar6,(ulong)&local_38);
      }
      else {
        RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar6,(ulong)&local_38);
      }
    }
  }
  return;
}

