
undefined8 FUN_00e40f9c(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  uint extraout_var;
  byte *pbVar3;
  uint extraout_var_00;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar1 + 3) {
    return 0xa1;
  }
  pbVar3 = (byte *)*puVar1;
  lVar8 = *(long *)(param_1 + 0x38);
  bVar2 = *pbVar3;
  if (bVar2 == 0xff) {
    uVar5 = (uint)(short)(((uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 | (uint)pbVar3[3]) + 0x80
                         >> 8);
  }
  else if (bVar2 == 0x1e) {
    FUN_00e41c10(pbVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    uVar5 = extraout_var;
  }
  else {
    pbVar7 = *(byte **)(param_1 + 0x10);
    if (bVar2 == 0x1d) {
      if (pbVar7 < pbVar3 + 5) goto LAB_00e410dc;
      uVar5 = (uint)pbVar3[1] << 0x18 | (uint)pbVar3[2] << 0x10 | (uint)pbVar3[3] << 8 |
              (uint)pbVar3[4];
    }
    else if (bVar2 == 0x1c) {
      if (pbVar7 < pbVar3 + 3) goto LAB_00e410dc;
      uVar5 = (int)(short)((ushort)pbVar3[1] << 8) | (uint)pbVar3[2];
    }
    else if (bVar2 < 0xf7) {
      uVar5 = bVar2 - 0x8b;
    }
    else if (bVar2 < 0xfb) {
      if (pbVar7 < pbVar3 + 2) {
LAB_00e410dc:
        uVar5 = 0;
      }
      else {
        uVar5 = ((uint)bVar2 * 0x100 - 0xf700 | (uint)pbVar3[1]) + 0x6c;
      }
    }
    else {
      if (pbVar7 < pbVar3 + 2) goto LAB_00e410dc;
      uVar5 = ((uint)bVar2 * -0x100 + 0xfa94) - (uint)pbVar3[1];
    }
  }
  *(uint *)(lVar8 + 0xe4) = uVar5;
  pbVar3 = (byte *)puVar1[1];
  bVar2 = *pbVar3;
  if (bVar2 == 0xff) {
    uVar5 = (uint)(short)(((uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 | (uint)pbVar3[3]) + 0x80
                         >> 8);
  }
  else if (bVar2 == 0x1e) {
    FUN_00e41c10(pbVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    uVar5 = extraout_var_00;
  }
  else {
    pbVar7 = *(byte **)(param_1 + 0x10);
    if (bVar2 == 0x1d) {
      if (pbVar7 < pbVar3 + 5) goto LAB_00e411e8;
      uVar5 = (uint)pbVar3[1] << 0x18 | (uint)pbVar3[2] << 0x10 | (uint)pbVar3[3] << 8 |
              (uint)pbVar3[4];
    }
    else if (bVar2 == 0x1c) {
      if (pbVar7 < pbVar3 + 3) goto LAB_00e411e8;
      uVar5 = (int)(short)((ushort)pbVar3[1] << 8) | (uint)pbVar3[2];
    }
    else if (bVar2 < 0xf7) {
      uVar5 = bVar2 - 0x8b;
    }
    else if (bVar2 < 0xfb) {
      if (pbVar7 < pbVar3 + 2) {
LAB_00e411e8:
        uVar5 = 0;
      }
      else {
        uVar5 = ((uint)bVar2 * 0x100 - 0xf700 | (uint)pbVar3[1]) + 0x6c;
      }
    }
    else {
      if (pbVar7 < pbVar3 + 2) goto LAB_00e411e8;
      uVar5 = ((uint)bVar2 * -0x100 + 0xfa94) - (uint)pbVar3[1];
    }
  }
  *(uint *)(lVar8 + 0xe8) = uVar5;
  pbVar3 = (byte *)puVar1[2];
  bVar2 = *pbVar3;
  uVar6 = (ulong)bVar2;
  if (bVar2 == 0xff) {
    uVar6 = (ulong)(short)(((uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 | (uint)pbVar3[3]) + 0x80
                          >> 8);
  }
  else if (bVar2 == 0x1e) {
    lVar4 = FUN_00e41c10(pbVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    uVar6 = lVar4 >> 0x10;
  }
  else {
    pbVar7 = *(byte **)(param_1 + 0x10);
    if (bVar2 == 0x1d) {
      if (pbVar3 + 5 <= pbVar7) {
        uVar6 = (ulong)pbVar3[1] << 0x18 | (ulong)pbVar3[2] << 0x10 | (ulong)pbVar3[3] << 8 |
                (ulong)pbVar3[4];
        goto LAB_00e412f8;
      }
    }
    else if (bVar2 == 0x1c) {
      if (pbVar3 + 3 <= pbVar7) {
        uVar6 = (long)(short)((ushort)pbVar3[1] << 8) | (ulong)pbVar3[2];
        goto LAB_00e412f8;
      }
    }
    else {
      if (bVar2 < 0xf7) {
        uVar6 = uVar6 - 0x8b;
        goto LAB_00e412f8;
      }
      if (bVar2 < 0xfb) {
        if (pbVar3 + 2 <= pbVar7) {
          uVar6 = (uVar6 * 0x100 - 0xf700 | (ulong)pbVar3[1]) + 0x6c;
          goto LAB_00e412f8;
        }
      }
      else if (pbVar3 + 2 <= pbVar7) {
        uVar6 = (uVar6 * -0x100 + 0xfa94) - (ulong)pbVar3[1];
        goto LAB_00e412f8;
      }
    }
    uVar6 = 0;
  }
LAB_00e412f8:
  *(ulong *)(lVar8 + 0xf0) = uVar6;
  return 0;
}

