
uint FUN_00ebe798(int *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  
  iVar7 = *param_1;
  uVar6 = oggpack_look(param_2,iVar7);
  iVar5 = (int)(uVar6 >> 0x20);
  while (((long)uVar6 < 0 && (1 < iVar7))) {
    iVar7 = iVar7 + -1;
    uVar6 = oggpack_look(param_2,iVar7);
    iVar5 = (int)(uVar6 >> 0x20);
  }
  if (iVar5 < 0) {
    uVar12 = 0xffffffff;
    iVar7 = 1;
    goto LAB_00ebe9b4;
  }
  switch(param_1[4]) {
  case 0:
    uVar8 = (ulong)iVar7;
    if (iVar7 < 1) {
LAB_00ebe9a0:
      uVar10 = 0;
      uVar12 = 0;
      if (iVar7 < 1) break;
    }
    else {
      uVar14 = 0;
      uVar9 = 0;
      do {
        bVar3 = *(byte *)(*(long *)(param_1 + 2) + (uVar6 >> (uVar9 & 0x3f) & 1 | uVar14 << 1));
        uVar10 = uVar9;
        if ((char)bVar3 < '\0') break;
        uVar9 = uVar9 + 1;
        uVar14 = (ulong)bVar3;
        uVar10 = uVar8;
      } while (uVar8 != uVar9);
      uVar12 = bVar3 & 0x7f;
      if ((long)uVar8 <= (long)uVar10) break;
    }
LAB_00ebe9b0:
    iVar7 = (int)uVar10 + 1;
    goto LAB_00ebe9b4;
  case 1:
    uVar8 = (ulong)iVar7;
    if (iVar7 < 1) {
joined_r0x00ebe9f8:
      uVar12 = 0;
      uVar10 = 0;
      if (0 < iVar7) goto LAB_00ebe9b0;
    }
    else {
      lVar11 = *(long *)(param_1 + 2);
      uVar13 = 0;
      uVar9 = 0;
      do {
        uVar10 = uVar6 >> (uVar9 & 0x3f);
        lVar1 = (ulong)((uint)uVar10 & 1) + (ulong)uVar13;
        bVar3 = *(byte *)(lVar11 + lVar1);
        uVar12 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          if ((uVar10 & 1) == 0) {
            uVar6 = 1;
          }
          else {
            uVar6 = (ulong)(*(byte *)(lVar11 + (ulong)uVar13) >> 7);
          }
          uVar12 = (uint)CONCAT11(bVar3,*(undefined1 *)(lVar11 + uVar6 + ((int)lVar1 + 1)));
          uVar10 = uVar9;
          break;
        }
        uVar9 = uVar9 + 1;
        uVar13 = (uint)bVar3;
        uVar10 = uVar8;
      } while (uVar8 != uVar9);
      uVar12 = uVar12 & 0x7fff;
      if ((long)uVar10 < (long)uVar8) goto LAB_00ebe9b0;
    }
    break;
  case 2:
    uVar8 = (ulong)iVar7;
    if (iVar7 < 1) goto LAB_00ebe9a0;
    uVar14 = 0;
    uVar9 = 0;
    do {
      uVar4 = *(ushort *)(*(long *)(param_1 + 2) + (uVar6 >> (uVar9 & 0x3f) & 1 | uVar14 << 1) * 2);
      uVar10 = uVar9;
      if ((short)uVar4 < 0) break;
      uVar9 = uVar9 + 1;
      uVar14 = (ulong)uVar4;
      uVar10 = uVar8;
    } while (uVar8 != uVar9);
    uVar12 = uVar4 & 0x7fff;
    if ((long)uVar10 < (long)uVar8) goto LAB_00ebe9b0;
    break;
  case 3:
    uVar8 = (ulong)iVar7;
    if (iVar7 < 1) goto joined_r0x00ebe9f8;
    lVar11 = *(long *)(param_1 + 2);
    uVar13 = 0;
    uVar9 = 0;
    do {
      uVar10 = uVar6 >> (uVar9 & 0x3f);
      uVar2 = ((uint)uVar10 & 1) + uVar13;
      uVar4 = *(ushort *)(lVar11 + (ulong)uVar2 * 2);
      uVar12 = (uint)uVar4;
      if ((short)uVar4 < 0) {
        if ((uVar10 & 1) == 0) {
          uVar12 = 1;
        }
        else {
          uVar12 = (uint)(*(ushort *)(lVar11 + (ulong)uVar13 * 2) >> 0xf);
        }
        uVar12 = CONCAT22(uVar4,*(undefined2 *)(lVar11 + (ulong)(uVar2 + 1 + uVar12) * 2));
        uVar10 = uVar9;
        break;
      }
      uVar9 = uVar9 + 1;
      uVar13 = (uint)uVar4;
      uVar10 = uVar8;
    } while (uVar8 != uVar9);
    uVar12 = uVar12 & 0x7fffffff;
    if ((long)uVar10 < (long)uVar8) goto LAB_00ebe9b0;
    break;
  case 4:
    uVar8 = (ulong)iVar7;
    if (iVar7 < 1) goto LAB_00ebe9a0;
    uVar12 = 0;
    uVar9 = 0;
    do {
      uVar12 = *(uint *)(*(long *)(param_1 + 2) +
                        ((ulong)(uVar12 << 1) | uVar6 >> (uVar9 & 0x3f) & 1) * 4);
      uVar10 = uVar9;
      if ((int)uVar12 < 0) break;
      uVar9 = uVar9 + 1;
      uVar10 = uVar8;
    } while (uVar8 != uVar9);
    uVar12 = uVar12 & 0x7fffffff;
    if ((long)uVar10 < (long)uVar8) goto LAB_00ebe9b0;
  }
  iVar7 = iVar7 + 1;
  uVar12 = 0xffffffff;
LAB_00ebe9b4:
  oggpack_adv(param_2,iVar7);
  return uVar12;
}

