
/* v8::internal::compiler::CodeAssemblerScopedExceptionHandler::CodeAssemblerScopedExceptionHandler(v8::internal::compiler::CodeAssembler*,
   v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*) */

void __thiscall
v8::internal::compiler::CodeAssemblerScopedExceptionHandler::CodeAssemblerScopedExceptionHandler
          (CodeAssemblerScopedExceptionHandler *this,CodeAssembler *param_1,
          CodeAssemblerParameterizedLabel *param_2)

{
  long lVar1;
  CodeAssemblerParameterizedLabel *local_18;
  
  *(CodeAssembler **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *this = (CodeAssemblerScopedExceptionHandler)(param_2 != (CodeAssemblerParameterizedLabel *)0x0);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (param_2 != (CodeAssemblerParameterizedLabel *)0x0) {
    lVar1 = *(long *)param_1;
    if (*(undefined8 **)(lVar1 + 0xa8) == *(undefined8 **)(lVar1 + 0xb0)) {
      local_18 = param_2;
      std::__ndk1::
      vector<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*,std::__ndk1::allocator<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*>>
      ::
      __push_back_slow_path<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*const&>
                ((vector<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*,std::__ndk1::allocator<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*>>
                  *)(lVar1 + 0xa0),&local_18);
    }
    else {
      **(undefined8 **)(lVar1 + 0xa8) = param_2;
      *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + 8;
    }
  }
  return;
}

