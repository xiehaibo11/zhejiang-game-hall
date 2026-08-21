
ulong FUN_010a816c(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  if ((uVar1 >> 2 & 1) == 0) {
    return param_3;
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  uVar4 = -param_3;
  if (-1 < (long)param_3) {
    uVar4 = param_3;
  }
  uVar8 = (ulong)param_2;
  uVar2 = uVar1;
  if (param_2 == 1) {
    uVar2 = uVar1 >> 1;
  }
  if ((uVar2 & 1) == 0) {
    if (*(int *)(lVar5 + uVar8 * 0x9d8 + 0x60) != 0) {
      uVar8 = *(ulong *)(lVar5 + uVar8 * 0x9d8 + 0x70);
      lVar10 = uVar4 - uVar8;
      lVar5 = -lVar10;
      if (-1 < lVar10) {
        lVar5 = lVar10;
      }
      if (lVar5 < 0x28) {
        if ((long)uVar8 < 0x31) {
          uVar8 = 0x30;
        }
        goto LAB_010a8300;
      }
    }
    if ((long)uVar4 < 0x36) {
      lVar5 = 0x37 - uVar4;
      if (-1 < (long)(0x36 - uVar4)) {
        lVar5 = 0x36 - uVar4;
      }
      uVar8 = uVar4 + (lVar5 >> 1);
    }
    else {
      uVar8 = uVar4;
      if (((long)uVar4 < 0xc0) && (uVar7 = uVar4 & 0x3f, 9 < uVar7)) {
        if (uVar7 < 0x16) {
                    /* try { // try from 010a82d0 to 011a840f has its CatchHandler @ 010a82d0
                       catch() { ... } // from try @ 010a82d0 with catch @ 010a82d0
                       catch() { ... } // from try @ 010a8418 with catch @ 010a82d0 */
          uVar8 = uVar4 & 0xffffffffffffffc0 | 10;
        }
        else {
          uVar8 = uVar4 & 0xffffffffffffffc0 | 0x36;
          if (0xb < uVar7 - 0x2a) {
            uVar8 = uVar4;
          }
        }
      }
    }
    goto LAB_010a8300;
  }
  uVar2 = *(uint *)(lVar5 + uVar8 * 0x9d8 + 0x60);
  uVar7 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    uVar7 = uVar4 + 0x20 & 0xffffffffffffffc0;
    uVar8 = uVar4;
LAB_010a8288:
    if ((long)(uVar7 | 0x30) <= (long)uVar4) {
      uVar8 = uVar4;
    }
    if (param_2 != 1) goto LAB_010a81fc;
LAB_010a829c:
    if ((long)uVar8 < 0x40) goto LAB_010a82e0;
    uVar8 = uVar8 + 0x10;
  }
  else {
    lVar10 = 0x62;
    uVar6 = uVar4;
    puVar9 = (ulong *)(lVar5 + uVar8 * 0x9d8 + 0x70);
    do {
      uVar7 = uVar7 - 1;
      lVar3 = uVar4 - *puVar9;
      lVar5 = -lVar3;
      if (-1 < lVar3) {
        lVar5 = lVar3;
      }
      uVar8 = *puVar9;
      if (lVar10 <= lVar5) {
        uVar8 = uVar6;
        lVar5 = lVar10;
      }
      lVar10 = lVar5;
      uVar6 = uVar8;
      puVar9 = puVar9 + 3;
    } while (uVar7 != 0);
    uVar7 = uVar8 + 0x20 & 0xffffffffffffffc0;
    if ((long)uVar8 <= (long)uVar4) goto LAB_010a8288;
    if ((long)uVar4 <= (long)(uVar7 - 0x30)) {
      uVar8 = uVar4;
    }
    if (param_2 == 1) goto LAB_010a829c;
LAB_010a81fc:
    if ((uVar1 >> 3 & 1) == 0) {
      if ((long)uVar8 < 0x30) {
        uVar8 = (long)(uVar8 + 0x40) >> 1;
        goto LAB_010a8300;
      }
      if ((long)uVar8 < 0x80) {
        uVar8 = uVar8 + 0x16;
        goto LAB_010a82fc;
      }
    }
    else if ((long)uVar8 < 0x40) {
LAB_010a82e0:
      uVar8 = 0x40;
      goto LAB_010a8300;
    }
    uVar8 = uVar8 + 0x20;
  }
LAB_010a82fc:
  uVar8 = uVar8 & 0xffffffffffffffc0;
LAB_010a8300:
  uVar4 = -uVar8;
  if (-1 < (long)param_3) {
    uVar4 = uVar8;
  }
  return uVar4;
}

