
/* v8::Isolate::AllowJavascriptExecutionScope::~AllowJavascriptExecutionScope() */

void __thiscall
v8::Isolate::AllowJavascriptExecutionScope::~AllowJavascriptExecutionScope
          (AllowJavascriptExecutionScope *this)

{
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,true> *this_00;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> *this_01;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,true> *this_02;
  
  this_01 = *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> **)(this + 8);
  if (this_01 != (PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> *)0x0) {
    internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::
    ~PerIsolateAssertScope(this_01);
    operator_delete(this_01);
  }
  this_02 = *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,true> **)this;
  if (this_02 != (PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,true> *)0x0) {
    internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,true>::
    ~PerIsolateAssertScope(this_02);
    operator_delete(this_02);
  }
  this_00 = *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,true> **)(this + 0x10);
  if (this_00 != (PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,true> *)0x0) {
    internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,true>::
    ~PerIsolateAssertScope(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

