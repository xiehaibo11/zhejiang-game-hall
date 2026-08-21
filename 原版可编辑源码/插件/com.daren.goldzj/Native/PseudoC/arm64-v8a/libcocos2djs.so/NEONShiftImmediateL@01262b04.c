
/* v8::internal::Assembler::NEONShiftImmediateL(v8::internal::VRegister const&,
   v8::internal::VRegister const&, int, v8::internal::NEONShiftImmediateOp) */

void __thiscall
v8::internal::Assembler::NEONShiftImmediateL
          (Assembler *this,uint *param_1,int *param_2,int param_3,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = param_2[1];
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar3 = 0;
  if (param_2[3] != 0) {
    iVar3 = (iVar1 >> 3) / param_2[3];
  }
  uVar4 = 0;
  if (iVar2 != 0x40 || param_2[2] != 1) {
    uVar4 = 0x40000000;
  }
  Emit(this,param_5 | (param_3 + iVar3 * 8) * 0x10000 | uVar4 | *param_2 << 5 | *param_1);
  return;
}

