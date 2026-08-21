
void FUN_0115351c(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,char *param_7,char *param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  
  uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar2 = (uint)*param_1 * 0x4a85 >> 8;
  uVar17 = uVar12 * 3 + uVar13 + 0x20002;
  uVar5 = uVar17 >> 2 & 0xff;
  uVar14 = (uVar2 + (uVar5 * 0x811a >> 8)) - 0x4515;
  uVar17 = uVar17 >> 0x12;
  if (uVar14 >> 0xe == 0) {
    cVar11 = (char)(uVar14 >> 6);
  }
  else {
    cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
  }
  lVar15 = (long)param_9 - 1;
  uVar14 = ((uVar2 + 0x2204) - (uVar17 * 0x3408 >> 8)) - (uVar5 * 0x1913 >> 8);
  *param_7 = cVar11;
  if (uVar14 >> 0xe == 0) {
    cVar11 = (char)(uVar14 >> 6);
  }
  else {
    cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
  }
  uVar17 = (uVar2 + (uVar17 * 0x6625 >> 8)) - 0x379a;
  param_7[1] = cVar11;
  if (uVar17 >> 0xe == 0) {
    cVar11 = (char)(uVar17 >> 6);
  }
  else {
    cVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
  }
  iVar1 = (int)lVar15 >> 1;
  param_7[2] = cVar11;
  if (param_2 != (byte *)0x0) {
    uVar17 = uVar12 + 0x20002 + uVar13 * 3;
    uVar5 = uVar17 >> 2 & 0xff;
    uVar2 = (uint)*param_2 * 0x4a85 >> 8;
    uVar14 = (uVar2 + (uVar5 * 0x811a >> 8)) - 0x4515;
    uVar17 = uVar17 >> 0x12;
    if (uVar14 >> 0xe == 0) {
      cVar11 = (char)(uVar14 >> 6);
    }
    else {
      cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
    }
    uVar14 = ((0x2204 - (uVar17 * 0x3408 >> 8)) - (uVar5 * 0x1913 >> 8)) + uVar2;
    *param_8 = cVar11;
    if (uVar14 >> 0xe == 0) {
      cVar11 = (char)(uVar14 >> 6);
    }
    else {
      cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
    }
    uVar17 = (uVar2 + (uVar17 * 0x6625 >> 8)) - 0x379a;
    param_8[1] = cVar11;
    if (uVar17 >> 0xe == 0) {
      cVar11 = (char)(uVar17 >> 6);
    }
    else {
      cVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
    }
    param_8[2] = cVar11;
  }
  if (0 < iVar1) {
    pcVar9 = param_7 + 4;
    pcVar10 = param_8 + 4;
    lVar16 = (ulong)(iVar1 + 1) - 1;
    uVar17 = uVar12;
    uVar14 = uVar13;
    pbVar7 = param_1;
    pbVar8 = param_2;
    do {
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar1 = uVar14 + uVar17 + uVar12 + uVar13 + 0x80008;
      uVar3 = iVar1 + (uVar12 + uVar14) * 2 >> 3;
      uVar2 = uVar3 + uVar17;
      uVar6 = uVar2 >> 1 & 0xff;
      uVar4 = (uint)pbVar7[1] * 0x4a85 >> 8;
      uVar5 = (uVar4 + (uVar6 * 0x811a >> 8)) - 0x4515;
      uVar2 = uVar2 >> 0x11;
      if (uVar5 >> 0xe == 0) {
        cVar11 = (char)(uVar5 >> 6);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar17 = iVar1 + (uVar13 + uVar17) * 2 >> 3;
      uVar5 = ((uVar4 + 0x2204) - (uVar2 * 0x3408 >> 8)) - (uVar6 * 0x1913 >> 8);
      pcVar9[-1] = cVar11;
      if (uVar5 >> 0xe == 0) {
        cVar11 = (char)(uVar5 >> 6);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar2 = (uVar4 + (uVar2 * 0x6625 >> 8)) - 0x379a;
      uVar5 = uVar17 + uVar12;
      *pcVar9 = cVar11;
      if (uVar2 >> 0xe == 0) {
        cVar11 = (char)(uVar2 >> 6);
      }
      else {
        cVar11 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      pcVar9[1] = cVar11;
      uVar6 = uVar5 >> 1 & 0xff;
      uVar4 = (uint)pbVar7[2] * 0x4a85 >> 8;
      uVar2 = (uVar4 + (uVar6 * 0x811a >> 8)) - 0x4515;
      uVar5 = uVar5 >> 0x11;
      if (uVar2 >> 0xe == 0) {
        cVar11 = (char)(uVar2 >> 6);
      }
      else {
        cVar11 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = ((0x2204 - (uVar5 * 0x3408 >> 8)) - (uVar6 * 0x1913 >> 8)) + uVar4;
      pcVar9[2] = cVar11;
      if (uVar2 >> 0xe == 0) {
        cVar11 = (char)(uVar2 >> 6);
      }
      else {
        cVar11 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = (uVar4 + (uVar5 * 0x6625 >> 8)) - 0x379a;
      pcVar9[3] = cVar11;
      if (uVar2 >> 0xe == 0) {
        pcVar9[4] = (char)(uVar2 >> 6);
      }
      else {
        pcVar9[4] = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      if (param_2 != (byte *)0x0) {
        uVar17 = uVar17 + uVar14;
        uVar5 = uVar17 >> 1 & 0xff;
        uVar17 = uVar17 >> 0x11;
        uVar2 = (uint)pbVar8[1] * 0x4a85 >> 8;
        uVar14 = (uVar2 + (uVar5 * 0x811a >> 8)) - 0x4515;
        if (uVar14 >> 0xe == 0) {
          cVar11 = (char)(uVar14 >> 6);
        }
        else {
          cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        uVar14 = ((0x2204 - (uVar17 * 0x3408 >> 8)) - (uVar5 * 0x1913 >> 8)) + uVar2;
        pcVar10[-1] = cVar11;
        if (uVar14 >> 0xe == 0) {
          cVar11 = (char)(uVar14 >> 6);
        }
        else {
          cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        uVar17 = (uVar2 + (uVar17 * 0x6625 >> 8)) - 0x379a;
        uVar3 = uVar3 + uVar13;
        *pcVar10 = cVar11;
        if (uVar17 >> 0xe == 0) {
          cVar11 = (char)(uVar17 >> 6);
        }
        else {
          cVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        pcVar10[1] = cVar11;
        uVar2 = uVar3 >> 1 & 0xff;
        uVar3 = uVar3 >> 0x11;
        uVar14 = (uint)pbVar8[2] * 0x4a85 >> 8;
        uVar17 = (uVar14 + (uVar2 * 0x811a >> 8)) - 0x4515;
        if (uVar17 >> 0xe == 0) {
          cVar11 = (char)(uVar17 >> 6);
        }
        else {
          cVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        uVar17 = ((0x2204 - (uVar3 * 0x3408 >> 8)) - (uVar2 * 0x1913 >> 8)) + uVar14;
        pcVar10[2] = cVar11;
        if (uVar17 >> 0xe == 0) {
          cVar11 = (char)(uVar17 >> 6);
        }
        else {
          cVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        uVar17 = (uVar14 + (uVar3 * 0x6625 >> 8)) - 0x379a;
        pcVar10[3] = cVar11;
        if (uVar17 >> 0xe == 0) {
          cVar11 = (char)(uVar17 >> 6);
        }
        else {
          cVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        pcVar10[4] = cVar11;
      }
      lVar16 = lVar16 + -1;
      pcVar9 = pcVar9 + 6;
      pcVar10 = pcVar10 + 6;
      uVar17 = uVar12;
      uVar14 = uVar13;
      pbVar7 = pbVar7 + 2;
      pbVar8 = pbVar8 + 2;
    } while (lVar16 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar17 = uVar13 + 0x20002 + uVar12 * 3;
    uVar5 = uVar17 >> 2 & 0xff;
    uVar17 = uVar17 >> 0x12;
    uVar2 = (uint)param_1[lVar15] * 0x4a85 >> 8;
    iVar1 = (int)lVar15 * 3;
    uVar14 = (uVar2 + (uVar5 * 0x811a >> 8)) - 0x4515;
    param_7 = param_7 + iVar1;
    if (uVar14 >> 0xe == 0) {
      cVar11 = (char)(uVar14 >> 6);
    }
    else {
      cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
    }
    uVar14 = ((0x2204 - (uVar17 * 0x3408 >> 8)) - (uVar5 * 0x1913 >> 8)) + uVar2;
    *param_7 = cVar11;
    if (uVar14 >> 0xe == 0) {
      cVar11 = (char)(uVar14 >> 6);
    }
    else {
      cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
    }
    uVar17 = (uVar2 + (uVar17 * 0x6625 >> 8)) - 0x379a;
    param_7[1] = cVar11;
    if (uVar17 >> 0xe == 0) {
      param_7[2] = (char)(uVar17 >> 6);
    }
    else {
      param_7[2] = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
    }
    if (param_2 != (byte *)0x0) {
      uVar17 = uVar12 + 0x20002 + uVar13 * 3;
      uVar13 = uVar17 >> 2 & 0xff;
      uVar17 = uVar17 >> 0x12;
      uVar12 = (uint)param_2[lVar15] * 0x4a85 >> 8;
      uVar14 = (uVar12 + (uVar13 * 0x811a >> 8)) - 0x4515;
      param_8 = param_8 + iVar1;
      if (uVar14 >> 0xe == 0) {
        cVar11 = (char)(uVar14 >> 6);
      }
      else {
        cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
      }
      uVar14 = ((0x2204 - (uVar17 * 0x3408 >> 8)) - (uVar13 * 0x1913 >> 8)) + uVar12;
      *param_8 = cVar11;
      if (uVar14 >> 0xe == 0) {
        cVar11 = (char)(uVar14 >> 6);
      }
      else {
        cVar11 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
      }
      uVar17 = (uVar12 + (uVar17 * 0x6625 >> 8)) - 0x379a;
      param_8[1] = cVar11;
      if (uVar17 >> 0xe == 0) {
        cVar11 = (char)(uVar17 >> 6);
      }
      else {
        cVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
      }
      param_8[2] = cVar11;
    }
  }
  return;
}

