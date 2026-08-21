
/* v8::internal::compiler::AddTypeAssertionsReducer::AddTypeAssertionsReducer(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::JSGraph*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::AddTypeAssertionsReducer::AddTypeAssertionsReducer
          (AddTypeAssertionsReducer *this,Editor *param_1,JSGraph *param_2,Zone *param_3)

{
  Zone *local_20;
  bool local_14 [4];
  
  *(JSGraph **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__AddTypeAssertionsReducer_01cc3a50;
  *(Editor **)(this + 8) = param_1;
  local_14[0] = false;
  local_20 = param_3;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0x18),
             (ulong)*(uint *)(*(long *)param_2 + 0x1c),local_14,(ZoneAllocator *)&local_20);
  return;
}

