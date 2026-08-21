
int TIFFComputeTile(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = *(uint *)(param_1 + 0x60);
  uVar2 = *(uint *)(param_1 + 100);
  uVar6 = *(uint *)(param_1 + 0x68);
  uVar3 = 0;
  if (uVar7 != 1) {
    uVar3 = param_4;
  }
  if (uVar2 == 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x58);
  }
  if (uVar6 == 0xffffffff) {
    uVar6 = *(uint *)(param_1 + 0x5c);
  }
  uVar1 = uVar7;
  if (*(uint *)(param_1 + 0x6c) != 0xffffffff) {
    uVar1 = *(uint *)(param_1 + 0x6c);
  }
  iVar5 = 1;
  if (((uVar2 != 0) && (uVar6 != 0)) && (uVar1 != 0)) {
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x58) < -uVar2) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = ((uVar2 + *(uint *)(param_1 + 0x58)) - 1) / uVar2;
      }
    }
    uVar8 = 0;
    if (*(uint *)(param_1 + 0x5c) < -uVar6) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = ((uVar6 + *(uint *)(param_1 + 0x5c)) - 1) / uVar6;
      }
    }
    uVar9 = 0;
    if (uVar7 < -uVar1) {
      uVar9 = 0;
      if (uVar1 != 0) {
        uVar9 = ((uVar1 + uVar7) - 1) / uVar1;
      }
    }
    if (*(short *)(param_1 + 0xaa) == 2) {
      uVar7 = 0;
      if (uVar1 != 0) {
        uVar7 = uVar3 / uVar1;
      }
      uVar7 = uVar7 + uVar9 * (param_5 & 0xffff);
    }
    else {
      uVar7 = 0;
      if (uVar1 != 0) {
        uVar7 = uVar3 / uVar1;
      }
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = param_3 / uVar6;
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = param_2 / uVar2;
    }
    iVar5 = uVar7 * uVar8 * uVar4 + uVar3 * uVar4 + uVar6;
  }
  return iVar5;
}

