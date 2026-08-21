
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessLdaLookupContextSlot(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessLdaLookupContextSlot
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ObjectRef aOStack_50 [16];
  
  uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand((BytecodeArrayAccessor *)param_1,1);
  iVar3 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                    ((BytecodeArrayAccessor *)param_1,2);
  puVar7 = *(undefined8 **)this;
  uVar4 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,0,(Isolate *)*puVar7);
  ObjectRef::ObjectRef(aOStack_50,puVar7,uVar4,0);
  uVar5 = ObjectRef::IsName(aOStack_50);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  ProcessCheckContextExtensions(this,iVar3);
  lVar6 = *(long *)(this + 0x28);
  uVar1 = *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x18);
  if ((-1 < (int)uVar1) &&
     ((ulong)(*(long *)(lVar6 + 0x38) - *(long *)(lVar6 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 *)(*(long *)(lVar6 + 0x30) + (long)(int)uVar1 * 8) = 0;
  ProcessContextAccess(this,*(long *)(this + 0x28) + 0x28,uVar2,iVar3,0,0);
  return;
}

