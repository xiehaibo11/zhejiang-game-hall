
int FUN_0010f1c8(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  bVar1 = *param_1;
  if (bVar1 - 0x30 < 10) {
    iVar5 = -0x30;
  }
  else if (bVar1 - 0x41 < 6) {
    iVar5 = -0x37;
  }
  else {
    if (5 < bVar1 - 0x61) {
      return 0;
    }
    iVar5 = -0x57;
  }
  bVar2 = param_1[1];
  if (bVar2 - 0x30 < 10) {
    iVar6 = -0x30;
  }
  else if (bVar2 - 0x41 < 6) {
    iVar6 = -0x37;
  }
  else {
    if (5 < bVar2 - 0x61) {
      return 0;
    }
    iVar6 = -0x57;
  }
  bVar3 = param_1[2];
  if (bVar3 - 0x30 < 10) {
    iVar7 = -0x30;
  }
  else if (bVar3 - 0x41 < 6) {
    iVar7 = -0x37;
  }
  else {
    if (5 < bVar3 - 0x61) {
      return 0;
    }
    iVar7 = -0x57;
  }
  bVar4 = param_1[3];
  if (bVar4 - 0x30 < 10) {
    iVar8 = -0x30;
  }
  else if (bVar4 - 0x41 < 6) {
    iVar8 = -0x37;
  }
  else {
    if (5 < bVar4 - 0x61) {
      return 0;
    }
    iVar8 = -0x57;
  }
  return iVar8 + (uint)bVar4 +
         (iVar7 + (uint)bVar3 + (iVar6 + (uint)bVar2 + (iVar5 + (uint)bVar1) * 0x10) * 0x10) * 0x10;
}

