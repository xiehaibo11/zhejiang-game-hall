
/* v8::internal::Assembler::movi(v8::internal::VRegister const&, unsigned long, v8::internal::Shift,
   int) */

void __thiscall
v8::internal::Assembler::movi(Assembler *this,uint *param_1,ulong param_2,int param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[1];
  if (uVar1 == 0x80) {
    if (param_1[3] == 2) {
      bVar2 = 1;
LAB_01268c6c:
      uVar3 = 0x60000000;
      if (!(bool)(uVar1 == 0x80 & bVar2)) {
        uVar3 = 0x20000000;
      }
      Emit(this,((uint)(((param_2 ^ 0xffffffffffffffff) & 0xff) == 0) |
                 (uint)(((param_2 ^ 0xffffffffffffffff) & 0xff00) == 0) << 1 |
                 (uint)(((param_2 ^ 0xffffffffffffffff) & 0xff0000) == 0) << 2 |
                 (uint)(((param_2 ^ 0xffffffffffffffff) & 0xff000000) == 0) << 3 |
                (uint)(((param_2 ^ 0xffffffffffffffff) & 0xff00000000) == 0) << 4) << 5 |
                ((uint)(((param_2 ^ 0xffffffffffffffff) & 0xff0000000000) == 0) << 5 |
                 (uint)(((param_2 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) << 6 |
                (uint)(0xfe < param_2 >> 0x38) << 7) << 0xb | *param_1 | uVar3 | 0xf00e400);
      return;
    }
  }
  else if ((uVar1 == 0x40) && (param_1[3] == 1)) {
    bVar2 = 0;
    goto LAB_01268c6c;
  }
  uVar3 = (uint)param_2;
  if (param_4 != 0) {
    uVar5 = 0x40000000;
    if (param_1[2] != 1 || uVar1 != 0x80) {
      uVar5 = 0;
    }
    Emit(this,(uVar3 & 0xe0) << 0xb | (uVar3 & 0x1f) << 5 | (param_5 >> 4 & 1) << 0xc | *param_1 |
              uVar5 | 0xf00c400);
    return;
  }
  iVar4 = (int)param_5 >> 4;
  if (uVar1 == 0x80) {
    if (param_1[3] == 0x10) {
LAB_01268db4:
      iVar4 = 1;
      uVar6 = 0x8000;
      uVar5 = 1;
      goto LAB_01268de8;
    }
    uVar5 = param_5 >> 3 & 1;
    if (param_1[3] != 8) {
LAB_01268de4:
      uVar6 = 0;
      goto LAB_01268de8;
    }
  }
  else {
    if (uVar1 != 0x40) {
      uVar6 = 0;
      uVar5 = param_5 >> 3 & 1;
      goto LAB_01268de8;
    }
    if (param_1[3] == 8) goto LAB_01268db4;
    uVar5 = param_5 >> 3 & 1;
    if (param_1[3] != 4) goto LAB_01268de4;
  }
  uVar6 = 0x8000;
LAB_01268de8:
  uVar7 = 0x40000000;
  if (param_1[2] != 1 || uVar1 != 0x80) {
    uVar7 = 0;
  }
  Emit(this,(uVar3 & 0xe0) << 0xb | (uVar3 & 0x1f) << 5 | uVar6 | iVar4 << 0xe | uVar5 << 0xd |
            *param_1 | uVar7 | 0xf000400);
  return;
}

