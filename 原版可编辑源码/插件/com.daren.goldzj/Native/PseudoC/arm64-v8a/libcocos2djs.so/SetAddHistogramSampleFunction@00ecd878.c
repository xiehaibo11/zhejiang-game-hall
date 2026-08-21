
/* v8::Isolate::SetAddHistogramSampleFunction(void (*)(void*, int)) */

void __thiscall
v8::Isolate::SetAddHistogramSampleFunction(Isolate *this,_func_void_void_ptr_int *param_1)

{
  *(_func_void_void_ptr_int **)(*(long *)(this + 0x9520) + 0x28) = param_1;
  return;
}

