
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
  
                    /* try { // try from 010d2948 to 011d2997 has its CatchHandler @ 010d27c8 */
  png_init_read_transformations();
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    uVar8 = *(uint *)(param_1 + 0x230);
    uVar12 = *(uint *)(param_1 + 0x234);
    uVar11 = *(uint *)(param_1 + 0x16c);
    uVar13 = uVar8;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x16c);
    bVar3 = (&DAT_01475161)[*(byte *)(param_1 + 0x2ad)];
    uVar8 = *(uint *)(param_1 + 0x230);
    uVar12 = *(uint *)(param_1 + 0x234) + 7 >> 3;
                    /* try { // try from 010d2998 to 011d299f has its CatchHandler @ 010d3590 */
    if ((uVar11 & 2) != 0) {
      uVar12 = *(uint *)(param_1 + 0x234);
    }
                    /* try { // try from 010d29a0 to 011d29ff has its CatchHandler @ 010d27c8 */
    uVar13 = 0;
    if (bVar3 != 0) {
      uVar13 = ((uVar8 + bVar3 + -1) - (uint)(byte)(&DAT_0147515a)[*(byte *)(param_1 + 0x2ad)]) /
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
                    /* try { // try from 010d2a60 to 011d2a67 has its CatchHandler @ 010d3588 */
        uVar10 = (uVar10 << 2) / 3;
      }
    }
    else {
                    /* try { // try from 010d2a00 to 011d2a07 has its CatchHandler @ 010d358c */
                    /* try { // try from 010d2a08 to 011d2a5f has its CatchHandler @ 010d27c8 */
      if ((cVar2 == '\x03') && (uVar10 = 0x18, *(short *)(param_1 + 0x2a8) != 0)) {
        uVar10 = 0x20;
      }
    }
  }
  if ((uVar12 >> 9 & 1) != 0) {
                    /* try { // try from 010d2a68 to 011d2ab7 has its CatchHandler @ 010d27c8 */
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
      if (*(byte *)(param_1 + 0x2af) != 0) goto LAB_010d2ac4;
      bVar4 = SBORROW4(uVar10,9);
      iVar5 = uVar10 - 9;
                    /* try { // try from 010d2ab8 to 011d2abf has its CatchHandler @ 010d3584 */
      uVar11 = 0x20;
      uVar10 = 0x10;
    }
                    /* try { // try from 010d2ac0 to 011d2b1f has its CatchHandler @ 010d27c8 */
    if (iVar5 < 0 == bVar4) {
      uVar10 = uVar11;
    }
  }
LAB_010d2ac4:
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
                    /* try { // try from 010d2b20 to 011d2b27 has its CatchHandler @ 010d3580 */
  uVar9 = (ulong)(uVar8 + 7 & 0xfffffff8);
                    /* try { // try from 010d2b28 to 011d2b87 has its CatchHandler @ 010d27c8 */
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
                    /* try { // try from 010d2b88 to 011d2b8f has its CatchHandler @ 010d357c */
      uVar6 = png_calloc(param_1,uVar1);
                    /* try { // try from 010d2b90 to 011d2bef has its CatchHandler @ 010d27c8 */
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
                    /* try { // try from 010d2bf0 to 011d2bf7 has its CatchHandler @ 010d3578 */
                    /* try { // try from 010d2bf8 to 011d2c37 has its CatchHandler @ 010d27c8 */
  memset(*(void **)(param_1 + 600),0,*(long *)(param_1 + 0x240) + 1);
  if (*(long *)(param_1 + 0x4d0) != 0) {
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    png_free(param_1);
  }
  iVar5 = FUN_010cfa1c(param_1,0x49444154);
  if (iVar5 == 0) {
                    /* try { // try from 010d2c38 to 011d2c3f has its CatchHandler @ 010d3574 */
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x40;
                    /* try { // try from 010d2c40 to 011d2c9f has its CatchHandler @ 010d27c8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
}

