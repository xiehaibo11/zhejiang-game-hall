
undefined8 FUN_00e40aa0(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar1 + 2) {
    return 0xa1;
  }
  pbVar4 = (byte *)*puVar1;
  lVar8 = *(long *)(param_1 + 0x38);
  bVar2 = *pbVar4;
  uVar6 = (ulong)bVar2;
  if (bVar2 == 0xff) {
    uVar6 = (ulong)(short)(((uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 | (uint)pbVar4[3]) + 0x80
                          >> 8);
    uVar3 = uVar6;
joined_r0x00e40b34:
    if ((long)uVar3 < 0) {
      return 3;
    }
  }
  else {
    if (bVar2 == 0x1e) {
      lVar5 = FUN_00e41c10(pbVar4,*(undefined8 *)(param_1 + 0x10),0,0);
      uVar6 = lVar5 >> 0x10;
      uVar3 = uVar6;
      goto joined_r0x00e40b34;
    }
    pbVar7 = *(byte **)(param_1 + 0x10);
    if (bVar2 != 0x1d) {
      if (bVar2 == 0x1c) {
        if (pbVar7 < pbVar4 + 3) goto LAB_00e40b94;
        uVar6 = (long)(short)((ushort)pbVar4[1] << 8) | (ulong)pbVar4[2];
        uVar3 = (long)(short)((ushort)pbVar4[1] << 8);
      }
      else {
        if (0xf6 < bVar2) {
          if (bVar2 < 0xfb) {
            if (pbVar4 + 2 <= pbVar7) {
              uVar6 = (uVar6 * 0x100 - 0xf700 | (ulong)pbVar4[1]) + 0x6c;
              uVar3 = uVar6;
              goto joined_r0x00e40b34;
            }
          }
          else if (pbVar4 + 2 <= pbVar7) {
            uVar6 = (uVar6 * -0x100 + 0xfa94) - (ulong)pbVar4[1];
            uVar3 = uVar6;
            goto joined_r0x00e40b34;
          }
LAB_00e40b94:
          uVar6 = 0;
          goto LAB_00e40bd0;
        }
        uVar6 = uVar6 - 0x8b;
        uVar3 = uVar6;
      }
      goto joined_r0x00e40b34;
    }
    if (pbVar7 < pbVar4 + 5) goto LAB_00e40b94;
    uVar6 = (ulong)pbVar4[1] << 0x18 | (ulong)pbVar4[2] << 0x10 | (ulong)pbVar4[3] << 8 |
            (ulong)pbVar4[4];
  }
LAB_00e40bd0:
  *(ulong *)(lVar8 + 0xd0) = uVar6;
  pbVar4 = (byte *)puVar1[1];
  bVar2 = *pbVar4;
  uVar6 = (ulong)bVar2;
  if (bVar2 == 0xff) {
    uVar6 = (ulong)(short)(((uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 | (uint)pbVar4[3]) + 0x80
                          >> 8);
    uVar3 = uVar6;
  }
  else if (bVar2 == 0x1e) {
    lVar5 = FUN_00e41c10(pbVar4,*(undefined8 *)(param_1 + 0x10),0,0);
    uVar6 = lVar5 >> 0x10;
    uVar3 = uVar6;
  }
  else {
    pbVar7 = *(byte **)(param_1 + 0x10);
    if (bVar2 == 0x1d) {
      if (pbVar4 + 5 <= pbVar7) {
        uVar6 = (ulong)pbVar4[1] << 0x18 | (ulong)pbVar4[2] << 0x10 | (ulong)pbVar4[3] << 8 |
                (ulong)pbVar4[4];
        goto LAB_00e40cf8;
      }
LAB_00e40c8c:
      uVar6 = 0;
      goto LAB_00e40cf8;
    }
    if (bVar2 == 0x1c) {
      if (pbVar7 < pbVar4 + 3) goto LAB_00e40c8c;
      uVar6 = (long)(short)((ushort)pbVar4[1] << 8) | (ulong)pbVar4[2];
      uVar3 = (long)(short)((ushort)pbVar4[1] << 8);
    }
    else if (bVar2 < 0xf7) {
      uVar6 = uVar6 - 0x8b;
      uVar3 = uVar6;
    }
    else if (bVar2 < 0xfb) {
      if (pbVar7 < pbVar4 + 2) goto LAB_00e40c8c;
      uVar6 = (uVar6 * 0x100 - 0xf700 | (ulong)pbVar4[1]) + 0x6c;
      uVar3 = uVar6;
    }
    else {
      if (pbVar7 < pbVar4 + 2) goto LAB_00e40c8c;
      uVar6 = (uVar6 * -0x100 + 0xfa94) - (ulong)pbVar4[1];
      uVar3 = uVar6;
    }
  }
  if ((long)uVar3 < 0) {
    return 3;
  }
LAB_00e40cf8:
  *(ulong *)(lVar8 + 200) = uVar6;
  return 0;
}

