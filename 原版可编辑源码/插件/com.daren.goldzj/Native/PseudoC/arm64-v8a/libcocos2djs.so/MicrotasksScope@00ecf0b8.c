
/* v8::MicrotasksScope::MicrotasksScope(v8::Isolate*, v8::MicrotasksScope::Type) */

void __thiscall v8::MicrotasksScope::MicrotasksScope(MicrotasksScope *this,long param_1,int param_3)

{
  long lVar1;
  
  *(long *)this = param_1;
  lVar1 = *(long *)(param_1 + 0xb7c0);
  this[0x10] = (MicrotasksScope)(param_3 == 0);
  *(long *)(this + 8) = lVar1;
  if (param_3 != 0) {
    return;
  }
  *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
  return;
}

