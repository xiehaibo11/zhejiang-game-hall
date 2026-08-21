
/* v8::Isolate::SetFatalErrorHandler(void (*)(char const*, char const*)) */

void __thiscall
v8::Isolate::SetFatalErrorHandler(Isolate *this,_func_void_char_ptr_char_ptr *param_1)

{
  *(_func_void_char_ptr_char_ptr **)(this + 0xb738) = param_1;
  return;
}

