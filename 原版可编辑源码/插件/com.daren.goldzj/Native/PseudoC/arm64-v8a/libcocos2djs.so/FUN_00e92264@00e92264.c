
uint FUN_00e92264(int *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  
  iVar7 = *param_1;
  uVar6 = oggpack_look(param_2,iVar7);
  iVar5 = (int)(uVar6 >> 0x20);
  while (((long)uVar6 < 0 && (1 < iVar7))) {
    iVar7 = iVar7 + -1;
    uVar6 = oggpack_look(param_2,iVar7);
    iVar5 = (int)(uVar6 >> 0x20);
  }
  if (iVar5 < 0) {
    iVar7 = 1;
    goto LAB_00e9244c;
  }
  switch(param_1[4]) {
  case 0:
    if (iVar7 < 1) {
joined_r0x00e924b4:
      uVar10 = 0;
      uVar8 = 0;
      if (0 < iVar7) {
LAB_00e9246c:
        oggpack_adv(param_2,(int)uVar8 + 1);
        return uVar10;
      }
    }
    else {
      uVar12 = 0;
      uVar8 = 0;
      do {
        bVar3 = *(byte *)(*(long *)(param_1 + 2) + (uVar6 >> (uVar8 & 0x3f) & 1 | uVar12 << 1));
        if ((char)bVar3 < '\0') break;
        uVar8 = uVar8 + 1;
        uVar12 = (ulong)bVar3;
      } while ((long)uVar8 < (long)iVar7);
      uVar10 = bVar3 & 0x7f;
      if ((long)uVar8 < (long)iVar7) goto LAB_00e9246c;
    }
    break;
  case 1:
    if (iVar7 < 1) goto joined_r0x00e924b4;
    lVar9 = *(long *)(param_1 + 2);
    uVar11 = 0;
    uVar8 = 0;
    do {
      uVar12 = uVar6 >> (uVar8 & 0x3f);
      lVar1 = (ulong)((uint)uVar12 & 1) + (ulong)uVar11;
      bVar3 = *(byte *)(lVar9 + lVar1);
      uVar10 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        if ((uVar12 & 1) == 0) {
          uVar6 = 1;
        }
        else {
          uVar6 = (ulong)(*(byte *)(lVar9 + (ulong)uVar11) >> 7);
        }
        uVar10 = (uint)CONCAT11(bVar3,*(undefined1 *)(lVar9 + uVar6 + ((int)lVar1 + 1)));
        break;
      }
      uVar8 = uVar8 + 1;
      uVar11 = (uint)bVar3;
    } while ((long)uVar8 < (long)iVar7);
    uVar10 = uVar10 & 0x7fff;
    if ((long)uVar8 < (long)iVar7) goto LAB_00e9246c;
    break;
  case 2:
    if (iVar7 < 1) goto joined_r0x00e924b4;
    uVar12 = 0;
    uVar8 = 0;
    do {
      uVar4 = *(ushort *)(*(long *)(param_1 + 2) + (uVar6 >> (uVar8 & 0x3f) & 1 | uVar12 << 1) * 2);
      if ((short)uVar4 < 0) break;
      uVar8 = uVar8 + 1;
      uVar12 = (ulong)uVar4;
    } while ((long)uVar8 < (long)iVar7);
    uVar10 = uVar4 & 0x7fff;
    if ((long)uVar8 < (long)iVar7) goto LAB_00e9246c;
    break;
  case 3:
    if (iVar7 < 1) goto joined_r0x00e924b4;
    lVar9 = *(long *)(param_1 + 2);
    uVar11 = 0;
    uVar8 = 0;
    do {
      uVar12 = uVar6 >> (uVar8 & 0x3f);
      uVar2 = ((uint)uVar12 & 1) + uVar11;
      uVar4 = *(ushort *)(lVar9 + (ulong)uVar2 * 2);
      uVar10 = (uint)uVar4;
      if ((short)uVar4 < 0) {
        if ((uVar12 & 1) == 0) {
          uVar10 = 1;
        }
        else {
          uVar10 = (uint)(*(ushort *)(lVar9 + (ulong)uVar11 * 2) >> 0xf);
        }
        uVar10 = CONCAT22(uVar4,*(undefined2 *)(lVar9 + (ulong)(uVar2 + 1 + uVar10) * 2));
        break;
      }
      uVar8 = uVar8 + 1;
      uVar11 = (uint)uVar4;
    } while ((long)uVar8 < (long)iVar7);
    uVar10 = uVar10 & 0x7fffffff;
    if ((long)uVar8 < (long)iVar7) goto LAB_00e9246c;
    break;
  case 4:
    if (iVar7 < 1) goto joined_r0x00e924b4;
    uVar10 = 0;
    uVar8 = 0;
    do {
      uVar10 = *(uint *)(*(long *)(param_1 + 2) +
                        ((ulong)(uVar10 << 1) | uVar6 >> (uVar8 & 0x3f) & 1) * 4);
      if ((int)uVar10 < 0) break;
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)iVar7);
    uVar10 = uVar10 & 0x7fffffff;
    if ((long)uVar8 < (long)iVar7) goto LAB_00e9246c;
  }
  iVar7 = iVar7 + 1;
LAB_00e9244c:
  oggpack_adv(param_2,iVar7);
  return 0xffffffff;
}

