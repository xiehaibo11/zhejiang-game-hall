
/* v8::Isolate::AddMicrotasksCompletedCallback(void (*)(v8::Isolate*)) */

void __thiscall
v8::Isolate::AddMicrotasksCompletedCallback(Isolate *this,_func_void_Isolate_ptr *param_1)

{
  internal::MicrotaskQueue::AddMicrotasksCompletedCallback
            (*(MicrotaskQueue **)(this + 0xb7c0),FUN_00ece4d0,param_1);
  return;
}

