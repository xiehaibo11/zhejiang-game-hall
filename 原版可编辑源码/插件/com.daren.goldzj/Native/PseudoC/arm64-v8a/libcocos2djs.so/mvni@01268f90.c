
/* v8::internal::Assembler::mvni(v8::internal::VRegister const&, int, v8::internal::Shift, int) */

void __thiscall
v8::internal::Assembler::mvni(Assembler *this,uint *param_1,uint param_2,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = 0x2f000400;
  if (param_4 != 0) {
    uVar4 = (param_5 & 0x10) << 8;
    uVar2 = (param_2 & 0xe0) << 0xb | (param_2 & 0x1f) << 5;
    uVar6 = 0x40000000;
    if (param_1[1] != 0x80 || param_1[2] != 1) {
      uVar6 = 0;
    }
    uVar1 = 0x2f00c400;
    goto LAB_01269074;
  }
  uVar2 = param_1[1];
  iVar3 = (int)param_5 >> 4;
  if (uVar2 == 0x80) {
    if (param_1[3] == 0x10) {
LAB_01269010:
      iVar3 = 1;
      uVar5 = 0x8000;
      uVar4 = 1;
    }
    else {
      uVar4 = param_5 >> 3 & 1;
      if (param_1[3] == 8) goto LAB_01268ffc;
LAB_01269040:
      uVar5 = 0;
    }
  }
  else if (uVar2 == 0x40) {
    if (param_1[3] == 8) goto LAB_01269010;
    uVar4 = param_5 >> 3 & 1;
    if (param_1[3] != 4) goto LAB_01269040;
LAB_01268ffc:
    uVar5 = 0x8000;
  }
  else {
    uVar5 = 0;
    uVar4 = param_5 >> 3 & 1;
  }
  uVar4 = uVar4 << 0xd;
  uVar6 = 0x40000000;
  if (param_1[2] != 1 || uVar2 != 0x80) {
    uVar6 = 0;
  }
  uVar2 = (param_2 & 0xe0) << 0xb | (param_2 & 0x1f) << 5 | uVar5 | iVar3 << 0xe;
LAB_01269074:
  Emit(this,uVar2 | uVar4 | *param_1 | uVar6 | uVar1);
  return;
}

