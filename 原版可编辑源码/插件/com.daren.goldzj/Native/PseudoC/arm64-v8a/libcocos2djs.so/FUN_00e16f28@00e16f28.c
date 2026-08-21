
void FUN_00e16f28(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar4 = *(long *)(param_1 + 0xa0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0x10000;
    *(undefined8 *)(lVar4 + 0x20) = 0x10000;
    return;
  }
  iVar1 = *param_2;
  switch(iVar1) {
  case 0:
    uVar7 = (ulong)*(ushort *)(param_1 + 0x88);
    uVar6 = *(ulong *)(param_2 + 2);
    uVar2 = param_2[6];
    uVar14 = uVar7;
    goto joined_r0x00e16fac;
  case 1:
    uVar14 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
    uVar6 = uVar14;
    break;
  case 2:
    uVar14 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x68);
    uVar6 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
    break;
  case 3:
    uVar14 = (ulong)*(short *)(param_1 + 0x90);
    uVar6 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
    break;
  case 4:
    uVar8 = *(ulong *)(param_2 + 2);
    *(ulong *)(lVar4 + 0x20) = uVar8;
    uVar6 = *(ulong *)(param_2 + 4);
    *(ulong *)(lVar4 + 0x28) = uVar6;
    if (uVar8 == 0) {
      *(ulong *)(lVar4 + 0x20) = uVar6;
      uVar8 = uVar6;
    }
    else if (uVar6 == 0) {
      *(ulong *)(lVar4 + 0x28) = uVar8;
      uVar6 = uVar8;
    }
    goto LAB_00e171bc;
  default:
    uVar7 = 0;
    uVar14 = 0;
    uVar6 = *(ulong *)(param_2 + 2);
    uVar2 = param_2[6];
    goto joined_r0x00e16fac;
  }
  uVar7 = -uVar14;
  if (-1 < (long)uVar14) {
    uVar7 = uVar14;
  }
  uVar14 = -uVar6;
  if (-1 < (long)uVar6) {
    uVar14 = uVar6;
  }
  uVar6 = *(ulong *)(param_2 + 2);
  uVar2 = param_2[6];
joined_r0x00e16fac:
  uVar10 = uVar6;
  if (uVar2 != 0) {
    uVar10 = (long)(uVar6 * uVar2 + 0x24) / 0x48;
  }
  uVar15 = *(ulong *)(param_2 + 4);
  uVar13 = uVar15;
  if (param_2[7] != 0) {
    uVar13 = (long)(uVar15 * (uint)param_2[7] + 0x24) / 0x48;
  }
  if (uVar6 == 0) {
    bVar3 = -1 < (long)uVar13;
    if (uVar14 == 0) {
      uVar8 = 0x7fffffff;
      if (!bVar3) {
        uVar8 = 0xffffffff80000001;
      }
      uVar6 = 0x7fffffff;
    }
    else {
      uVar10 = -uVar13;
      if (bVar3) {
        uVar10 = uVar13;
      }
      uVar6 = 0;
      if (uVar14 != 0) {
        uVar6 = ((uVar14 >> 1) + uVar10 * 0x10000) / uVar14;
      }
      uVar8 = -uVar6;
      if (bVar3) {
        uVar8 = uVar6;
      }
      uVar6 = 0;
      if (uVar14 != 0) {
        uVar6 = ((uVar14 >> 1) + uVar10 * uVar7) / uVar14;
      }
    }
    uVar10 = -uVar6;
    if (-1 < (long)uVar13) {
      uVar10 = uVar6;
    }
    *(ulong *)(lVar4 + 0x20) = uVar8;
    *(ulong *)(lVar4 + 0x28) = uVar8;
    uVar7 = uVar8;
joined_r0x00e1717c:
    uVar6 = uVar7;
    iVar12 = (int)uVar13;
    iVar9 = (int)uVar10;
    if (iVar1 == 0) goto LAB_00e171e0;
  }
  else {
    if (uVar7 == 0) {
      uVar6 = 0xffffffff80000001;
      if (-1 < (long)uVar10) {
        uVar6 = 0x7fffffff;
      }
      *(ulong *)(lVar4 + 0x20) = uVar6;
    }
    else {
      uVar6 = -uVar10;
      if (-1 < (long)uVar10) {
        uVar6 = uVar10;
      }
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = (uVar6 * 0x10000 + (uVar7 >> 1)) / uVar7;
      }
      uVar6 = -uVar8;
      if (-1 < (long)uVar10) {
        uVar6 = uVar8;
      }
      *(ulong *)(lVar4 + 0x20) = uVar6;
    }
    uVar8 = uVar6;
    if (uVar15 == 0) {
      *(ulong *)(lVar4 + 0x28) = uVar6;
      if (uVar7 == 0) {
        uVar15 = 0x7fffffff;
      }
      else {
        uVar13 = -uVar10;
        if (-1 < (long)uVar10) {
          uVar13 = uVar10;
        }
        uVar15 = 0;
        if (uVar7 != 0) {
          uVar15 = (uVar13 * uVar14 + (uVar7 >> 1)) / uVar7;
        }
      }
      uVar7 = uVar6;
      uVar13 = -uVar15;
      if (-1 < (long)uVar10) {
        uVar13 = uVar15;
      }
      goto joined_r0x00e1717c;
    }
    if (uVar14 == 0) {
      uVar15 = 0x7fffffff;
    }
    else {
      uVar7 = -uVar13;
      if (-1 < (long)uVar13) {
        uVar7 = uVar13;
      }
      uVar15 = 0;
      if (uVar14 != 0) {
        uVar15 = (uVar7 * 0x10000 + (uVar14 >> 1)) / uVar14;
      }
    }
    uVar7 = -uVar15;
    if (-1 < (long)uVar13) {
      uVar7 = uVar15;
    }
    *(ulong *)(lVar4 + 0x28) = uVar7;
    if (iVar1 != 3) goto joined_r0x00e1717c;
    if ((long)uVar6 < (long)uVar7) {
      *(ulong *)(lVar4 + 0x28) = uVar6;
    }
    else {
      *(ulong *)(lVar4 + 0x20) = uVar7;
      uVar6 = uVar7;
      uVar8 = uVar7;
    }
  }
LAB_00e171bc:
  lVar11 = uVar8 * *(ushort *)(param_1 + 0x88);
  lVar5 = uVar6 * *(ushort *)(param_1 + 0x88);
  iVar9 = (int)((ulong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10);
  iVar12 = (int)((ulong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
LAB_00e171e0:
  *(short *)(lVar4 + 0x18) = (short)(iVar9 + 0x20U >> 6);
  *(short *)(lVar4 + 0x1a) = (short)(iVar12 + 0x20U >> 6);
  lVar5 = uVar6 * (long)*(short *)(param_1 + 0x8a);
  *(ulong *)(lVar4 + 0x30) = (lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10) + 0x3fU & 0xffffffffffffffc0
  ;
  lVar5 = uVar6 * (long)*(short *)(param_1 + 0x8c);
  *(ulong *)(lVar4 + 0x38) = lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10 & 0xffffffffffffffc0;
  lVar5 = uVar6 * (long)*(short *)(param_1 + 0x8e);
  *(ulong *)(lVar4 + 0x40) = (lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0
  ;
  lVar5 = uVar8 * (long)*(short *)(param_1 + 0x90);
  *(ulong *)(lVar4 + 0x48) = (lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0
  ;
  return;
}

