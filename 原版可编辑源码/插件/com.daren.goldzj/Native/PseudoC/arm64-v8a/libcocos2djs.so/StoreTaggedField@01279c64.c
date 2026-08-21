
/* v8::internal::TurboAssembler::StoreTaggedField(v8::internal::Register const&,
   v8::internal::MemOperand const&) */

void __thiscall
v8::internal::TurboAssembler::StoreTaggedField
          (TurboAssembler *this,Register *param_1,MemOperand *param_2)

{
  ulong local_20;
  undefined4 local_18;
  
  local_20 = 0x200000003f;
  if (*(uint *)param_1 != 0x3f) {
    local_20 = (ulong)*(uint *)param_1 | 0x2000000000;
  }
  local_18 = 0;
  LoadStoreMacro(this,&local_20,param_2,0x80000000);
  return;
}

