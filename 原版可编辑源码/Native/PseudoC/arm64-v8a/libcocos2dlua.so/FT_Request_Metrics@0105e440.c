
void FT_Request_Metrics(long param_1,int *param_2)

{
  short sVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar2 = *(long *)(param_1 + 0xa0);
                    /* try { // try from 0105e448 to 0115e477 has its CatchHandler @ 0105e580 */
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0x10000;
    *(undefined8 *)(lVar2 + 0x20) = 0x10000;
    return;
  }
  iVar12 = *param_2;
                    /* try { // try from 0105e478 to 0115e4ef has its CatchHandler @ 0105e374 */
  switch(iVar12) {
  case 0:
    uVar5 = (ulong)*(ushort *)(param_1 + 0x88);
    uVar4 = uVar5;
    break;
  case 1:
    uVar5 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
    uVar4 = uVar5;
    break;
  case 2:
    uVar5 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x68);
    uVar4 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
    break;
  case 3:
    uVar5 = (ulong)*(short *)(param_1 + 0x90);
    uVar4 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
    break;
  case 4:
    uVar4 = *(ulong *)(param_2 + 2);
    *(ulong *)(lVar2 + 0x20) = uVar4;
    uVar5 = *(ulong *)(param_2 + 4);
    *(ulong *)(lVar2 + 0x28) = uVar5;
    if (uVar4 == 0) goto LAB_0105e68c;
    if (uVar5 == 0) goto LAB_0105e680;
    goto LAB_0105e6ec;
  default:
    uVar5 = 0;
    uVar4 = 0;
  }
  lVar3 = *(long *)(param_2 + 2);
  uVar13 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar13 = uVar5;
  }
                    /* try { // try from 0105e4f0 to 0115e527 has its CatchHandler @ 0105e584 */
  uVar5 = -uVar4;
  if (-1 < (long)uVar4) {
    uVar5 = uVar4;
  }
  lVar10 = lVar3;
  if (param_2[6] != 0) {
    lVar10 = (long)(lVar3 * (ulong)(uint)param_2[6] + 0x24) / 0x48;
  }
  lVar6 = *(long *)(param_2 + 4);
                    /* try { // try from 0105e528 to 0115e5bb has its CatchHandler @ 0105e374 */
  lVar9 = lVar6;
  if (param_2[7] != 0) {
    lVar9 = (long)(lVar6 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
  }
  if (lVar3 == 0) {
    iVar8 = 1;
    if (lVar9 < 0) {
      iVar8 = -1;
    }
    iVar7 = -iVar8;
    if (-1 < (long)uVar5) {
      iVar7 = iVar8;
    }
    if ((long)uVar5 < 1) {
      uVar14 = 0x7fffffff;
    }
    else {
      lVar3 = -lVar9;
      if (-1 < lVar9) {
        lVar3 = lVar9;
      }
      uVar14 = 0;
      if (uVar5 != 0) {
        uVar14 = (lVar3 * 0x10000 + (uVar5 >> 1)) / uVar5;
      }
    }
    uVar4 = -uVar14;
    if (-1 < iVar7) {
      uVar4 = uVar14;
    }
    iVar7 = -iVar8;
    if (-1 < (long)uVar13) {
      iVar7 = iVar8;
    }
    iVar8 = -iVar7;
    if (-1 < (long)uVar5) {
      iVar8 = iVar7;
    }
    *(ulong *)(lVar2 + 0x20) = uVar4;
    *(ulong *)(lVar2 + 0x28) = uVar4;
    if ((long)uVar5 < 1) {
      lVar3 = 0x7fffffff;
    }
    else {
      lVar10 = -lVar9;
      if (-1 < lVar9) {
        lVar10 = lVar9;
      }
      lVar3 = 0;
      if (uVar5 != 0) {
        lVar3 = (long)(lVar10 * uVar13 + (uVar5 >> 1)) / (long)uVar5;
      }
    }
    uVar5 = uVar4;
    lVar10 = -lVar3;
    if (-1 < iVar8) {
      lVar10 = lVar3;
    }
joined_r0x0105e738:
    if (iVar12 == 0) {
      iVar12 = (int)lVar10;
      iVar8 = (int)lVar9;
      goto LAB_0105e744;
    }
  }
  else {
    iVar8 = 1;
    if (lVar10 < 0) {
      iVar8 = -1;
    }
    iVar7 = -iVar8;
    if (-1 < (long)uVar13) {
      iVar7 = iVar8;
    }
    if ((long)uVar13 < 1) {
      uVar14 = 0x7fffffff;
    }
    else {
      lVar3 = -lVar10;
      if (-1 < lVar10) {
        lVar3 = lVar10;
      }
                    /* catch() { ... } // from try @ 0105e448 with catch @ 0105e580 */
                    /* catch() { ... } // from try @ 0105e4f0 with catch @ 0105e584 */
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = (lVar3 * 0x10000 + (uVar13 >> 1)) / uVar13;
      }
    }
    uVar4 = -uVar14;
    if (-1 < iVar7) {
      uVar4 = uVar14;
    }
    *(ulong *)(lVar2 + 0x20) = uVar4;
    if (lVar6 == 0) {
      iVar7 = -iVar8;
      if (-1 < (long)uVar5) {
        iVar7 = iVar8;
      }
      iVar8 = -iVar7;
      if (-1 < (long)uVar13) {
        iVar8 = iVar7;
      }
      *(ulong *)(lVar2 + 0x28) = uVar4;
      if ((long)uVar13 < 1) {
        lVar3 = 0x7fffffff;
      }
      else {
        lVar9 = -lVar10;
        if (-1 < lVar10) {
          lVar9 = lVar10;
        }
        lVar3 = 0;
        if (uVar13 != 0) {
          lVar3 = (long)(lVar9 * uVar5 + (uVar13 >> 1)) / (long)uVar13;
        }
      }
      lVar9 = -lVar3;
      uVar5 = uVar4;
      if (-1 < iVar8) {
        lVar9 = lVar3;
      }
      goto joined_r0x0105e738;
    }
    iVar8 = 1;
    if (lVar9 < 0) {
      iVar8 = -1;
    }
    iVar7 = -iVar8;
    if (-1 < (long)uVar5) {
      iVar7 = iVar8;
    }
    if ((long)uVar5 < 1) {
      uVar13 = 0x7fffffff;
    }
    else {
      lVar3 = -lVar9;
      if (-1 < lVar9) {
        lVar3 = lVar9;
      }
      uVar13 = 0;
      if (uVar5 != 0) {
        uVar13 = (lVar3 * 0x10000 + (uVar5 >> 1)) / uVar5;
      }
    }
    uVar5 = -uVar13;
    if (-1 < iVar7) {
      uVar5 = uVar13;
    }
    *(ulong *)(lVar2 + 0x28) = uVar5;
    if (iVar12 != 3) goto joined_r0x0105e738;
    if ((long)uVar4 < (long)uVar5) {
LAB_0105e680:
      *(ulong *)(lVar2 + 0x28) = uVar4;
      uVar5 = uVar4;
    }
    else {
LAB_0105e68c:
      uVar4 = uVar5;
      *(ulong *)(lVar2 + 0x20) = uVar4;
      uVar5 = uVar4;
    }
  }
LAB_0105e6ec:
  uVar13 = -uVar4;
  if (-1 < (long)uVar4) {
    uVar13 = uVar4;
  }
  iVar8 = (int)(uVar13 * *(ushort *)(param_1 + 0x88) + 0x8000 >> 0x10);
  iVar12 = -iVar8;
  if (-1 < (long)uVar4) {
    iVar12 = iVar8;
  }
  uVar13 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar13 = uVar5;
  }
  iVar7 = (int)(uVar13 * *(ushort *)(param_1 + 0x88) + 0x8000 >> 0x10);
                    /* catch() { ... } // from try @ 0105e758 with catch @ 0105e720 */
  iVar8 = -iVar7;
  if (-1 < (long)uVar5) {
    iVar8 = iVar7;
  }
LAB_0105e744:
                    /* try { // try from 0105e750 to 0115e757 has its CatchHandler @ 0105e7fc */
  *(short *)(lVar2 + 0x18) = (short)(iVar12 + 0x20U >> 6);
                    /* try { // try from 0105e758 to 0115e817 has its CatchHandler @ 0105e720 */
  *(short *)(lVar2 + 0x1a) = (short)(iVar8 + 0x20U >> 6);
  sVar1 = *(short *)(param_1 + 0x8a);
  iVar12 = 1;
  if (sVar1 < 0) {
    iVar12 = -1;
  }
  lVar3 = -(long)sVar1;
  if (sVar1 >= 0) {
    lVar3 = (long)sVar1;
  }
  uVar13 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar13 = uVar5;
  }
  iVar8 = -iVar12;
  if (-1 < (long)uVar5) {
    iVar8 = iVar12;
  }
  lVar10 = (long)(uVar13 * lVar3 + 0x8000) >> 0x10;
  lVar3 = -lVar10;
  if (-1 < iVar8) {
    lVar3 = lVar10;
  }
  *(ulong *)(lVar2 + 0x30) = lVar3 + 0x3fU & 0xffffffffffffffc0;
  sVar1 = *(short *)(param_1 + 0x8c);
  iVar12 = 1;
  if (sVar1 < 0) {
    iVar12 = -1;
  }
  lVar3 = -(long)sVar1;
  if (sVar1 >= 0) {
    lVar3 = (long)sVar1;
  }
  iVar8 = -iVar12;
  if (-1 < (long)uVar5) {
    iVar8 = iVar12;
  }
  uVar11 = (long)(lVar3 * uVar13 + 0x8000) >> 0x10;
  uVar14 = -uVar11;
  if (-1 < iVar8) {
    uVar14 = uVar11;
  }
  *(ulong *)(lVar2 + 0x38) = uVar14 & 0xffffffffffffffc0;
  sVar1 = *(short *)(param_1 + 0x8e);
  iVar12 = 1;
  if (sVar1 < 0) {
    iVar12 = -1;
  }
  lVar3 = -(long)sVar1;
  if (sVar1 >= 0) {
    lVar3 = (long)sVar1;
  }
  iVar8 = -iVar12;
  if (-1 < (long)uVar5) {
    iVar8 = iVar12;
  }
  lVar10 = (long)(lVar3 * uVar13 + 0x8000) >> 0x10;
  lVar3 = -lVar10;
  if (-1 < iVar8) {
    lVar3 = lVar10;
  }
                    /* catch() { ... } // from try @ 0105e750 with catch @ 0105e7fc */
  *(ulong *)(lVar2 + 0x40) = lVar3 + 0x20U & 0xffffffffffffffc0;
  sVar1 = *(short *)(param_1 + 0x90);
  iVar12 = 1;
  if (sVar1 < 0) {
    iVar12 = -1;
  }
  lVar3 = -(long)sVar1;
  if (sVar1 >= 0) {
    lVar3 = (long)sVar1;
  }
  uVar5 = -uVar4;
  if (-1 < (long)uVar4) {
    uVar5 = uVar4;
  }
                    /* try { // try from 0105e818 to 0115e853 has its CatchHandler @ 0105e818
                       catch(type#1 @ 00000000) { ... } // from try @ 0105e818 with catch @ 0105e818
                       catch(type#1 @ 00000000) { ... } // from try @ 0105e898 with catch @ 0105e818
                        */
  iVar8 = -iVar12;
  if (-1 < (long)uVar4) {
    iVar8 = iVar12;
  }
  lVar10 = (long)(uVar5 * lVar3 + 0x8000) >> 0x10;
  lVar3 = -lVar10;
  if (-1 < iVar8) {
    lVar3 = lVar10;
  }
  *(ulong *)(lVar2 + 0x48) = lVar3 + 0x20U & 0xffffffffffffffc0;
  return;
}

