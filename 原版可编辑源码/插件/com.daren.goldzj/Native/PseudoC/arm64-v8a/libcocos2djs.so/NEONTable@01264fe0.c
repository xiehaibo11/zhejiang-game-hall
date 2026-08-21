
/* v8::internal::Assembler::NEONTable(v8::internal::VRegister const&, v8::internal::VRegister
   const&, v8::internal::VRegister const&, v8::internal::NEONTableOp) */

void __thiscall
v8::internal::Assembler::NEONTable
          (Assembler *this,uint *param_1,int *param_2,int *param_3,uint param_5)

{
  uint uVar1;
  
  uVar1 = 0x40000000;
  if (param_1[1] != 0x80 || param_1[2] != 1) {
    uVar1 = 0;
  }
  Emit(this,uVar1 | param_5 | *param_3 << 0x10 | *param_2 << 5 | *param_1);
  return;
}

