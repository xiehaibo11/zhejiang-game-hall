
/* v8::internal::OptimizedCompilationInfo::InlinedFunctionHolder::InlinedFunctionHolder(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::BytecodeArray>, v8::internal::SourcePosition) */

void __thiscall
v8::internal::OptimizedCompilationInfo::InlinedFunctionHolder::InlinedFunctionHolder
          (InlinedFunctionHolder *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)this = param_2;
  *(undefined8 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = param_4;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  return;
}

