
/* v8::internal::IndexedReferencesExtractor::VisitCodeTarget(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::IndexedReferencesExtractor::VisitCodeTarget
          (IndexedReferencesExtractor *this,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  Instruction IVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  IVar2 = ((Instruction *)*param_3)[3];
  puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget((Instruction *)*param_3);
  if (IVar2 == (Instruction)0x58) {
    puVar3 = (undefined8 *)*puVar3;
  }
  puVar4 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
  uVar5 = Isolate::CurrentEmbeddedBlobSize();
  if ((puVar4 <= puVar3) && (puVar3 < (undefined8 *)((long)puVar4 + (uVar5 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  iVar1 = *(int *)(this + 0x30);
  *(int *)(this + 0x30) = iVar1 + 1;
  V8HeapExplorer::SetHiddenReference
            (*(V8HeapExplorer **)(this + 8),*(undefined8 *)(this + 0x10),
             *(undefined8 *)(this + 0x28),iVar1,(long)puVar3 + -0x3f,0xfffffffc);
  return;
}

