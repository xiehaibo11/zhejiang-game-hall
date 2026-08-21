
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaConstant(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaConstant
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ObjectRef aOStack_38 [16];
  undefined8 local_28;
  
  puVar4 = *(undefined8 **)this;
  uVar2 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,0,(Isolate *)*puVar4);
  ObjectRef::ObjectRef(aOStack_38,puVar4,uVar2,1);
  uVar2 = ObjectRef::object(aOStack_38);
  lVar3 = *(long *)(this + 0x20);
  if (lVar3 == 0) {
    lVar3 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(long *)(this + 0x20) = lVar3;
  }
  local_28 = 0;
  Hints::AddConstant((Hints *)&local_28,uVar2,lVar3);
  lVar3 = *(long *)(this + 0x28);
  uVar1 = *(int *)(lVar3 + 0x1c) + *(int *)(lVar3 + 0x18);
  if ((-1 < (int)uVar1) &&
     ((ulong)(*(long *)(lVar3 + 0x38) - *(long *)(lVar3 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + (long)(int)uVar1 * 8) = local_28;
  return;
}

