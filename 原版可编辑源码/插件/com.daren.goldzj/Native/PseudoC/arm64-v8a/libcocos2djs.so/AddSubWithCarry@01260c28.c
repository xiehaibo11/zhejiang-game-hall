
/* v8::internal::Assembler::AddSubWithCarry(v8::internal::Register const&, v8::internal::Register
   const&, v8::internal::Operand const&, v8::internal::FlagsUpdate, v8::internal::AddSubWithCarryOp)
    */

void __thiscall
v8::internal::Assembler::AddSubWithCarry
          (Assembler *this,ulong *param_1,int *param_2,long param_3,int param_5,uint param_6)

{
  uint uVar1;
  
  if (param_5 == 1) {
    uVar1 = 0x20000000;
  }
  else {
    if (param_5 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = 0;
  }
  Emit(this,(uint)*param_1 | param_6 | (uint)(*param_1 >> 0x20 == 0x40) << 0x1f | uVar1 |
            *(int *)(param_3 + 0x30) << 0x10 | *param_2 << 5);
  return;
}

