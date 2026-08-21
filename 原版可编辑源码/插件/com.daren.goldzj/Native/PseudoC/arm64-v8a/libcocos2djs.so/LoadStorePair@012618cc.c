
/* v8::internal::Assembler::LoadStorePair(v8::internal::CPURegister const&,
   v8::internal::CPURegister const&, v8::internal::MemOperand const&, v8::internal::LoadStorePairOp)
    */

void __thiscall
v8::internal::Assembler::LoadStorePair
          (Assembler *this,uint *param_1,int *param_2,uint *param_3,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  iVar2 = *param_2;
  uVar3 = *param_3;
  uVar4 = param_3[6];
  uVar5 = CalcLSPairDataSize(param_5);
  if ((((param_3[8] == 0) && (param_3[3] == 0xffffffff)) && (param_3[4] == 0)) && (param_3[5] == 2))
  {
    uVar6 = 0x29000000;
  }
  else {
    uVar6 = 0x29800000;
    if (param_3[8] != 1) {
      uVar6 = 0x28800000;
    }
  }
  Emit(this,uVar1 | param_5 | iVar2 << 10 | (uVar3 & 0x1f) << 5 |
            ((int)uVar4 >> (uVar5 & 0x1f) & 0x7fU) << 0xf | uVar6);
  return;
}

