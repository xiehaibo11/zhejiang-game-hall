
void FUN_011543ec(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  char cVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  
  bVar3 = *param_1;
  uVar14 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar15 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar19 = uVar14 * 3 + uVar15 + 0x20002;
  *param_7 = 0xff;
  uVar7 = uVar19 >> 0x12 & 0xff;
  uVar4 = (uint)bVar3 * 0x4a85 >> 8;
  uVar16 = (uVar4 + (uVar7 * 0x6625 >> 8)) - 0x379a;
  uVar19 = uVar19 >> 2 & 0xff;
  if (uVar16 >> 0xe == 0) {
    cVar12 = (char)(uVar16 >> 6);
  }
  else {
    cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
  }
  uVar17 = (long)param_9 - 1;
  uVar16 = ((uVar4 + 0x2204) - (uVar19 * 0x1913 >> 8)) - (uVar7 * 0x3408 >> 8);
  param_7[1] = cVar12;
  if (uVar16 >> 0xe == 0) {
    cVar12 = (char)(uVar16 >> 6);
  }
  else {
    cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
  }
  uVar19 = (uVar4 + (uVar19 * 0x811a >> 8)) - 0x4515;
  param_7[2] = cVar12;
  if (uVar19 >> 0xe == 0) {
    cVar12 = (char)(uVar19 >> 6);
  }
  else {
    cVar12 = ((byte)((int)uVar19 >> 0x1f) & 1) - 1;
  }
  param_7[3] = cVar12;
  iVar2 = (int)uVar17 >> 1;
  if (param_2 != (byte *)0x0) {
    uVar19 = uVar14 + 0x20002 + uVar15 * 3;
    bVar3 = *param_2;
    uVar7 = uVar19 >> 0x12 & 0xff;
    *param_8 = 0xff;
    uVar4 = (uint)bVar3 * 0x4a85 >> 8;
    uVar16 = (uVar4 + (uVar7 * 0x6625 >> 8)) - 0x379a;
    uVar19 = uVar19 >> 2 & 0xff;
    if (uVar16 >> 0xe == 0) {
      cVar12 = (char)(uVar16 >> 6);
    }
    else {
      cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
    }
    uVar16 = ((0x2204 - (uVar19 * 0x1913 >> 8)) - (uVar7 * 0x3408 >> 8)) + uVar4;
    param_8[1] = cVar12;
    if (uVar16 >> 0xe == 0) {
      cVar12 = (char)(uVar16 >> 6);
    }
    else {
      cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
    }
    uVar19 = (uVar4 + (uVar19 * 0x811a >> 8)) - 0x4515;
    param_8[2] = cVar12;
    if (uVar19 >> 0xe == 0) {
      cVar12 = (char)(uVar19 >> 6);
    }
    else {
      cVar12 = ((byte)((int)uVar19 >> 0x1f) & 1) - 1;
    }
    param_8[3] = cVar12;
  }
  if (0 < iVar2) {
    lVar11 = 4;
    lVar18 = (ulong)(iVar2 + 1) - 1;
    uVar19 = uVar14;
    uVar16 = uVar15;
    pbVar9 = param_1;
    pbVar10 = param_2;
    do {
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      uVar14 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar15 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar2 = uVar16 + uVar19 + uVar14 + uVar15 + 0x80008;
      uVar5 = iVar2 + (uVar14 + uVar16) * 2 >> 3;
      uVar4 = uVar5 + uVar19;
      uVar8 = uVar4 >> 0x11 & 0xff;
      uVar6 = (uint)pbVar9[1] * 0x4a85 >> 8;
      uVar7 = (uVar6 + (uVar8 * 0x6625 >> 8)) - 0x379a;
      uVar4 = uVar4 >> 1 & 0xff;
      param_7[lVar11] = 0xff;
      if (uVar7 >> 0xe == 0) {
        cVar12 = (char)(uVar7 >> 6);
      }
      else {
        cVar12 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
      }
      uVar7 = ((uVar6 + 0x2204) - (uVar4 * 0x1913 >> 8)) - (uVar8 * 0x3408 >> 8);
      uVar19 = iVar2 + (uVar15 + uVar19) * 2 >> 3;
      (param_7 + lVar11)[1] = cVar12;
      if (uVar7 >> 0xe == 0) {
        cVar12 = (char)(uVar7 >> 6);
      }
      else {
        cVar12 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
      }
      uVar4 = (uVar6 + (uVar4 * 0x811a >> 8)) - 0x4515;
      uVar7 = uVar19 + uVar14;
      param_7[lVar11 + 2] = cVar12;
      if (uVar4 >> 0xe == 0) {
        cVar12 = (char)(uVar4 >> 6);
      }
      else {
        cVar12 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
      }
      param_7[lVar11 + 3] = cVar12;
      iVar2 = (int)lVar11 + 4;
      uVar8 = uVar7 >> 0x11 & 0xff;
      uVar6 = (uint)pbVar9[2] * 0x4a85 >> 8;
      uVar4 = (uVar6 + (uVar8 * 0x6625 >> 8)) - 0x379a;
      puVar1 = param_7 + iVar2;
      uVar7 = uVar7 >> 1 & 0xff;
      *puVar1 = 0xff;
      if (uVar4 >> 0xe == 0) {
        cVar12 = (char)(uVar4 >> 6);
      }
      else {
        cVar12 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
      }
      uVar4 = ((0x2204 - (uVar7 * 0x1913 >> 8)) - (uVar8 * 0x3408 >> 8)) + uVar6;
      puVar1[1] = cVar12;
      if (uVar4 >> 0xe == 0) {
        cVar12 = (char)(uVar4 >> 6);
      }
      else {
        cVar12 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
      }
      uVar4 = (uVar6 + (uVar7 * 0x811a >> 8)) - 0x4515;
      puVar1[2] = cVar12;
      if (uVar4 >> 0xe == 0) {
        cVar12 = (char)(uVar4 >> 6);
      }
      else {
        cVar12 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
      }
      puVar1[3] = cVar12;
      if (param_2 != (byte *)0x0) {
        uVar19 = uVar19 + uVar16;
        uVar7 = uVar19 >> 0x11 & 0xff;
        uVar4 = (uint)pbVar10[1] * 0x4a85 >> 8;
        uVar16 = (uVar4 + (uVar7 * 0x6625 >> 8)) - 0x379a;
        uVar19 = uVar19 >> 1 & 0xff;
        param_8[lVar11] = 0xff;
        if (uVar16 >> 0xe == 0) {
          cVar12 = (char)(uVar16 >> 6);
        }
        else {
          cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
        }
        uVar16 = ((0x2204 - (uVar19 * 0x1913 >> 8)) - (uVar7 * 0x3408 >> 8)) + uVar4;
        (param_8 + lVar11)[1] = cVar12;
        if (uVar16 >> 0xe == 0) {
          cVar12 = (char)(uVar16 >> 6);
        }
        else {
          cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
        }
        uVar19 = (uVar4 + (uVar19 * 0x811a >> 8)) - 0x4515;
        uVar5 = uVar5 + uVar15;
        param_8[lVar11 + 2] = cVar12;
        if (uVar19 >> 0xe == 0) {
          cVar12 = (char)(uVar19 >> 6);
        }
        else {
          cVar12 = ((byte)((int)uVar19 >> 0x1f) & 1) - 1;
        }
        param_8[lVar11 + 3] = cVar12;
        uVar4 = uVar5 >> 0x11 & 0xff;
        puVar1 = param_8 + iVar2;
        uVar16 = (uint)pbVar10[2] * 0x4a85 >> 8;
        uVar19 = (uVar16 + (uVar4 * 0x6625 >> 8)) - 0x379a;
        uVar7 = uVar5 >> 1 & 0xff;
        *puVar1 = 0xff;
        if (uVar19 >> 0xe == 0) {
          cVar12 = (char)(uVar19 >> 6);
        }
        else {
          cVar12 = ((byte)((int)uVar19 >> 0x1f) & 1) - 1;
        }
        uVar19 = ((0x2204 - (uVar7 * 0x1913 >> 8)) - (uVar4 * 0x3408 >> 8)) + uVar16;
        puVar1[1] = cVar12;
        if (uVar19 >> 0xe == 0) {
          cVar12 = (char)(uVar19 >> 6);
        }
        else {
          cVar12 = ((byte)((int)uVar19 >> 0x1f) & 1) - 1;
        }
        uVar19 = (uVar16 + (uVar7 * 0x811a >> 8)) - 0x4515;
        puVar1[2] = cVar12;
        if (uVar19 >> 0xe == 0) {
          cVar12 = (char)(uVar19 >> 6);
        }
        else {
          cVar12 = ((byte)((int)uVar19 >> 0x1f) & 1) - 1;
        }
        puVar1[3] = cVar12;
      }
      lVar18 = lVar18 + -1;
      lVar11 = lVar11 + 8;
      uVar19 = uVar14;
      uVar16 = uVar15;
      pbVar9 = pbVar9 + 2;
      pbVar10 = pbVar10 + 2;
    } while (lVar18 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar13 = -(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar17 & 0xffffffff) << 2;
    bVar3 = param_1[uVar17];
    uVar19 = uVar15 + 0x20002 + uVar14 * 3;
    param_7 = param_7 + uVar13;
    uVar7 = uVar19 >> 0x12 & 0xff;
    *param_7 = 0xff;
    uVar4 = (uint)bVar3 * 0x4a85 >> 8;
    uVar16 = (uVar4 + (uVar7 * 0x6625 >> 8)) - 0x379a;
    uVar19 = uVar19 >> 2 & 0xff;
    if (uVar16 >> 0xe == 0) {
      cVar12 = (char)(uVar16 >> 6);
    }
    else {
      cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
    }
    uVar16 = ((0x2204 - (uVar19 * 0x1913 >> 8)) - (uVar7 * 0x3408 >> 8)) + uVar4;
    param_7[1] = cVar12;
    if (uVar16 >> 0xe == 0) {
      cVar12 = (char)(uVar16 >> 6);
    }
    else {
      cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
    }
    uVar19 = (uVar4 + (uVar19 * 0x811a >> 8)) - 0x4515;
    param_7[2] = cVar12;
    if (uVar19 >> 0xe == 0) {
      cVar12 = (char)(uVar19 >> 6);
    }
    else {
      cVar12 = ((byte)((int)uVar19 >> 0x1f) & 1) - 1;
    }
    param_7[3] = cVar12;
    if (param_2 != (byte *)0x0) {
      param_8 = param_8 + uVar13;
      bVar3 = param_2[uVar17];
      uVar19 = uVar14 + 0x20002 + uVar15 * 3;
      uVar15 = uVar19 >> 0x12 & 0xff;
      *param_8 = 0xff;
      uVar14 = (uint)bVar3 * 0x4a85 >> 8;
      uVar16 = (uVar14 + (uVar15 * 0x6625 >> 8)) - 0x379a;
      uVar19 = uVar19 >> 2 & 0xff;
      if (uVar16 >> 0xe == 0) {
        cVar12 = (char)(uVar16 >> 6);
      }
      else {
        cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
      }
      uVar16 = ((0x2204 - (uVar19 * 0x1913 >> 8)) - (uVar15 * 0x3408 >> 8)) + uVar14;
      param_8[1] = cVar12;
      if (uVar16 >> 0xe == 0) {
        cVar12 = (char)(uVar16 >> 6);
      }
      else {
        cVar12 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
      }
      uVar19 = (uVar14 + (uVar19 * 0x811a >> 8)) - 0x4515;
      param_8[2] = cVar12;
      if (uVar19 >> 0xe == 0) {
        cVar12 = (char)(uVar19 >> 6);
      }
      else {
        cVar12 = ((byte)((int)uVar19 >> 0x1f) & 1) - 1;
      }
      param_8[3] = cVar12;
    }
  }
  return;
}

