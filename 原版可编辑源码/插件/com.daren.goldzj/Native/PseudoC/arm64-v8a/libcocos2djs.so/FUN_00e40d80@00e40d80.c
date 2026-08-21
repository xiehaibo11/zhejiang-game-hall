
undefined8 FUN_00e40d80(long param_1)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  
  if (*(undefined8 **)(param_1 + 0x28) < *(undefined8 **)(param_1 + 0x20) + 5) {
    return 0xa1;
  }
  pbVar4 = (byte *)**(undefined8 **)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 0x38);
  bVar2 = *pbVar4;
  uVar6 = (ulong)bVar2;
  if (bVar2 == 0xff) {
    uVar7 = (ulong)(short)(((uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 | (uint)pbVar4[3]) + 0x80
                          >> 8);
  }
  else if (bVar2 == 0x1e) {
    lVar5 = FUN_00e41c10(pbVar4,*(undefined8 *)(param_1 + 0x10),0,0);
    uVar7 = lVar5 >> 0x10;
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0x10);
    if (bVar2 == 0x1d) {
      if (pbVar8 < pbVar4 + 5) {
        return 3;
      }
      uVar7 = (ulong)pbVar4[1] << 0x18 | (ulong)pbVar4[2] << 0x10 | (ulong)pbVar4[3] << 8 |
              (ulong)pbVar4[4];
      uVar6 = uVar7 - 2;
joined_r0x00e40ec0:
      sVar1 = (short)uVar7;
      goto joined_r0x00e40f74;
    }
    if (bVar2 == 0x1c) {
      if (pbVar8 < pbVar4 + 3) {
        return 3;
      }
      uVar7 = (long)(short)((ushort)pbVar4[1] << 8) | (ulong)pbVar4[2];
    }
    else {
      if (bVar2 < 0xf7) {
        uVar7 = uVar6 - 0x8b;
        uVar6 = uVar6 - 0x8d;
        goto joined_r0x00e40ec0;
      }
      if (bVar2 < 0xfb) {
        if (pbVar8 < pbVar4 + 2) {
          return 3;
        }
        uVar6 = uVar6 * 0x100 - 0xf700 | (ulong)pbVar4[1];
        sVar1 = (short)uVar6 + 0x6c;
        uVar6 = uVar6 + 0x6a;
        goto joined_r0x00e40f74;
      }
      if (pbVar8 < pbVar4 + 2) {
        return 3;
      }
      uVar7 = (uVar6 * -0x100 + 0xfa94) - (ulong)pbVar4[1];
    }
  }
  uVar6 = uVar7 - 2;
  sVar1 = (short)uVar7;
joined_r0x00e40f74:
  if (0xe < uVar6) {
    return 3;
  }
  *(short *)(lVar9 + 0x134) = sVar1;
  sVar3 = (short)((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) >> 3) + -4;
  *(short *)(lVar9 + 0x136) = sVar3;
  *(short *)(param_1 + 0x40) = sVar1;
  *(short *)(param_1 + 0x42) = sVar3;
  return 0;
}

