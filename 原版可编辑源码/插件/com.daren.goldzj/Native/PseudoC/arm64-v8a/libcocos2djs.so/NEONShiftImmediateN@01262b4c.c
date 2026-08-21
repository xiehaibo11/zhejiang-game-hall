
/* v8::internal::Assembler::NEONShiftImmediateN(v8::internal::VRegister const&,
   v8::internal::VRegister const&, int, v8::internal::NEONShiftImmediateOp) */

void __thiscall
v8::internal::Assembler::NEONShiftImmediateN
          (Assembler *this,uint *param_1,int *param_2,int param_3,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1[1];
  uVar4 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar4 = uVar1;
  }
  iVar2 = 0;
  if (param_1[3] != 0) {
    iVar2 = ((int)uVar4 >> 3) / (int)param_1[3];
  }
  if (param_2[3] == 1) {
    uVar4 = 0x40000000;
    uVar3 = 0x10000000;
  }
  else if (param_1[2] == 1) {
    uVar3 = 0;
    uVar4 = (uint)(uVar1 != 0x40) << 0x1e;
  }
  else {
    uVar3 = 0;
    uVar4 = 0x40000000;
  }
  Emit(this,(iVar2 * 0x10 - param_3) * 0x10000 | param_5 | uVar3 | uVar4 | *param_2 << 5 | *param_1)
  ;
  return;
}

