
/* v8::internal::Assembler::NEONModifiedImmShiftLsl(v8::internal::VRegister const&, int, int,
   v8::internal::NEONModifiedImmediateOp) */

void __thiscall
v8::internal::Assembler::NEONModifiedImmShiftLsl
          (Assembler *this,uint *param_1,uint param_2,uint param_3,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  iVar2 = (int)param_3 >> 4;
  if (uVar1 == 0x80) {
    if (param_1[3] == 0x10) {
LAB_01268a68:
      iVar2 = 1;
      uVar4 = 0x8000;
      uVar3 = 1;
      goto LAB_01268a9c;
    }
    uVar3 = param_3 >> 3 & 1;
    if (param_1[3] != 8) {
LAB_01268a98:
      uVar4 = 0;
      goto LAB_01268a9c;
    }
  }
  else {
    if (uVar1 != 0x40) {
      uVar4 = 0;
      uVar3 = param_3 >> 3 & 1;
      goto LAB_01268a9c;
    }
    if (param_1[3] == 8) goto LAB_01268a68;
    uVar3 = param_3 >> 3 & 1;
    if (param_1[3] != 4) goto LAB_01268a98;
  }
  uVar4 = 0x8000;
LAB_01268a9c:
  uVar5 = 0x40000000;
  if (uVar1 != 0x80 || param_1[2] != 1) {
    uVar5 = 0;
  }
  Emit(this,(param_2 & 0xe0) << 0xb | (param_2 & 0x1f) << 5 | param_5 | uVar4 | iVar2 << 0xe |
            uVar3 << 0xd | *param_1 | uVar5);
  return;
}

