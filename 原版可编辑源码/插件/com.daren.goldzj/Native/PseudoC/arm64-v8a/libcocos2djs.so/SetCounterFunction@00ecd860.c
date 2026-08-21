
/* v8::Isolate::SetCounterFunction(int* (*)(char const*)) */

void __thiscall v8::Isolate::SetCounterFunction(Isolate *this,_func_int_ptr_char_ptr *param_1)

{
  internal::Counters::ResetCounterFunction(*(Counters **)(this + 0x9520),param_1);
  return;
}

