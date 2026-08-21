
/* v8::internal::FrameSummary::JavaScriptFrameSummary::FunctionName() const */

void __thiscall
v8::internal::FrameSummary::JavaScriptFrameSummary::FunctionName(JavaScriptFrameSummary *this)

{
  JSFunction::GetDebugName(*(undefined8 *)(this + 0x18));
  return;
}

