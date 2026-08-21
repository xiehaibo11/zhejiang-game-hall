
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitTestUndefined(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::VisitTestUndefined
               (BytecodeArrayIterator *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  uVar1 = *(int *)(lVar2 + 0x1c) + *(int *)(lVar2 + 0x18);
  if ((-1 < (int)uVar1) &&
     ((ulong)(*(long *)(lVar2 + 0x38) - *(long *)(lVar2 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 *)(*(long *)(lVar2 + 0x30) + (long)(int)uVar1 * 8) = 0;
  return;
}

