
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaZero(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::VisitLdaZero
               (BytecodeArrayIterator *param_1)

{
  uint uVar1;
  Isolate *pIVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_18;
  
  pIVar2 = (Isolate *)**(undefined8 **)param_1;
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(undefined8 **)(pIVar2 + 0x95a0);
    if (puVar3 == *(undefined8 **)(pIVar2 + 0x95a8)) {
      puVar3 = (undefined8 *)HandleScope::Extend(pIVar2);
    }
    *(undefined8 **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    puVar3 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar2 + 0x95b8),0);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  if (lVar4 == 0) {
    lVar4 = ZoneStats::NewEmptyZone(*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
    *(long *)(param_1 + 0x20) = lVar4;
  }
  local_18 = 0;
  Hints::AddConstant((Hints *)&local_18,puVar3,lVar4);
  lVar4 = *(long *)(param_1 + 0x28);
  uVar1 = *(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18);
  if ((-1 < (int)uVar1) &&
     ((ulong)(*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + (long)(int)uVar1 * 8) = local_18;
  return;
}

