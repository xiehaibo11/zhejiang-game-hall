
/* v8::internal::FuncNameInferrer::PushVariableName(v8::internal::AstRawString const*) */

void __thiscall
v8::internal::FuncNameInferrer::PushVariableName(FuncNameInferrer *this,AstRawString *param_1)

{
  ulong local_18;
  
  if ((*(long *)(this + 0x38) != 0) &&
     (*(AstRawString **)(*(long *)(*(long *)this + 0x38) + 0xf8) != param_1)) {
    local_18 = (ulong)param_1 | 2;
    if (*(ulong **)(this + 0x10) < *(ulong **)(this + 0x18)) {
      **(ulong **)(this + 0x10) = local_18;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
    }
    else {
      std::__ndk1::
      vector<v8::internal::FuncNameInferrer::Name,std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>>
      ::__push_back_slow_path<v8::internal::FuncNameInferrer::Name>
                ((vector<v8::internal::FuncNameInferrer::Name,std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>>
                  *)(this + 8),(Name *)&local_18);
    }
  }
  return;
}

