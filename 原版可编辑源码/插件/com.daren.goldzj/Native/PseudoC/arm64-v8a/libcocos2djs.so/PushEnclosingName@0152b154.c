
/* v8::internal::FuncNameInferrer::PushEnclosingName(v8::internal::AstRawString const*) */

void __thiscall
v8::internal::FuncNameInferrer::PushEnclosingName(FuncNameInferrer *this,AstRawString *param_1)

{
  uint uVar1;
  ulong uVar2;
  AstRawString *local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = AstRawString::FirstCharacter(param_1);
    uVar2 = unibrow::Uppercase::Is(uVar1 & 0xffff);
    if ((uVar2 & 1) != 0) {
      if (*(undefined8 **)(this + 0x10) < *(undefined8 **)(this + 0x18)) {
        **(undefined8 **)(this + 0x10) = param_1;
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
      }
      else {
        local_28 = param_1;
        std::__ndk1::
        vector<v8::internal::FuncNameInferrer::Name,std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>>
        ::__push_back_slow_path<v8::internal::FuncNameInferrer::Name>
                  ((vector<v8::internal::FuncNameInferrer::Name,std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>>
                    *)(this + 8),(Name *)&local_28);
      }
    }
  }
  return;
}

