
/* v8::Isolate::SetEventLogger(void (*)(char const*, int)) */

void __thiscall v8::Isolate::SetEventLogger(Isolate *this,_func_void_char_ptr_int *param_1)

{
  if (internal::FLAG_log_internal_timer_events != '\0') {
    return;
  }
  *(_func_void_char_ptr_int **)(this + 0xb748) = param_1;
  return;
}

