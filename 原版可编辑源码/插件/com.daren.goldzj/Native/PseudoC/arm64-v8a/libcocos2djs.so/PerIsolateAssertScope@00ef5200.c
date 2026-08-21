
/* v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)3,
   true>::PerIsolateAssertScope(v8::internal::Isolate*) */

void __thiscall
v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)3,true>::
PerIsolateAssertScope
          (PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)3,true> *this,Isolate *param_1)

{
  uint uVar1;
  
  *(Isolate **)this = param_1;
  uVar1 = *(uint *)(param_1 + 0xb7d8);
  *(uint *)(this + 8) = uVar1;
  *(uint *)(param_1 + 0xb7d8) = uVar1 | 8;
  return;
}

