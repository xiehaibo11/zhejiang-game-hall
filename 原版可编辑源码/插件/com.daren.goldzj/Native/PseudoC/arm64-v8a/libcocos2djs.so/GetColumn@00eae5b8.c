
/* v8::StackFrame::GetColumn() const */

void v8::StackFrame::GetColumn(void)

{
  internal::StackTraceFrame::GetOneBasedColumnNumber();
  return;
}

