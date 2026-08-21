
void FUN_00fda964(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  IVar1 = ((Instruction *)*param_3)[3];
  puVar2 = (undefined8 *)v8::internal::Instruction::ImmPCOffsetTarget((Instruction *)*param_3);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  puVar3 = (undefined8 *)v8::internal::Isolate::CurrentEmbeddedBlob();
  uVar4 = v8::internal::Isolate::CurrentEmbeddedBlobSize();
  if ((puVar3 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar3 + (uVar4 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  uVar4 = (long)puVar2 - 0x3fU & 0xfffffffffffc0000;
  uVar5 = *(ulong *)(uVar4 + 8);
  if (((uVar5 & 0x18) != 0) && (((uint)uVar5 >> 4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "Heap::InYoungGeneration(heap_object) implies Heap::InToPage(heap_object)");
  }
  if ((*(byte *)(uVar4 + 8) >> 6 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!MarkCompactCollector::IsOnEvacuationCandidate(heap_object)");
}

