
/* v8::Isolate::AllowJavascriptExecutionScope::AllowJavascriptExecutionScope(v8::Isolate*) */

void __thiscall
v8::Isolate::AllowJavascriptExecutionScope::AllowJavascriptExecutionScope
          (AllowJavascriptExecutionScope *this,Isolate *param_1)

{
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> *this_00;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,true> *this_01;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,true> *this_02;
  
  this_00 = operator_new(0x10);
  internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::PerIsolateAssertScope
            (this_00,(Isolate *)param_1);
  *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> **)(this + 8) = this_00;
  this_01 = operator_new(0x10);
  internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,true>::PerIsolateAssertScope
            (this_01,(Isolate *)param_1);
  *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,true> **)this = this_01;
  this_02 = operator_new(0x10);
  internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,true>::PerIsolateAssertScope
            (this_02,(Isolate *)param_1);
  *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,true> **)(this + 0x10) = this_02;
  return;
}

