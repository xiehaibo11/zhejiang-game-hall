
/* v8::internal::compiler::FeedbackSource::index() const */

void __thiscall v8::internal::compiler::FeedbackSource::index(FeedbackSource *this)

{
  if ((*(long *)this != 0) && (*(int *)(this + 8) != -1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsValid()");
}

