
/* v8::internal::FrameSummary::JavaScriptFrameSummary::SourceStatementPosition() const */

void __thiscall
v8::internal::FrameSummary::JavaScriptFrameSummary::SourceStatementPosition
          (JavaScriptFrameSummary *this)

{
  undefined8 local_18;
  
  local_18 = **(undefined8 **)(this + 0x20);
  AbstractCode::SourceStatementPosition((AbstractCode *)&local_18,*(int *)(this + 0x28));
  return;
}

