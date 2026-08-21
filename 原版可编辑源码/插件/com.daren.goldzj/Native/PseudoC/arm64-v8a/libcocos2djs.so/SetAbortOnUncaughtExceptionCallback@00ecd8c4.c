
/* v8::Isolate::SetAbortOnUncaughtExceptionCallback(bool (*)(v8::Isolate*)) */

void v8::Isolate::SetAbortOnUncaughtExceptionCallback(_func_bool_Isolate_ptr *param_1)

{
  _func_bool_Isolate_ptr *in_x1;
  
  internal::Isolate::SetAbortOnUncaughtExceptionCallback((Isolate *)param_1,in_x1);
  return;
}

