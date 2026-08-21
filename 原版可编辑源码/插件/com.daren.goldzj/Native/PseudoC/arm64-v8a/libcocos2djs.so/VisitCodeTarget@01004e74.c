
/* v8::internal::ScavengeVisitor::VisitCodeTarget(v8::internal::Code, v8::internal::RelocInfo*) */

void __thiscall
v8::internal::ScavengeVisitor::VisitCodeTarget
          (ScavengeVisitor *this,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong local_18;
  
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
  local_18 = (long)puVar2 - 0x3f;
  if ((*(byte *)((local_18 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
    Scavenger::ScavengeObject<v8::internal::FullHeapObjectSlot>(*(Scavenger **)(this + 8),&local_18)
    ;
  }
  return;
}

