
/* v8::internal::compiler::ProcessedFeedback::AsRegExpLiteral() const */

void __thiscall v8::internal::compiler::ProcessedFeedback::AsRegExpLiteral(ProcessedFeedback *this)

{
  if (*(int *)this == 10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kRegExpLiteral == kind()");
}

