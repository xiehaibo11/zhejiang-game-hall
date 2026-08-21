
/* v8::internal::Assembler::LoadStoreStructSingle(v8::internal::VRegister const&, unsigned int,
   v8::internal::MemOperand const&, v8::internal::NEONLoadStoreSingleStructOp) */

void __thiscall
v8::internal::Assembler::LoadStoreStructSingle
          (Assembler *this,uint *param_1,int param_2,uint *param_3,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1[1];
  uVar1 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  iVar2 = 0;
  if (param_1[3] != 0) {
    iVar2 = ((int)uVar1 >> 3) / (int)param_1[3];
  }
  uVar1 = iVar2 * param_2;
  if (iVar2 == 8) {
    uVar1 = uVar1 + 1;
  }
  if (iVar2 != 1) {
    if (iVar2 == 4) {
      param_5 = param_5 | 0x8000;
    }
    else if (iVar2 == 2) {
      param_5 = param_5 | 0x4000;
    }
    else {
      param_5 = param_5 | 0x8400;
    }
  }
  uVar3 = (*param_3 & 0x1f) << 5;
  if (param_3[8] == 2) {
    if (*(long *)(param_3 + 6) == 0) {
      uVar3 = uVar3 | param_3[3] << 0x10 | 0x800000;
    }
    else {
      uVar3 = uVar3 | 0x9f0000;
    }
  }
  Emit(this,uVar1 << 10 & 0xc00 | (uVar1 & 8) << 0x1b | uVar1 << 10 & 0x1000 | param_5 | uVar3 |
            *param_1);
  return;
}

