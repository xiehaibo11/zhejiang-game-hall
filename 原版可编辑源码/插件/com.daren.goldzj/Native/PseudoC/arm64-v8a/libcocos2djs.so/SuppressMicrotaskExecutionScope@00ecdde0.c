
/* v8::Isolate::SuppressMicrotaskExecutionScope::SuppressMicrotaskExecutionScope(v8::Isolate*,
   v8::MicrotaskQueue*) */

void __thiscall
v8::Isolate::SuppressMicrotaskExecutionScope::SuppressMicrotaskExecutionScope
          (SuppressMicrotaskExecutionScope *this,Isolate *param_1,MicrotaskQueue *param_2)

{
  *(Isolate **)this = param_1;
  if (param_2 == (MicrotaskQueue *)0x0) {
    param_2 = *(MicrotaskQueue **)(param_1 + 0xb7c0);
  }
  *(MicrotaskQueue **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x2c08);
  *(SuppressMicrotaskExecutionScope **)(param_1 + 0x2c08) = this;
  *(int *)(*(long *)(this + 8) + 0x44) = *(int *)(*(long *)(this + 8) + 0x44) + 1;
  return;
}

