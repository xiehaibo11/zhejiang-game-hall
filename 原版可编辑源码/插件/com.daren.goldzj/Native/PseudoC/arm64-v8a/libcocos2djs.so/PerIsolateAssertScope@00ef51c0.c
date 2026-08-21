
/* v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)3,
   false>::PerIsolateAssertScope(v8::internal::Isolate*) */

void __thiscall
v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)3,false>::
PerIsolateAssertScope
          (PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)3,false> *this,Isolate *param_1
          )

{
  uint uVar1;
  
  *(Isolate **)this = param_1;
  uVar1 = *(uint *)(param_1 + 0xb7d8);
  *(uint *)(this + 8) = uVar1;
  *(uint *)(param_1 + 0xb7d8) = uVar1 & 0xfffffff7;
  return;
}

