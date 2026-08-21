
/* v8::Isolate::SetCreateHistogramFunction(void* (*)(char const*, int, int, unsigned long)) */

void __thiscall
v8::Isolate::SetCreateHistogramFunction
          (Isolate *this,_func_void_ptr_char_ptr_int_int_ulong *param_1)

{
  internal::Counters::ResetCreateHistogramFunction(*(Counters **)(this + 0x9520),param_1);
  return;
}

