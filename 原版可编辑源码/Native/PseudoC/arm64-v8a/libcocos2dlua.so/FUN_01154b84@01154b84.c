
void FUN_01154b84(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,byte *param_7,byte *param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  
  uVar11 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar17 = uVar11 * 3 + uVar13 + 0x20002;
  uVar2 = uVar17 >> 0x12;
  uVar3 = (uint)*param_1 * 0x4a85 >> 8;
  uVar14 = (uVar3 + (uVar2 * 0x6625 >> 8)) - 0x379a;
  uVar17 = uVar17 >> 2 & 0xff;
  if (uVar14 >> 0xe == 0) {
    bVar12 = (byte)(uVar14 >> 6);
  }
  else {
    bVar12 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
  }
  uVar14 = ((uVar3 + 0x2204) - (uVar2 * 0x3408 >> 8)) - (uVar17 * 0x1913 >> 8);
  lVar15 = (long)param_9 - 1;
  if (uVar14 >> 0xe == 0) {
    uVar14 = uVar14 >> 6;
  }
  else {
    uVar14 = ((int)uVar14 >> 0x1f & 0xffffff01U) + 0xff;
  }
  uVar17 = (uVar3 + (uVar17 * 0x811a >> 8)) - 0x4515;
  if (uVar17 >> 0xe == 0) {
    bVar10 = (byte)(uVar17 >> 6);
  }
  else {
    bVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
  }
  *param_7 = bVar12 & 0xf0 | (byte)(uVar14 >> 4);
  param_7[1] = bVar10 | 0xf;
  iVar1 = (int)lVar15 >> 1;
  if (param_2 != (byte *)0x0) {
    uVar17 = uVar11 + 0x20002 + uVar13 * 3;
    uVar2 = uVar17 >> 0x12;
    uVar3 = (uint)*param_2 * 0x4a85 >> 8;
    uVar14 = (uVar3 + (uVar2 * 0x6625 >> 8)) - 0x379a;
    uVar17 = uVar17 >> 2 & 0xff;
    if (uVar14 >> 0xe == 0) {
      bVar12 = (byte)(uVar14 >> 6);
    }
    else {
      bVar12 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
    }
    uVar14 = ((0x2204 - (uVar2 * 0x3408 >> 8)) - (uVar17 * 0x1913 >> 8)) + uVar3;
    if (uVar14 >> 0xe == 0) {
      uVar14 = uVar14 >> 6;
    }
    else {
      uVar14 = ((int)uVar14 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar17 = (uVar3 + (uVar17 * 0x811a >> 8)) - 0x4515;
    if (uVar17 >> 0xe == 0) {
      bVar10 = (byte)(uVar17 >> 6);
    }
    else {
      bVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
    }
    *param_8 = bVar12 & 0xf0 | (byte)(uVar14 >> 4);
    param_8[1] = bVar10 | 0xf;
  }
  if (0 < iVar1) {
    iVar9 = 4;
    lVar16 = (ulong)(iVar1 + 1) - 1;
    uVar17 = uVar11;
    uVar14 = uVar13;
    pbVar7 = param_1;
    pbVar8 = param_2;
    do {
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      uVar11 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar1 = uVar14 + uVar17 + uVar11 + uVar13 + 0x80008;
      uVar4 = iVar1 + (uVar11 + uVar14) * 2 >> 3;
      uVar2 = uVar4 + uVar17;
      uVar6 = uVar2 >> 1 & 0xff;
      uVar2 = uVar2 >> 0x11;
      uVar5 = (uint)pbVar7[1] * 0x4a85 >> 8;
      uVar3 = (uVar5 + (uVar2 * 0x6625 >> 8)) - 0x379a;
      if (uVar3 >> 0xe == 0) {
        bVar12 = (byte)(uVar3 >> 6);
      }
      else {
        bVar12 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar1 + (uVar13 + uVar17) * 2 >> 3;
      uVar17 = ((uVar5 + 0x2204) - (uVar2 * 0x3408 >> 8)) - (uVar6 * 0x1913 >> 8);
      if (uVar17 >> 0xe == 0) {
        uVar17 = uVar17 >> 6;
      }
      else {
        uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar2 = (uVar5 + (uVar6 * 0x811a >> 8)) - 0x4515;
      uVar5 = uVar3 + uVar11;
      if (uVar2 >> 0xe == 0) {
        bVar10 = (byte)(uVar2 >> 6);
      }
      else {
        bVar10 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      (param_7 + (iVar9 + -2))[1] = bVar10 | 0xf;
      param_7[iVar9 + -2] = bVar12 & 0xf0 | (byte)(uVar17 >> 4);
      uVar2 = uVar5 >> 0x11;
      uVar6 = uVar5 >> 1 & 0xff;
      uVar5 = (uint)pbVar7[2] * 0x4a85 >> 8;
      uVar17 = (uVar5 + (uVar2 * 0x6625 >> 8)) - 0x379a;
      if (uVar17 >> 0xe == 0) {
        bVar12 = (byte)(uVar17 >> 6);
      }
      else {
        bVar12 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
      }
      uVar17 = ((0x2204 - (uVar2 * 0x3408 >> 8)) - (uVar6 * 0x1913 >> 8)) + uVar5;
      if (uVar17 >> 0xe == 0) {
        uVar17 = uVar17 >> 6;
      }
      else {
        uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar2 = (uVar5 + (uVar6 * 0x811a >> 8)) - 0x4515;
      if (uVar2 >> 0xe == 0) {
        bVar10 = (byte)(uVar2 >> 6);
      }
      else {
        bVar10 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      param_7[iVar9] = bVar12 & 0xf0 | (byte)(uVar17 >> 4);
      (param_7 + iVar9)[1] = bVar10 | 0xf;
      if (param_2 != (byte *)0x0) {
        uVar3 = uVar3 + uVar14;
        uVar14 = uVar3 >> 0x11;
        uVar2 = (uint)pbVar8[1] * 0x4a85 >> 8;
        uVar17 = (uVar2 + (uVar14 * 0x6625 >> 8)) - 0x379a;
        uVar3 = uVar3 >> 1 & 0xff;
        if (uVar17 >> 0xe == 0) {
          bVar12 = (byte)(uVar17 >> 6);
        }
        else {
          bVar12 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        uVar17 = ((0x2204 - (uVar14 * 0x3408 >> 8)) - (uVar3 * 0x1913 >> 8)) + uVar2;
        if (uVar17 >> 0xe == 0) {
          uVar17 = uVar17 >> 6;
        }
        else {
          uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar14 = (uVar2 + (uVar3 * 0x811a >> 8)) - 0x4515;
        uVar4 = uVar4 + uVar13;
        if (uVar14 >> 0xe == 0) {
          bVar10 = (byte)(uVar14 >> 6);
        }
        else {
          bVar10 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        (param_8 + (iVar9 + -2))[1] = bVar10 | 0xf;
        param_8[iVar9 + -2] = bVar12 & 0xf0 | (byte)(uVar17 >> 4);
        uVar14 = uVar4 >> 0x11;
        uVar2 = (uint)pbVar8[2] * 0x4a85 >> 8;
        uVar17 = (uVar2 + (uVar14 * 0x6625 >> 8)) - 0x379a;
        uVar3 = uVar4 >> 1 & 0xff;
        if (uVar17 >> 0xe == 0) {
          bVar12 = (byte)(uVar17 >> 6);
        }
        else {
          bVar12 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        uVar17 = ((0x2204 - (uVar14 * 0x3408 >> 8)) - (uVar3 * 0x1913 >> 8)) + uVar2;
        if (uVar17 >> 0xe == 0) {
          uVar17 = uVar17 >> 6;
        }
        else {
          uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar14 = (uVar2 + (uVar3 * 0x811a >> 8)) - 0x4515;
        if (uVar14 >> 0xe == 0) {
          bVar10 = (byte)(uVar14 >> 6);
        }
        else {
          bVar10 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        param_8[iVar9] = bVar12 & 0xf0 | (byte)(uVar17 >> 4);
        (param_8 + iVar9)[1] = bVar10 | 0xf;
      }
      iVar9 = iVar9 + 4;
      lVar16 = lVar16 + -1;
      uVar17 = uVar11;
      uVar14 = uVar13;
      pbVar7 = pbVar7 + 2;
      pbVar8 = pbVar8 + 2;
    } while (lVar16 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar17 = uVar13 + 0x20002 + uVar11 * 3;
    uVar3 = uVar17 >> 2 & 0xff;
    uVar17 = uVar17 >> 0x12;
    uVar2 = (uint)param_1[lVar15] * 0x4a85 >> 8;
    iVar1 = (int)lVar15 << 1;
    uVar14 = (uVar2 + (uVar17 * 0x6625 >> 8)) - 0x379a;
    if (uVar14 >> 0xe == 0) {
      bVar12 = (byte)(uVar14 >> 6);
    }
    else {
      bVar12 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
    }
    uVar17 = ((0x2204 - (uVar17 * 0x3408 >> 8)) - (uVar3 * 0x1913 >> 8)) + uVar2;
    if (uVar17 >> 0xe == 0) {
      uVar17 = uVar17 >> 6;
    }
    else {
      uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar14 = (uVar2 + (uVar3 * 0x811a >> 8)) - 0x4515;
    if (uVar14 >> 0xe == 0) {
      bVar10 = (byte)(uVar14 >> 6);
    }
    else {
      bVar10 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
    }
    param_7[iVar1] = bVar12 & 0xf0 | (byte)(uVar17 >> 4);
    (param_7 + iVar1)[1] = bVar10 | 0xf;
    if (param_2 != (byte *)0x0) {
      uVar17 = uVar11 + 0x20002 + uVar13 * 3;
      uVar11 = uVar17 >> 0x12;
      uVar13 = (uint)param_2[lVar15] * 0x4a85 >> 8;
      uVar14 = (uVar13 + (uVar11 * 0x6625 >> 8)) - 0x379a;
      uVar17 = uVar17 >> 2 & 0xff;
      if (uVar14 >> 0xe == 0) {
        bVar12 = (byte)(uVar14 >> 6);
      }
      else {
        bVar12 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
      }
      uVar14 = ((0x2204 - (uVar11 * 0x3408 >> 8)) - (uVar17 * 0x1913 >> 8)) + uVar13;
      if (uVar14 >> 0xe == 0) {
        uVar14 = uVar14 >> 6;
      }
      else {
        uVar14 = ((int)uVar14 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar17 = (uVar13 + (uVar17 * 0x811a >> 8)) - 0x4515;
      if (uVar17 >> 0xe == 0) {
        bVar10 = (byte)(uVar17 >> 6);
      }
      else {
        bVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
      }
      param_8[iVar1] = bVar12 & 0xf0 | (byte)(uVar14 >> 4);
      (param_8 + iVar1)[1] = bVar10 | 0xf;
    }
  }
  return;
}

