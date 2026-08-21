
/* v8::internal::compiler::Constant::Constant(v8::internal::compiler::RelocatablePtrConstantInfo) */

void __thiscall
v8::internal::compiler::Constant::Constant(Constant *this,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  this[4] = (Constant)0x13;
  if (uVar1 < 2) {
    *(uint *)this = uVar1;
    *(undefined8 *)(this + 8) = param_2;
    this[4] = SUB81(param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

