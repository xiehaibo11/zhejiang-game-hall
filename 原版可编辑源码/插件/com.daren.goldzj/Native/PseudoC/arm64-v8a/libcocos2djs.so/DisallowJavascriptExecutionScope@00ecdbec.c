
/* v8::Isolate::DisallowJavascriptExecutionScope::DisallowJavascriptExecutionScope(v8::Isolate*,
   v8::Isolate::DisallowJavascriptExecutionScope::OnFailure) */

void __thiscall
v8::Isolate::DisallowJavascriptExecutionScope::DisallowJavascriptExecutionScope
          (DisallowJavascriptExecutionScope *this,Isolate *param_1,int param_3)

{
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *this_00;
  
  *(int *)this = param_3;
  if (param_3 == 2) {
    this_00 = operator_new(0x10);
    internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,false>::
    PerIsolateAssertScope
              ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,false> *)this_00,param_1
              );
  }
  else if (param_3 == 1) {
    this_00 = operator_new(0x10);
    internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,false>::
    PerIsolateAssertScope
              ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,false> *)this_00,param_1
              );
  }
  else {
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    this_00 = operator_new(0x10);
    internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    PerIsolateAssertScope(this_00,param_1);
  }
  *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> **)(this + 8) = this_00;
  return;
}

