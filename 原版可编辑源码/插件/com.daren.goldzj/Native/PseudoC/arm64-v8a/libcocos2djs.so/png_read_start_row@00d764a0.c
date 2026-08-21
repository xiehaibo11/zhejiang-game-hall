
void png_read_start_row(long param_1)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  png_init_read_transformations();
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    uVar8 = *(uint *)(param_1 + 0x230);
    uVar12 = *(uint *)(param_1 + 0x234);
    uVar11 = *(uint *)(param_1 + 0x16c);
    uVar13 = uVar8;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x16c);
    bVar3 = (&DAT_0194c579)[*(byte *)(param_1 + 0x2ad)];
    uVar8 = *(uint *)(param_1 + 0x230);
    uVar12 = *(uint *)(param_1 + 0x234) + 7 >> 3;
    if ((uVar11 & 2) != 0) {
      uVar12 = *(uint *)(param_1 + 0x234);
    }
    uVar13 = 0;
    if (bVar3 != 0) {
      uVar13 = ((uVar8 + bVar3 + -1) - (uint)(byte)(&DAT_0194c572)[*(byte *)(param_1 + 0x2ad)]) /
               (uint)bVar3;
    }
  }
  uVar10 = (uint)*(byte *)(param_1 + 0x2b2);
  *(uint *)(param_1 + 0x238) = uVar12;
  *(uint *)(param_1 + 0x248) = uVar13;
  if (((uVar11 >> 2 & 1) != 0) && (uVar10 = 8, 7 < *(byte *)(param_1 + 0x2b0))) {
    uVar10 = (uint)*(byte *)(param_1 + 0x2b2);
  }
  uVar12 = *(uint *)(param_1 + 0x16c);
  if ((uVar12 >> 0xc & 1) != 0) {
    cVar2 = *(char *)(param_1 + 0x2af);
    if (cVar2 == '\0') {
      if (uVar10 < 9) {
        uVar10 = 8;
      }
      uVar10 = uVar10 << (*(short *)(param_1 + 0x2a8) != 0);
    }
    else if (cVar2 == '\x02') {
      if (*(short *)(param_1 + 0x2a8) != 0) {
        uVar10 = (uVar10 << 2) / 3;
      }
    }
    else if ((cVar2 == '\x03') && (uVar10 = 0x18, *(short *)(param_1 + 0x2a8) != 0)) {
      uVar10 = 0x20;
    }
  }
  if ((uVar12 >> 9 & 1) != 0) {
    if ((uVar12 >> 0xc & 1) == 0) {
      uVar12 = uVar12 & 0xfffffdff;
      *(uint *)(param_1 + 0x16c) = uVar12;
    }
    else {
      uVar10 = uVar10 << (*(byte *)(param_1 + 0x2b0) < 0x10);
    }
  }
  if ((uVar12 >> 0xf & 1) != 0) {
    if (*(byte *)(param_1 + 0x2af) - 2 < 2) {
      bVar4 = SBORROW4(uVar10,0x21);
      iVar5 = uVar10 - 0x21;
      uVar11 = 0x40;
      uVar10 = 0x20;
    }
    else {
      if (*(byte *)(param_1 + 0x2af) != 0) goto LAB_00d7661c;
      bVar4 = SBORROW4(uVar10,9);
      iVar5 = uVar10 - 9;
      uVar11 = 0x20;
      uVar10 = 0x10;
    }
    if (iVar5 < 0 == bVar4) {
      uVar10 = uVar11;
    }
  }
LAB_00d7661c:
  if ((uVar12 >> 0xe & 1) != 0) {
    if ((((uVar12 >> 0xf & 1) == 0) && ((uVar12 & 0x1000) == 0 || *(short *)(param_1 + 0x2a8) == 0))
       && (cVar2 = *(char *)(param_1 + 0x2af), cVar2 != '\x04')) {
      if ((int)uVar10 < 9) {
        uVar10 = 0x20;
        if (cVar2 != '\x06') {
          uVar10 = 0x18;
        }
      }
      else {
        uVar10 = 0x40;
        if (cVar2 != '\x06') {
          uVar10 = 0x30;
        }
      }
    }
    else {
      bVar4 = 0x10 < (int)uVar10;
      uVar10 = 0x20;
      if (bVar4) {
        uVar10 = 0x40;
      }
    }
  }
  uVar11 = uVar10;
  if (((uVar12 >> 0x14 & 1) != 0) &&
     (uVar11 = (uint)*(byte *)(param_1 + 0x161) * (uint)*(byte *)(param_1 + 0x160),
     (int)uVar11 <= (int)uVar10)) {
    uVar11 = uVar10;
  }
  uVar9 = (ulong)(uVar8 + 7 & 0xfffffff8);
  *(char *)(param_1 + 0x2b6) = (char)uVar11;
  uVar1 = ((ulong)(long)(int)uVar11 >> 3) * uVar9;
  if ((int)uVar11 < 8) {
    uVar1 = uVar9 * (long)(int)uVar11 >> 3;
  }
  uVar1 = uVar1 + (long)(((int)(uVar11 + 7) >> 3) + 0x31);
  *(undefined1 *)(param_1 + 0x2b7) = 0;
  if (*(ulong *)(param_1 + 0x4c8) < uVar1) {
    png_free(param_1,*(undefined8 *)(param_1 + 0x470));
    png_free(param_1,*(undefined8 *)(param_1 + 0x4e8));
    if (*(char *)(param_1 + 0x2ac) == '\0') {
      uVar6 = png_malloc(param_1,uVar1);
    }
    else {
      uVar6 = png_calloc(param_1,uVar1);
    }
    *(undefined8 *)(param_1 + 0x470) = uVar6;
    lVar7 = png_malloc(param_1,uVar1);
    uVar9 = *(long *)(param_1 + 0x470) + 0x20;
    *(ulong *)(param_1 + 600) = ((lVar7 + 0x20U) - (lVar7 + 0x20U & 0xf)) + -1;
    *(long *)(param_1 + 0x4e8) = lVar7;
    *(ulong *)(param_1 + 0x260) = (uVar9 - (uVar9 & 0xf)) + -1;
    *(ulong *)(param_1 + 0x4c8) = uVar1;
  }
  if (*(long *)(param_1 + 0x240) == -1) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Row has too many bytes to allocate in memory");
  }
  memset(*(void **)(param_1 + 600),0,*(long *)(param_1 + 0x240) + 1);
  if (*(long *)(param_1 + 0x4d0) != 0) {
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    png_free(param_1);
  }
  iVar5 = FUN_00d73574(param_1,0x49444154);
  if (iVar5 == 0) {
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
}

