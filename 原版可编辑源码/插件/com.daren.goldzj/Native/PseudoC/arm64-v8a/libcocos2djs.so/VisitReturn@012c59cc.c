
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitReturn(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::VisitReturn
               (BytecodeArrayIterator *param_1)

{
  uint uVar1;
  void *__s;
  void *pvVar2;
  Zone *pZVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(lVar5 + 0x30);
  uVar1 = *(int *)(lVar5 + 0x1c) + *(int *)(lVar5 + 0x18);
  if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar5 + 0x38) - lVar4 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  pZVar3 = *(Zone **)(param_1 + 0x20);
  if (pZVar3 == (Zone *)0x0) {
    pZVar3 = (Zone *)ZoneStats::NewEmptyZone
                               (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
    *(Zone **)(param_1 + 0x20) = pZVar3;
  }
  Hints::Add((Hints *)(param_1 + 0x90),(Hints *)(lVar4 + (long)(int)uVar1 * 8),pZVar3);
  __s = *(void **)(*(long *)(param_1 + 0x28) + 0x30);
  pvVar2 = *(void **)(*(long *)(param_1 + 0x28) + 0x38);
  if (__s != pvVar2) {
    memset(__s,0,(long)pvVar2 - (long)__s & 0xfffffffffffffff8);
    return;
  }
  return;
}

