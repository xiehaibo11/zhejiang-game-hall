
/* v8::internal::VerifyPointersVisitor::VisitCodeTarget(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::VerifyPointersVisitor::VisitCodeTarget
          (VerifyPointersVisitor *this,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  Heap *pHVar6;
  
  IVar1 = ((Instruction *)*param_3)[3];
  puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget((Instruction *)*param_3);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  puVar3 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
  uVar4 = Isolate::CurrentEmbeddedBlobSize();
  if ((puVar3 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar3 + (uVar4 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  pHVar6 = *(Heap **)(this + 0x10);
  uVar5 = (long)puVar2 - 0x3f;
  uVar4 = ReadOnlyHeap::Contains(uVar5);
  if (((uVar4 & 1) == 0) && (uVar4 = Heap::Contains(pHVar6,uVar5), (uVar4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidHeapObject(heap_, heap_object)");
  }
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(puVar2 + -8)) - 1))
      == 0xa2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","heap_object.map().IsMap()");
}

