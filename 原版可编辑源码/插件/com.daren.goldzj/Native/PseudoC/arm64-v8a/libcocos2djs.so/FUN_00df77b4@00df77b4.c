
void FUN_00df77b4(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,char *param_7,char *param_8,int param_9)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  
  uVar11 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar12 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar17 = uVar11 * 3 + uVar12 + 0x20002;
  uVar6 = uVar17 >> 2 & 0xff;
  uVar3 = (uint)*param_1 * 0x4a85 >> 8;
  uVar13 = (uVar3 + (uVar6 * 0x811a >> 8)) - 0x4515;
  uVar17 = uVar17 >> 0x12 & 0xff;
  if (uVar13 >> 0xe == 0) {
    cVar10 = (char)(uVar13 >> 6);
  }
  else {
    cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
  }
  lVar14 = (long)param_9 - 1;
  uVar13 = ((uVar3 + 0x2204) - (uVar6 * 0x1913 >> 8)) - (uVar17 * 0x3408 >> 8);
  *param_7 = cVar10;
  if (uVar13 >> 0xe == 0) {
    cVar10 = (char)(uVar13 >> 6);
  }
  else {
    cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
  }
  uVar17 = (uVar3 + (uVar17 * 0x6625 >> 8)) - 0x379a;
  param_7[1] = cVar10;
  if (uVar17 >> 0xe == 0) {
    cVar10 = (char)(uVar17 >> 6);
  }
  else {
    cVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
  }
  param_7[2] = cVar10;
  param_7[3] = -1;
  iVar2 = (int)lVar14 >> 1;
  if (param_2 != (byte *)0x0) {
    uVar17 = uVar11 + 0x20002 + uVar12 * 3;
    uVar6 = uVar17 >> 2 & 0xff;
    uVar3 = (uint)*param_2 * 0x4a85 >> 8;
    uVar13 = (uVar3 + (uVar6 * 0x811a >> 8)) - 0x4515;
    uVar17 = uVar17 >> 0x12 & 0xff;
    if (uVar13 >> 0xe == 0) {
      cVar10 = (char)(uVar13 >> 6);
    }
    else {
      cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
    }
    uVar13 = ((0x2204 - (uVar6 * 0x1913 >> 8)) - (uVar17 * 0x3408 >> 8)) + uVar3;
    *param_8 = cVar10;
    if (uVar13 >> 0xe == 0) {
      cVar10 = (char)(uVar13 >> 6);
    }
    else {
      cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
    }
    uVar17 = (uVar3 + (uVar17 * 0x6625 >> 8)) - 0x379a;
    param_8[1] = cVar10;
    if (uVar17 >> 0xe == 0) {
      cVar10 = (char)(uVar17 >> 6);
    }
    else {
      cVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
    }
    param_8[2] = cVar10;
    param_8[3] = -1;
  }
  if (0 < iVar2) {
    iVar16 = 4;
    lVar15 = (ulong)(iVar2 + 1) - 1;
    uVar17 = uVar11;
    uVar13 = uVar12;
    pbVar8 = param_2;
    pbVar9 = param_1;
    do {
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      uVar11 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar12 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar2 = uVar13 + uVar17 + uVar11 + uVar12 + 0x80008;
      uVar4 = iVar2 + (uVar11 + uVar13) * 2 >> 3;
      uVar3 = uVar4 + uVar17;
      uVar7 = uVar3 >> 1 & 0xff;
      uVar5 = (uint)pbVar9[1] * 0x4a85 >> 8;
      uVar6 = (uVar5 + (uVar7 * 0x811a >> 8)) - 0x4515;
      pcVar1 = param_7 + iVar16;
      uVar3 = uVar3 >> 0x11 & 0xff;
      if (uVar6 >> 0xe == 0) {
        cVar10 = (char)(uVar6 >> 6);
      }
      else {
        cVar10 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      uVar17 = iVar2 + (uVar12 + uVar17) * 2 >> 3;
      uVar6 = ((uVar5 + 0x2204) - (uVar7 * 0x1913 >> 8)) - (uVar3 * 0x3408 >> 8);
      *pcVar1 = cVar10;
      if (uVar6 >> 0xe == 0) {
        cVar10 = (char)(uVar6 >> 6);
      }
      else {
        cVar10 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      uVar3 = (uVar5 + (uVar3 * 0x6625 >> 8)) - 0x379a;
      uVar6 = uVar17 + uVar11;
      pcVar1[1] = cVar10;
      if (uVar3 >> 0xe == 0) {
        cVar10 = (char)(uVar3 >> 6);
      }
      else {
        cVar10 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      pcVar1[2] = cVar10;
      pcVar1[3] = -1;
      uVar7 = uVar6 >> 1 & 0xff;
      uVar5 = (uint)pbVar9[2] * 0x4a85 >> 8;
      uVar3 = (uVar5 + (uVar7 * 0x811a >> 8)) - 0x4515;
      pcVar1 = param_7 + (iVar16 + 4);
      uVar6 = uVar6 >> 0x11 & 0xff;
      if (uVar3 >> 0xe == 0) {
        cVar10 = (char)(uVar3 >> 6);
      }
      else {
        cVar10 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = ((0x2204 - (uVar7 * 0x1913 >> 8)) - (uVar6 * 0x3408 >> 8)) + uVar5;
      *pcVar1 = cVar10;
      if (uVar3 >> 0xe == 0) {
        cVar10 = (char)(uVar3 >> 6);
      }
      else {
        cVar10 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = (uVar5 + (uVar6 * 0x6625 >> 8)) - 0x379a;
      pcVar1[1] = cVar10;
      if (uVar3 >> 0xe == 0) {
        cVar10 = (char)(uVar3 >> 6);
      }
      else {
        cVar10 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      pcVar1[2] = cVar10;
      pcVar1[3] = -1;
      if (param_2 != (byte *)0x0) {
        uVar17 = uVar17 + uVar13;
        uVar6 = uVar17 >> 1 & 0xff;
        pcVar1 = param_8 + iVar16;
        uVar3 = (uint)pbVar8[1] * 0x4a85 >> 8;
        uVar13 = (uVar3 + (uVar6 * 0x811a >> 8)) - 0x4515;
        uVar17 = uVar17 >> 0x11 & 0xff;
        if (uVar13 >> 0xe == 0) {
          cVar10 = (char)(uVar13 >> 6);
        }
        else {
          cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
        }
        uVar13 = ((0x2204 - (uVar6 * 0x1913 >> 8)) - (uVar17 * 0x3408 >> 8)) + uVar3;
        *pcVar1 = cVar10;
        if (uVar13 >> 0xe == 0) {
          cVar10 = (char)(uVar13 >> 6);
        }
        else {
          cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
        }
        uVar17 = (uVar3 + (uVar17 * 0x6625 >> 8)) - 0x379a;
        uVar4 = uVar4 + uVar12;
        pcVar1[1] = cVar10;
        if (uVar17 >> 0xe == 0) {
          cVar10 = (char)(uVar17 >> 6);
        }
        else {
          cVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        pcVar1[2] = cVar10;
        pcVar1[3] = -1;
        uVar3 = uVar4 >> 1 & 0xff;
        pcVar1 = param_8 + (iVar16 + 4);
        uVar13 = (uint)pbVar8[2] * 0x4a85 >> 8;
        uVar17 = (uVar13 + (uVar3 * 0x811a >> 8)) - 0x4515;
        uVar6 = uVar4 >> 0x11 & 0xff;
        if (uVar17 >> 0xe == 0) {
          cVar10 = (char)(uVar17 >> 6);
        }
        else {
          cVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        uVar17 = ((0x2204 - (uVar3 * 0x1913 >> 8)) - (uVar6 * 0x3408 >> 8)) + uVar13;
        *pcVar1 = cVar10;
        if (uVar17 >> 0xe == 0) {
          cVar10 = (char)(uVar17 >> 6);
        }
        else {
          cVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        uVar17 = (uVar13 + (uVar6 * 0x6625 >> 8)) - 0x379a;
        pcVar1[1] = cVar10;
        if (uVar17 >> 0xe == 0) {
          cVar10 = (char)(uVar17 >> 6);
        }
        else {
          cVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        pcVar1[2] = cVar10;
        pcVar1[3] = -1;
      }
      iVar16 = iVar16 + 8;
      lVar15 = lVar15 + -1;
      uVar17 = uVar11;
      uVar13 = uVar12;
      pbVar8 = pbVar8 + 2;
      pbVar9 = pbVar9 + 2;
    } while (lVar15 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar17 = uVar12 + 0x20002 + uVar11 * 3;
    uVar6 = uVar17 >> 2 & 0xff;
    uVar3 = (uint)param_1[lVar14] * 0x4a85 >> 8;
    iVar2 = (int)lVar14 << 2;
    uVar13 = (uVar3 + (uVar6 * 0x811a >> 8)) - 0x4515;
    param_7 = param_7 + iVar2;
    uVar17 = uVar17 >> 0x12 & 0xff;
    if (uVar13 >> 0xe == 0) {
      cVar10 = (char)(uVar13 >> 6);
    }
    else {
      cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
    }
    uVar13 = ((0x2204 - (uVar6 * 0x1913 >> 8)) - (uVar17 * 0x3408 >> 8)) + uVar3;
    *param_7 = cVar10;
    if (uVar13 >> 0xe == 0) {
      cVar10 = (char)(uVar13 >> 6);
    }
    else {
      cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
    }
    uVar17 = (uVar3 + (uVar17 * 0x6625 >> 8)) - 0x379a;
    param_7[1] = cVar10;
    if (uVar17 >> 0xe == 0) {
      cVar10 = (char)(uVar17 >> 6);
    }
    else {
      cVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
    }
    param_7[2] = cVar10;
    param_7[3] = -1;
    if (param_2 != (byte *)0x0) {
      param_8 = param_8 + iVar2;
      uVar17 = uVar11 + 0x20002 + uVar12 * 3;
      uVar12 = uVar17 >> 2 & 0xff;
      uVar11 = (uint)param_2[lVar14] * 0x4a85 >> 8;
      uVar13 = (uVar11 + (uVar12 * 0x811a >> 8)) - 0x4515;
      uVar17 = uVar17 >> 0x12 & 0xff;
      if (uVar13 >> 0xe == 0) {
        cVar10 = (char)(uVar13 >> 6);
      }
      else {
        cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
      }
      uVar13 = ((0x2204 - (uVar12 * 0x1913 >> 8)) - (uVar17 * 0x3408 >> 8)) + uVar11;
      *param_8 = cVar10;
      if (uVar13 >> 0xe == 0) {
        cVar10 = (char)(uVar13 >> 6);
      }
      else {
        cVar10 = ((byte)((int)uVar13 >> 0x1f) & 1) - 1;
      }
      uVar17 = (uVar11 + (uVar17 * 0x6625 >> 8)) - 0x379a;
      param_8[1] = cVar10;
      if (uVar17 >> 0xe == 0) {
        cVar10 = (char)(uVar17 >> 6);
      }
      else {
        cVar10 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
      }
      param_8[2] = cVar10;
      param_8[3] = -1;
    }
  }
  return;
}

