
/* v8::internal::compiler::CodeAssemblerState::PushExceptionHandler(v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*)
    */

void __thiscall
v8::internal::compiler::CodeAssemblerState::PushExceptionHandler
          (CodeAssemblerState *this,CodeAssemblerParameterizedLabel *param_1)

{
  CodeAssemblerParameterizedLabel *local_18;
  
  if (*(undefined8 **)(this + 0xa8) == *(undefined8 **)(this + 0xb0)) {
    local_18 = param_1;
    std::__ndk1::
    vector<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*,std::__ndk1::allocator<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*>>
    ::
    __push_back_slow_path<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*const&>
              ((vector<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*,std::__ndk1::allocator<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*>>
                *)(this + 0xa0),&local_18);
  }
  else {
    **(undefined8 **)(this + 0xa8) = param_1;
    *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 8;
  }
  return;
}

