
/* v8::internal::Isolate::SetAbortOnUncaughtExceptionCallback(bool (*)(v8::Isolate*)) */

void __thiscall
v8::internal::Isolate::SetAbortOnUncaughtExceptionCallback
          (Isolate *this,_func_bool_Isolate_ptr *param_1)

{
  *(_func_bool_Isolate_ptr **)(this + 0xc720) = param_1;
  return;
}

