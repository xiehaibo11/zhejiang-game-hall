
/* v8::StackFrame::GetLineNumber() const */

void v8::StackFrame::GetLineNumber(void)

{
  internal::StackTraceFrame::GetOneBasedLineNumber();
  return;
}

