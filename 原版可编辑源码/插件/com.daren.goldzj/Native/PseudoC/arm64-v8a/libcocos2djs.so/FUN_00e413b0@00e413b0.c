
undefined8 FUN_00e413b0(long param_1)

{
  byte bVar1;
  uint extraout_var;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 == 0) {
    return 3;
  }
  if (*(long *)(lVar5 + 0x2d0) == 0) {
    return 3;
  }
  if (*(char *)(*(long *)(lVar5 + 0x2d0) + 0x421) != '\0') {
    return 0xa0;
  }
  pbVar2 = (byte *)**(undefined8 **)(param_1 + 0x20);
  bVar1 = *pbVar2;
  if (bVar1 == 0xff) {
    uVar3 = (uint)(short)(((uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 | (uint)pbVar2[3]) + 0x80
                         >> 8);
  }
  else if (bVar1 == 0x1e) {
    FUN_00e41c10(pbVar2,*(undefined8 *)(param_1 + 0x10),0,0);
    uVar3 = extraout_var;
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x10);
    if (bVar1 == 0x1d) {
      if (pbVar2 + 5 <= pbVar4) {
        uVar3 = (uint)pbVar2[1] << 0x18 | (uint)pbVar2[2] << 0x10 | (uint)pbVar2[3] << 8 |
                (uint)pbVar2[4];
        goto LAB_00e41528;
      }
    }
    else if (bVar1 == 0x1c) {
      if (pbVar2 + 3 <= pbVar4) {
        uVar3 = (int)(short)((ushort)pbVar2[1] << 8) | (uint)pbVar2[2];
        goto LAB_00e41528;
      }
    }
    else {
      if (bVar1 < 0xf7) {
        uVar3 = bVar1 - 0x8b;
        goto LAB_00e41528;
      }
      if (bVar1 < 0xfb) {
        if (pbVar2 + 2 <= pbVar4) {
          uVar3 = ((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar2[1]) + 0x6c;
          goto LAB_00e41528;
        }
      }
      else if (pbVar2 + 2 <= pbVar4) {
        uVar3 = ((uint)bVar1 * -0x100 + 0xfa94) - (uint)pbVar2[1];
        goto LAB_00e41528;
      }
    }
    uVar3 = 0;
  }
LAB_00e41528:
  *(uint *)(lVar5 + 0x2c8) = uVar3;
  return 0;
}

