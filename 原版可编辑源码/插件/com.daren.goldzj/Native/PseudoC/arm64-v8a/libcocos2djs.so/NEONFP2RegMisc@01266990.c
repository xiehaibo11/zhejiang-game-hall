
/* v8::internal::Assembler::NEONFP2RegMisc(v8::internal::VRegister const&, v8::internal::VRegister
   const&, v8::internal::NEON2RegMiscOp, double) */

void v8::internal::Assembler::NEONFP2RegMisc
               (Assembler *param_1,undefined8 *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((long)param_2 + 0xc);
  uVar1 = param_4 | 0x50000000;
  if (iVar2 != 1) {
    uVar1 = param_4;
  }
  iVar4 = (int)((ulong)*param_2 >> 0x20);
  if (iVar2 == 2) {
    uVar3 = 0x40400000;
    if (iVar4 != 0x80) {
      uVar3 = 0;
    }
  }
  else if (iVar2 == 1) {
    uVar3 = (uint)(iVar4 == 0x40) << 0x16;
  }
  else {
    uVar3 = 0x40000000;
  }
  Emit(param_1,uVar1 | (uint)*param_2 | uVar3 | *param_3 << 5);
  return;
}

