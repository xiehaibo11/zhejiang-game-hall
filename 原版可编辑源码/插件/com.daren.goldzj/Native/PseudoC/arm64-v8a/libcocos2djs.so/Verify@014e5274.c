
/* v8::internal::RelocInfo::Verify(v8::internal::Isolate*) */

void __thiscall v8::internal::RelocInfo::Verify(RelocInfo *this,Isolate *param_1)

{
  Instruction IVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  Instruction *this_00;
  long lVar8;
  ulong uVar9;
  long local_18;
  
  switch(this[8]) {
  case (RelocInfo)0x0:
  case (RelocInfo)0x1:
    IVar1 = (*(Instruction **)this)[3];
    puVar5 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)this);
    if (IVar1 == (Instruction)0x58) {
      puVar5 = (undefined8 *)*puVar5;
    }
    if (puVar5 == (undefined8 *)0x0) {
LAB_014e5490:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","addr != kNullAddress");
    }
    puVar3 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
    uVar9 = Isolate::CurrentEmbeddedBlobSize();
    if ((puVar3 <= puVar5) && (puVar5 < (undefined8 *)((long)puVar3 + (uVar9 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","address < start || address >= end");
    }
    uVar9 = Isolate::FindCodeObject(param_1,(ulong)puVar5);
    if (((uVar9 & 1) == 0) ||
       (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x9a)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","found.IsCode()");
    }
    if ((long)puVar5 - 0x3fU != uVar9) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","code.address() == HeapObject::cast(found).address()");
    }
    break;
  case (RelocInfo)0x2:
  case (RelocInfo)0x3:
    this_00 = *(Instruction **)this;
    if (this[8] == (RelocInfo)0x2) {
      if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
      }
      lVar8 = *(long *)(this + 0x18);
      puVar4 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
      puVar7 = (ulong *)(lVar8 - 1U & 0xffffffff00000000 | (ulong)*puVar4);
    }
    else {
      IVar1 = this_00[3];
      puVar7 = (ulong *)Instruction::ImmPCOffsetTarget(this_00);
      if (IVar1 == (Instruction)0x58) {
        puVar7 = (ulong *)*puVar7;
      }
    }
    Object::VerifyPointer(param_1,puVar7);
    return;
  case (RelocInfo)0x8:
  case (RelocInfo)0x9:
    uVar9 = **(ulong **)this;
    local_18 = Isolate::FindCodeObject(param_1,(ulong)*(ulong **)this);
    if (*(int *)(local_18 + 0x17) < 0) {
      uVar6 = Code::OffHeapInstructionStart((Code *)&local_18);
    }
    else {
      uVar6 = local_18 + 0x3f;
    }
    if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","target >= code.InstructionStart()");
    }
    if (*(int *)(local_18 + 0x17) < 0) {
      uVar6 = Code::OffHeapInstructionEnd((Code *)&local_18);
    }
    else {
      uVar6 = local_18 + *(int *)(local_18 + 0x13) + 0x3f;
    }
    if (uVar6 < uVar9) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","target <= code.InstructionEnd()");
    }
    break;
  case (RelocInfo)0xa:
    IVar1 = (*(Instruction **)this)[3];
    puVar5 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)this);
    if (IVar1 == (Instruction)0x58) {
      puVar5 = (undefined8 *)*puVar5;
    }
    if (puVar5 == (undefined8 *)0x0) goto LAB_014e5490;
    iVar2 = InstructionStream::TryLookupCode(param_1,(ulong)puVar5);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!InstructionStream::TryLookupCode(isolate, addr).is_null()");
    }
    break;
  case (RelocInfo)0x11:
  case (RelocInfo)0x12:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return;
}

