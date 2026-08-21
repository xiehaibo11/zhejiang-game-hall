
/* v8::internal::InterruptsScope::InterruptsScope(v8::internal::Isolate*, long,
   v8::internal::InterruptsScope::Mode) */

void __thiscall
v8::internal::InterruptsScope::InterruptsScope
          (InterruptsScope *this,long param_1,undefined8 param_2,int param_4)

{
  *(undefined8 *)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__InterruptsScope_01c984b0;
  *(StackGuard **)(this + 8) = (StackGuard *)(param_1 + 0x48);
  *(int *)(this + 0x20) = param_4;
  if (param_4 == 2) {
    return;
  }
  StackGuard::PushInterruptsScope((StackGuard *)(param_1 + 0x48),this);
  return;
}

