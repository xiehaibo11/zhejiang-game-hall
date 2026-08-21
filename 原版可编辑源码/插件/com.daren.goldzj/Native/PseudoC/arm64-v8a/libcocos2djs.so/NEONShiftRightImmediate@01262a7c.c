
/* v8::internal::Assembler::NEONShiftRightImmediate(v8::internal::VRegister const&,
   v8::internal::VRegister const&, int, v8::internal::NEONShiftImmediateOp) */

void __thiscall
v8::internal::Assembler::NEONShiftRightImmediate
          (Assembler *this,uint *param_1,int *param_2,int param_3,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_2[1];
  iVar3 = param_2[3];
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = (iVar1 >> 3) / iVar3;
  }
  if (iVar3 == 1) {
    uVar5 = 0x40000000;
    uVar4 = 0x10000000;
  }
  else if (param_1[2] == 1) {
    uVar4 = 0;
    uVar5 = (uint)(param_1[1] != 0x40) << 0x1e;
  }
  else {
    uVar4 = 0;
    uVar5 = 0x40000000;
  }
  Emit(this,(iVar2 * 0x10 - param_3) * 0x10000 | param_5 | uVar4 | uVar5 | *param_2 << 5 | *param_1)
  ;
  return;
}

