
/* v8::internal::compiler::ProcessedFeedback::AsTemplateObject() const */

void __thiscall v8::internal::compiler::ProcessedFeedback::AsTemplateObject(ProcessedFeedback *this)

{
  if (*(int *)this == 0xb) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kTemplateObject == kind()");
}

