
/* v8::internal::Serializer::ObjectSerializer::VisitCodeTarget(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::VisitCodeTarget
          (ObjectSerializer *this,undefined8 param_2,RelocInfo *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  
  IVar1 = (*(Instruction **)param_3)[3];
  puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)param_3);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  puVar3 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
  uVar4 = Isolate::CurrentEmbeddedBlobSize();
  if ((puVar3 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar3 + (uVar4 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),(long)puVar2 + -0x3f);
  uVar4 = RelocInfo::IsCodedSpecially(param_3);
  if ((uVar4 & 1) == 0) {
    iVar5 = 4;
    if (*(char *)(*(long *)param_3 + 3) != '\x18') {
      iVar5 = 8;
    }
  }
  else {
    iVar5 = 0;
  }
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + iVar5;
  return;
}

