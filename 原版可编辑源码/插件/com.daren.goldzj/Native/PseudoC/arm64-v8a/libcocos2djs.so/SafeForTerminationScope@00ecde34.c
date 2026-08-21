
/* v8::Isolate::SafeForTerminationScope::SafeForTerminationScope(v8::Isolate*) */

void __thiscall
v8::Isolate::SafeForTerminationScope::SafeForTerminationScope
          (SafeForTerminationScope *this,Isolate *param_1)

{
  *(Isolate **)this = param_1;
  this[8] = *(SafeForTerminationScope *)(param_1 + 0xb828);
  param_1[0xb828] = (Isolate)0x1;
  return;
}

