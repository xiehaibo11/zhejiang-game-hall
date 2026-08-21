
/* v8::internal::Assembler::NEONShiftImmediate(v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::NEONShiftImmediateOp, int) */

void __thiscall
v8::internal::Assembler::NEONShiftImmediate
          (Assembler *this,uint *param_1,int *param_2,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2[3] == 1) {
    uVar2 = 0x40000000;
    uVar1 = 0x10000000;
  }
  else if (param_1[2] == 1) {
    uVar1 = 0;
    uVar2 = (uint)(param_1[1] != 0x40) << 0x1e;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x40000000;
  }
  Emit(this,param_5 | param_4 | uVar1 | uVar2 | *param_2 << 5 | *param_1);
  return;
}

