
/* v8::internal::Assembler::DataProcExtendedRegister(v8::internal::Register const&,
   v8::internal::Register const&, v8::internal::Operand const&, v8::internal::FlagsUpdate, unsigned
   int) */

void __thiscall
v8::internal::Assembler::DataProcExtendedRegister
          (Assembler *this,ulong *param_1,uint *param_2,long param_3,int param_5,uint param_6)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar3 = uVar1 >> 0x20;
  if (param_5 == 1) {
    uVar2 = 0x20000000;
  }
  else {
    if (param_5 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar2 = 0;
    uVar1 = (ulong)((uint)uVar1 & 0x1f);
  }
  Emit(this,(uint)(uVar3 == 0x40) << 0x1f | param_6 | (uint)uVar1 | uVar2 |
            *(int *)(param_3 + 0x30) << 0x10 | *(int *)(param_3 + 0x40) << 0xd |
            *(int *)(param_3 + 0x44) << 10 | (*param_2 & 0x1f) << 5);
  return;
}

