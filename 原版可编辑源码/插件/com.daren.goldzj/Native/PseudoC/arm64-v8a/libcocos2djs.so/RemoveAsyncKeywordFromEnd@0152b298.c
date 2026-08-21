
/* v8::internal::FuncNameInferrer::RemoveAsyncKeywordFromEnd() */

void __thiscall v8::internal::FuncNameInferrer::RemoveAsyncKeywordFromEnd(FuncNameInferrer *this)

{
  ulong uVar1;
  
  if (*(long *)(this + 0x38) != 0) {
    if (*(long *)(this + 0x10) == *(long *)(this + 8)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","names_stack_.size() > 0");
    }
    uVar1 = AstRawString::IsOneByteEqualTo
                      ((AstRawString *)
                       (*(ulong *)(*(long *)(this + 0x10) + -8) & 0xfffffffffffffffc),"async");
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","names_stack_.back().name()->IsOneByteEqualTo(\"async\")");
    }
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + -8;
  }
  return;
}

