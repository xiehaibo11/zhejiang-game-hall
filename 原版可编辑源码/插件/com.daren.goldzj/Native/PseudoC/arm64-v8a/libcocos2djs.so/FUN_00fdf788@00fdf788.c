
void FUN_00fdf788(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
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
  if (((*(byte *)(((long)puVar2 - 0x3fU & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
     (uVar4 = (**(code **)(*param_1 + 0xb0))(param_1), (uVar4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "Heap::InYoungGeneration(heap_object) implies IsMarked(heap_object)");
  }
  return;
}

