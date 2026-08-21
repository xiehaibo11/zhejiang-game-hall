
void FUN_01155320(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,byte *param_7,byte *param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  
  uVar10 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar12 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar16 = uVar10 * 3 + uVar12 + 0x20002;
  uVar9 = uVar16 >> 0x12;
  uVar2 = (uint)*param_1 * 0x4a85 >> 8;
  uVar13 = (uVar2 + (uVar9 * 0x6625 >> 8)) - 0x379a;
  uVar16 = uVar16 >> 2 & 0xff;
  if (uVar13 >> 0xe == 0) {
    bVar11 = (byte)(uVar13 >> 6);
  }
  else {
    bVar11 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
  }
  uVar13 = ((uVar2 + 0x2204) - (uVar9 * 0x3408 >> 8)) - (uVar16 * 0x1913 >> 8);
  lVar14 = (long)param_9 - 1;
  if (uVar13 >> 0xe == 0) {
    uVar13 = uVar13 >> 6;
  }
  else {
    uVar13 = ((int)uVar13 >> 0x1f & 0xffffff01U) + 0xff;
  }
  uVar16 = (uVar2 + (uVar16 * 0x811a >> 8)) - 0x4515;
  if (uVar16 >> 0xe == 0) {
    uVar16 = uVar16 >> 6;
  }
  else {
    uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
  }
  *param_7 = bVar11 & 0xf8 | (byte)(uVar13 >> 5);
  param_7[1] = (byte)((uVar13 & 0x1c) << 3) | (byte)(uVar16 >> 3);
  iVar1 = (int)lVar14 >> 1;
  if (param_2 != (byte *)0x0) {
    uVar16 = uVar10 + 0x20002 + uVar12 * 3;
    uVar9 = uVar16 >> 0x12;
    uVar2 = (uint)*param_2 * 0x4a85 >> 8;
    uVar13 = (uVar2 + (uVar9 * 0x6625 >> 8)) - 0x379a;
    uVar16 = uVar16 >> 2 & 0xff;
    if (uVar13 >> 0xe == 0) {
      bVar11 = (byte)(uVar13 >> 6);
    }
    else {
      bVar11 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
    }
    uVar13 = ((0x2204 - (uVar9 * 0x3408 >> 8)) - (uVar16 * 0x1913 >> 8)) + uVar2;
    if (uVar13 >> 0xe == 0) {
      uVar13 = uVar13 >> 6;
    }
    else {
      uVar13 = ((int)uVar13 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar16 = (uVar2 + (uVar16 * 0x811a >> 8)) - 0x4515;
    if (uVar16 >> 0xe == 0) {
      uVar16 = uVar16 >> 6;
    }
    else {
      uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
    }
    *param_8 = bVar11 & 0xf8 | (byte)(uVar13 >> 5);
    param_8[1] = (byte)((uVar13 & 0x1c) << 3) | (byte)(uVar16 >> 3);
  }
  if (0 < iVar1) {
    iVar8 = 4;
    lVar15 = (ulong)(iVar1 + 1) - 1;
    uVar16 = uVar10;
    uVar13 = uVar12;
    pbVar6 = param_1;
    pbVar7 = param_2;
    do {
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      uVar10 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar12 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar1 = uVar13 + uVar16 + uVar10 + uVar12 + 0x80008;
      uVar3 = iVar1 + (uVar10 + uVar13) * 2 >> 3;
      uVar9 = uVar3 + uVar16;
      uVar5 = uVar9 >> 1 & 0xff;
      uVar9 = uVar9 >> 0x11;
      uVar4 = (uint)pbVar6[1] * 0x4a85 >> 8;
      uVar2 = (uVar4 + (uVar9 * 0x6625 >> 8)) - 0x379a;
      if (uVar2 >> 0xe == 0) {
        bVar11 = (byte)(uVar2 >> 6);
      }
      else {
        bVar11 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = iVar1 + (uVar12 + uVar16) * 2 >> 3;
      uVar16 = ((uVar4 + 0x2204) - (uVar9 * 0x3408 >> 8)) - (uVar5 * 0x1913 >> 8);
      if (uVar16 >> 0xe == 0) {
        uVar16 = uVar16 >> 6;
      }
      else {
        uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar9 = (uVar4 + (uVar5 * 0x811a >> 8)) - 0x4515;
      uVar4 = uVar2 + uVar10;
      if (uVar9 >> 0xe == 0) {
        uVar9 = uVar9 >> 6;
      }
      else {
        uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
      }
      param_7[iVar8 + -2] = bVar11 & 0xf8 | (byte)(uVar16 >> 5);
      (param_7 + (iVar8 + -2))[1] = (byte)((uVar16 & 0x1c) << 3) | (byte)(uVar9 >> 3);
      uVar9 = uVar4 >> 0x11;
      uVar5 = uVar4 >> 1 & 0xff;
      uVar4 = (uint)pbVar6[2] * 0x4a85 >> 8;
      uVar16 = (uVar4 + (uVar9 * 0x6625 >> 8)) - 0x379a;
      if (uVar16 >> 0xe == 0) {
        bVar11 = (byte)(uVar16 >> 6);
      }
      else {
        bVar11 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
      }
      uVar16 = ((0x2204 - (uVar9 * 0x3408 >> 8)) - (uVar5 * 0x1913 >> 8)) + uVar4;
      if (uVar16 >> 0xe == 0) {
        uVar16 = uVar16 >> 6;
      }
      else {
        uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar9 = (uVar4 + (uVar5 * 0x811a >> 8)) - 0x4515;
      if (uVar9 >> 0xe == 0) {
        uVar9 = uVar9 >> 6;
      }
      else {
        uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
      }
      param_7[iVar8] = bVar11 & 0xf8 | (byte)(uVar16 >> 5);
      (param_7 + iVar8)[1] = (byte)((uVar16 & 0x1c) << 3) | (byte)(uVar9 >> 3);
      if (param_2 != (byte *)0x0) {
        uVar2 = uVar2 + uVar13;
        uVar13 = uVar2 >> 0x11;
        uVar9 = (uint)pbVar7[1] * 0x4a85 >> 8;
        uVar16 = (uVar9 + (uVar13 * 0x6625 >> 8)) - 0x379a;
        uVar2 = uVar2 >> 1 & 0xff;
        if (uVar16 >> 0xe == 0) {
          bVar11 = (byte)(uVar16 >> 6);
        }
        else {
          bVar11 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
        }
        uVar16 = ((0x2204 - (uVar13 * 0x3408 >> 8)) - (uVar2 * 0x1913 >> 8)) + uVar9;
        if (uVar16 >> 0xe == 0) {
          uVar16 = uVar16 >> 6;
        }
        else {
          uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar13 = (uVar9 + (uVar2 * 0x811a >> 8)) - 0x4515;
        uVar3 = uVar3 + uVar12;
        if (uVar13 >> 0xe == 0) {
          uVar13 = uVar13 >> 6;
        }
        else {
          uVar13 = ((int)uVar13 >> 0x1f & 0xffffff01U) + 0xff;
        }
        param_8[iVar8 + -2] = bVar11 & 0xf8 | (byte)(uVar16 >> 5);
        (param_8 + (iVar8 + -2))[1] = (byte)((uVar16 & 0x1c) << 3) | (byte)(uVar13 >> 3);
        uVar13 = uVar3 >> 0x11;
        uVar9 = (uint)pbVar7[2] * 0x4a85 >> 8;
        uVar16 = (uVar9 + (uVar13 * 0x6625 >> 8)) - 0x379a;
        uVar2 = uVar3 >> 1 & 0xff;
        if (uVar16 >> 0xe == 0) {
          bVar11 = (byte)(uVar16 >> 6);
        }
        else {
          bVar11 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
        }
        uVar16 = ((0x2204 - (uVar13 * 0x3408 >> 8)) - (uVar2 * 0x1913 >> 8)) + uVar9;
        if (uVar16 >> 0xe == 0) {
          uVar16 = uVar16 >> 6;
        }
        else {
          uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar13 = (uVar9 + (uVar2 * 0x811a >> 8)) - 0x4515;
        if (uVar13 >> 0xe == 0) {
          uVar13 = uVar13 >> 6;
        }
        else {
          uVar13 = ((int)uVar13 >> 0x1f & 0xffffff01U) + 0xff;
        }
        param_8[iVar8] = bVar11 & 0xf8 | (byte)(uVar16 >> 5);
        (param_8 + iVar8)[1] = (byte)((uVar16 & 0x1c) << 3) | (byte)(uVar13 >> 3);
      }
      iVar8 = iVar8 + 4;
      lVar15 = lVar15 + -1;
      uVar16 = uVar10;
      uVar13 = uVar12;
      pbVar6 = pbVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (lVar15 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar16 = uVar12 + 0x20002 + uVar10 * 3;
    uVar2 = uVar16 >> 2 & 0xff;
    uVar16 = uVar16 >> 0x12;
    uVar9 = (uint)param_1[lVar14] * 0x4a85 >> 8;
    iVar1 = (int)lVar14 << 1;
    uVar13 = (uVar9 + (uVar16 * 0x6625 >> 8)) - 0x379a;
    if (uVar13 >> 0xe == 0) {
      bVar11 = (byte)(uVar13 >> 6);
    }
    else {
      bVar11 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
    }
    uVar16 = ((0x2204 - (uVar16 * 0x3408 >> 8)) - (uVar2 * 0x1913 >> 8)) + uVar9;
    if (uVar16 >> 0xe == 0) {
      uVar16 = uVar16 >> 6;
    }
    else {
      uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar13 = (uVar9 + (uVar2 * 0x811a >> 8)) - 0x4515;
    if (uVar13 >> 0xe == 0) {
      uVar13 = uVar13 >> 6;
    }
    else {
      uVar13 = ((int)uVar13 >> 0x1f & 0xffffff01U) + 0xff;
    }
    param_7[iVar1] = bVar11 & 0xf8 | (byte)(uVar16 >> 5);
    (param_7 + iVar1)[1] = (byte)((uVar16 & 0x1c) << 3) | (byte)(uVar13 >> 3);
    if (param_2 != (byte *)0x0) {
      uVar16 = uVar10 + 0x20002 + uVar12 * 3;
      uVar10 = uVar16 >> 0x12;
      uVar12 = (uint)param_2[lVar14] * 0x4a85 >> 8;
      uVar13 = (uVar12 + (uVar10 * 0x6625 >> 8)) - 0x379a;
      uVar16 = uVar16 >> 2 & 0xff;
      if (uVar13 >> 0xe == 0) {
        bVar11 = (byte)(uVar13 >> 6);
      }
      else {
        bVar11 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
      }
      uVar13 = ((0x2204 - (uVar10 * 0x3408 >> 8)) - (uVar16 * 0x1913 >> 8)) + uVar12;
      if (uVar13 >> 0xe == 0) {
        uVar13 = uVar13 >> 6;
      }
      else {
        uVar13 = ((int)uVar13 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar16 = (uVar12 + (uVar16 * 0x811a >> 8)) - 0x4515;
      if (uVar16 >> 0xe == 0) {
        uVar16 = uVar16 >> 6;
      }
      else {
        uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
      }
      param_8[iVar1] = bVar11 & 0xf8 | (byte)(uVar13 >> 5);
      (param_8 + iVar1)[1] = (byte)((uVar13 & 0x1c) << 3) | (byte)(uVar16 >> 3);
    }
  }
  return;
}

