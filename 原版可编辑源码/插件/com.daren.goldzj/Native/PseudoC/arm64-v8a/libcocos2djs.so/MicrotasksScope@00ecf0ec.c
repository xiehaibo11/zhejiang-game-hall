
/* v8::MicrotasksScope::MicrotasksScope(v8::Isolate*, v8::MicrotaskQueue*,
   v8::MicrotasksScope::Type) */

void __thiscall
v8::MicrotasksScope::MicrotasksScope(MicrotasksScope *this,long param_1,long param_2,int param_4)

{
  *(long *)this = param_1;
  if (param_2 == 0) {
    param_2 = *(long *)(param_1 + 0xb7c0);
  }
  *(long *)(this + 8) = param_2;
  this[0x10] = (MicrotasksScope)(param_4 == 0);
  if (param_4 != 0) {
    return;
  }
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

