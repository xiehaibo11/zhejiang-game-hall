
/* v8::internal::Serializer::ObjectSerializer::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::VisitEmbeddedPointer
          (ObjectSerializer *this,undefined8 param_2,RelocInfo *param_3)

{
  Instruction IVar1;
  uint *puVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  Instruction *this_00;
  long lVar6;
  
  this_00 = *(Instruction **)param_3;
  if (param_3[8] == (RelocInfo)0x2) {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar6 = *(long *)(param_3 + 0x18);
    puVar2 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    puVar4 = (ulong *)(lVar6 - 1U & 0xffffffff00000000 | (ulong)*puVar2);
  }
  else {
    IVar1 = this_00[3];
    puVar4 = (ulong *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar1 == (Instruction)0x58) {
      puVar4 = (ulong *)*puVar4;
    }
  }
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),puVar4);
  uVar3 = RelocInfo::IsCodedSpecially(param_3);
  if ((uVar3 & 1) == 0) {
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

