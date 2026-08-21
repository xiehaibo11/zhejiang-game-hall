
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaSmi(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaSmi
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  Isolate *pIVar5;
  undefined8 local_38;
  
  uVar2 = interpreter::BytecodeArrayAccessor::GetImmediateOperand
                    ((BytecodeArrayAccessor *)param_1,0);
  uVar2 = -(uVar2 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar2 & 0xffffffff) << 1;
  pIVar5 = (Isolate *)**(undefined8 **)this;
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
    lVar4 = *(long *)(this + 0x20);
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar2);
    lVar4 = *(long *)(this + 0x20);
  }
  if (lVar4 == 0) {
    lVar4 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(long *)(this + 0x20) = lVar4;
  }
  local_38 = 0;
  Hints::AddConstant((Hints *)&local_38,puVar3,lVar4);
  lVar4 = *(long *)(this + 0x28);
  uVar1 = *(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18);
  if ((-1 < (int)uVar1) &&
     ((ulong)(*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + (long)(int)uVar1 * 8) = local_38;
  return;
}

