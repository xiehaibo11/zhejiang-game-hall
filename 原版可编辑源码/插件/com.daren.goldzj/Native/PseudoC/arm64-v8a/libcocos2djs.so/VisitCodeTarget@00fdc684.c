
/* v8::internal::RecordMigratedSlotVisitor::VisitCodeTarget(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::RecordMigratedSlotVisitor::VisitCodeTarget
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
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
  MarkCompactCollector::RecordRelocSlot(param_2,param_3,(long)puVar2 + -0x3f);
  return;
}

