
/* v8::internal::FrameSummary::JavaScriptFrameSummary::SourcePosition() const */

void __thiscall
v8::internal::FrameSummary::JavaScriptFrameSummary::SourcePosition(JavaScriptFrameSummary *this)

{
  undefined8 local_18;
  
  local_18 = **(undefined8 **)(this + 0x20);
  AbstractCode::SourcePosition((AbstractCode *)&local_18,*(int *)(this + 0x28));
  return;
}

