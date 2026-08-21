
/* v8::internal::Isolate::SetUseCounterCallback(void (*)(v8::Isolate*,
   v8::Isolate::UseCounterFeature)) */

void __thiscall
v8::internal::Isolate::SetUseCounterCallback
          (Isolate *this,_func_void_Isolate_ptr_UseCounterFeature *param_1)

{
  *(_func_void_Isolate_ptr_UseCounterFeature **)(this + 0xc658) = param_1;
  return;
}

