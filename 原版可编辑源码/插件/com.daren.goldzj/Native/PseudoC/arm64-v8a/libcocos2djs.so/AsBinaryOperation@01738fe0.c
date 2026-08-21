
/* v8::internal::compiler::ProcessedFeedback::AsBinaryOperation() const */

void __thiscall
v8::internal::compiler::ProcessedFeedback::AsBinaryOperation(ProcessedFeedback *this)

{
  if (*(int *)this == 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kBinaryOperation == kind()");
}

