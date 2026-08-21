
/* v8::Isolate::RemoveMicrotasksCompletedCallback(void (*)(v8::Isolate*, void*), void*) */

void __thiscall
v8::Isolate::RemoveMicrotasksCompletedCallback
          (Isolate *this,_func_void_Isolate_ptr_void_ptr *param_1,void *param_2)

{
  internal::MicrotaskQueue::RemoveMicrotasksCompletedCallback
            (*(MicrotaskQueue **)(this + 0xb7c0),param_1,param_2);
  return;
}

