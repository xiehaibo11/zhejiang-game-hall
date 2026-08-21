
/* v8::Isolate::RequestInterrupt(void (*)(v8::Isolate*, void*), void*) */

void v8::Isolate::RequestInterrupt(_func_void_Isolate_ptr_void_ptr *param_1,void *param_2)

{
  void *in_x2;
  
  internal::Isolate::RequestInterrupt((Isolate *)param_1,param_2,in_x2);
  return;
}

