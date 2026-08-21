
/* v8::Isolate::DisallowJavascriptExecutionScope::~DisallowJavascriptExecutionScope() */

void __thiscall
v8::Isolate::DisallowJavascriptExecutionScope::~DisallowJavascriptExecutionScope
          (DisallowJavascriptExecutionScope *this)

{
  int iVar1;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *this_00;
  
  iVar1 = *(int *)this;
  if (iVar1 == 2) {
    this_00 = *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> **)(this + 8);
    if (this_00 == (PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)0x0) {
      return;
    }
    internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,false>::
    ~PerIsolateAssertScope
              ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,false> *)this_00);
  }
  else if (iVar1 == 1) {
    this_00 = *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> **)(this + 8);
    if (this_00 == (PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)0x0) {
      return;
    }
    internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,false>::
    ~PerIsolateAssertScope
              ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,false> *)this_00);
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    this_00 = *(PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> **)(this + 8);
    if (this_00 == (PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)0x0) {
      return;
    }
    internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(this_00);
  }
  operator_delete(this_00);
  return;
}

