
/* v8::internal::Assembler::NEONFPByElement(v8::internal::VRegister const&, v8::internal::VRegister
   const&, v8::internal::VRegister const&, int, v8::internal::NEONByIndexedElementOp) */

void __thiscall
v8::internal::Assembler::NEONFPByElement
          (Assembler *this,undefined8 *param_1,int *param_2,int *param_3,uint param_4,uint param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)((long)param_1 + 0xc);
  uVar1 = param_6 | 0x50000000;
  if (iVar2 != 1) {
    uVar1 = param_6;
  }
  iVar5 = (int)((ulong)*param_1 >> 0x20);
  if (iVar2 == 2) {
    uVar4 = 0x40400000;
    if (iVar5 != 0x80) {
      uVar4 = 0;
    }
  }
  else if (iVar2 == 1) {
    uVar4 = (uint)(iVar5 == 0x40) << 0x16;
  }
  else {
    uVar4 = 0x40000000;
  }
  uVar3 = (param_4 & 1) << 0x15;
  if (param_3[1] != 0x20) {
    uVar3 = 0;
  }
  Emit(this,uVar1 | uVar3 | (uint)*param_1 | (param_4 >> (param_3[1] == 0x20) & 1) << 0xb | uVar4 |
            *param_3 << 0x10 | *param_2 << 5);
  return;
}

