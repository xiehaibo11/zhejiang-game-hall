
/* v8::internal::TurboAssembler::Assert(v8::internal::Condition, v8::internal::AbortReason) */

void __thiscall
v8::internal::TurboAssembler::Assert(TurboAssembler *this,undefined4 param_2,undefined4 param_3)

{
  undefined8 local_28;
  
  if (this[0xc0] != (TurboAssembler)0x0) {
    local_28 = 0;
    B(this,&local_28,param_2);
    Abort(this,param_3);
    Assembler::bind((Label *)this);
  }
  return;
}

