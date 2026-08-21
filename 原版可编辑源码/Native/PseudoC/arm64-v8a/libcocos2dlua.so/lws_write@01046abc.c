
ulong lws_write(long param_1,long param_2,ulong param_3,ulong param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long local_80;
  long local_78;
  ulong uStack_70;
  undefined4 local_68;
  
  uVar16 = param_4 & 0xffffffff;
  uVar14 = (uint)param_3;
  if ((*(byte *)(param_1 + 0x2f6) >> 4 & 1) != 0) {
    local_68 = (undefined4)param_4;
    lVar10 = *(long *)(param_1 + 0x230);
    local_80 = param_1;
    local_78 = param_2;
    uStack_70 = param_3;
    iVar7 = (**(code **)(*(long *)(lVar10 + 0x248) + 8))
                      (lVar10,0x44,*(undefined8 *)(lVar10 + 0x270),&local_80,0);
                    /* try { // try from 01046b90 to 01146ba7 has its CatchHandler @ 01046fc4 */
    if (iVar7 != 0) {
      uVar14 = 1;
    }
    return (ulong)uVar14;
  }
  if ((int)uVar14 < 0) {
                    /* try { // try from 01046ba8 to 01146bb7 has its CatchHandler @ 01046ef4 */
                    /* try { // try from 01046bb8 to 01146bc7 has its CatchHandler @ 01046ef0 */
    _lws_log(1,"%s: suspicious len int %d, ulong %lu\n","lws_write",param_3 & 0xffffffff,param_3);
    return 0xffffffff;
  }
  lVar17 = *(long *)(param_1 + 0x220);
  bVar2 = *(byte *)(param_1 + 0x304);
  lVar10 = *(long *)(param_1 + 0x228);
                    /* catch() { ... } // from try @ 010469e8 with catch @ 01046b04 */
  cVar3 = *(char *)(param_1 + 0x2fe);
  if (lVar10 != 0) {
    *(ulong *)(lVar10 + 0x108) = *(long *)(lVar10 + 0x108) + param_3;
  }
                    /* try { // try from 01046b20 to 01146b8f has its CatchHandler @ 01046b20
                       catch() { ... } // from try @ 01046b20 with catch @ 01046b20
                       catch() { ... } // from try @ 01046e40 with catch @ 01046b20
                       catch() { ... } // from try @ 01046ee4 with catch @ 01046b20 */
  if (*(char *)(param_1 + 0x2ff) == '\x05') {
    uVar15 = *(uint *)(param_1 + 0x106);
    if ((uVar15 >> 0xf & 1) != 0) {
      *(uint *)(param_1 + 0x106) = uVar15 & 0xffff7fff;
      plVar11 = (long *)(lVar17 + (ulong)bVar2 * 0x6f8 + 0xf0);
      lVar10 = *plVar11;
      while (lVar10 != 0) {
        if (lVar10 == param_1) {
          *plVar11 = *(long *)(param_1 + 0x50);
          break;
        }
        plVar11 = (long *)(lVar10 + 0x50);
        lVar10 = *plVar11;
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
      uVar16 = (ulong)(*(byte *)(param_1 + 0x105) & 0xc2 | 2);
    }
  }
  FUN_01044614(param_1);
  uVar15 = (uint)uVar16;
                    /* try { // try from 01046bec to 01146bff has its CatchHandler @ 01046eec */
  uVar18 = param_3;
                    /* try { // try from 01046c04 to 01146c27 has its CatchHandler @ 01046fa4 */
  if (((uVar15 & 0x1f) < 10) && ((1 << (ulong)(uVar15 & 0x1f) & 0x388U) != 0)) {
    uVar19 = 0;
    goto LAB_01046c14;
  }
  bVar4 = *(byte *)(param_1 + 0x2ff);
  if (bVar4 - 8 < 2) {
    if (uVar15 != 4) {
      return 0;
    }
  }
  else if (bVar4 != 5) {
    if (uVar15 != 4) {
      return 0;
    }
    if (bVar4 != 10) {
      return 0;
    }
  }
  puVar1 = (uint *)(param_1 + 0x106);
  if ((*puVar1 >> 4 & 1) == 0) {
    *puVar1 = *puVar1 | 0x20;
                    /* try { // try from 01046cf8 to 01146d13 has its CatchHandler @ 01046f08 */
    local_78 = CONCAT44(local_78._4_4_,uVar14);
    local_80 = param_2;
    if (2 < uVar15 - 4) {
      iVar7 = FUN_010566c8(param_1,0x15,&local_80,uVar16);
      if (iVar7 < 0) {
        return 0xffffffff;
      }
      if ((iVar7 != 0) && ((uint)local_78 != 0)) {
        lVar17 = lVar17 + (ulong)bVar2 * 0x6f8;
                    /* try { // try from 01046e2c to 01146e3f has its CatchHandler @ 01046f04 */
        *puVar1 = *puVar1 | 0x8000;
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar17 + 0xf0);
        *(long *)(lVar17 + 0xf0) = param_1;
        lws_callback_on_writable(param_1);
                    /* try { // try from 01046e40 to 01146edb has its CatchHandler @ 01046b20 */
        *(char *)(param_1 + 0x105) = (char)uVar16;
        uVar16 = (ulong)(uVar15 | 0x40);
      }
      if (((uint)local_78 != 0) && ((*puVar1 >> 0xd & 1) != 0)) {
        *puVar1 = *puVar1 & 0xffffdfff;
        uVar16 = (ulong)((uint)uVar16 & 0xc0 | (uint)*(byte *)(param_1 + 0x104));
      }
      uVar14 = (uint)local_78;
      if (local_80 != param_2) {
        uVar15 = *puVar1;
        if ((param_3 != 0) && ((uint)local_78 == 0)) {
          if ((uVar15 >> 0xd & 1) == 0) {
            *(byte *)(param_1 + 0x104) = (byte)uVar16 & 0x3f;
          }
          *puVar1 = uVar15 | 0x2000;
          return param_3 & 0xffffffff;
        }
        *puVar1 = uVar15 & 0xffffffdf;
                    /* try { // try from 01046edc to 01146ee3 has its CatchHandler @ 01046ee4 */
      }
    }
    uVar18 = (ulong)(int)uVar14;
    if (local_80 == 0) {
                    /* catch() { ... } // from try @ 01046dec with catch @ 01046ee4
                       catch() { ... } // from try @ 01046edc with catch @ 01046ee4
                       try { // try from 01046ee4 to 01146fd3 has its CatchHandler @ 01046b20 */
                    /* catch() { ... } // from try @ 01046c3c with catch @ 01046ee8 */
                    /* catch() { ... } // from try @ 01046bec with catch @ 01046eec */
                    /* catch() { ... } // from try @ 01046bb8 with catch @ 01046ef0 */
                    /* catch() { ... } // from try @ 01046ba8 with catch @ 01046ef4 */
      _lws_log(1,"null buf (%d)\n",uVar14);
      return 0xffffffff;
    }
    uVar15 = (uint)uVar16;
    param_2 = local_80;
    if (*(char *)(param_1 + 0x2fd) != '\r') goto joined_r0x01046d6c;
    puVar12 = (undefined4 *)(local_80 + -4);
    bVar6 = cVar3 == '\x04';
    if (!bVar6) {
      puVar12 = (undefined4 *)0x0;
    }
    if ((6 < (uVar15 & 0xf)) || ((0x77U >> (uVar16 & 0xf) & 1) == 0)) {
                    /* try { // try from 01046d48 to 01146d4f has its CatchHandler @ 01046f04 */
      pcVar9 = "lws_write: unknown write opc / wp\n";
      uVar8 = 2;
      goto LAB_01046ec8;
    }
                    /* catch() { ... } // from try @ 01046d48 with catch @ 01046f04
                       catch() { ... } // from try @ 01046e2c with catch @ 01046f04 */
                    /* catch() { ... } // from try @ 01046cf8 with catch @ 01046f08 */
    bVar2 = bVar6 << 7;
    uVar13 = (uint)bVar6 * 4;
    bVar4 = ((byte)*(undefined4 *)(&DAT_01459850 + ((long)(uVar16 << 0x3c) >> 0x3c) * 4) |
            (byte)((uVar15 & 0x40) << 1)) ^ 0x80;
    if (uVar14 < 0x7e) {
      uVar19 = uVar13 | 2;
      *(byte *)(local_80 - (int)uVar19) = bVar4;
      *(byte *)(local_80 + (int)(1 - uVar19)) = (byte)uVar14 | bVar2;
    }
    else {
      uVar5 = (undefined1)(uVar14 >> 8);
      if ((uVar18 >> 0x10 & 0xffff) == 0) {
        uVar19 = uVar13 + 4;
        *(byte *)(local_80 + (-4 - (long)(int)uVar13)) = bVar4;
        uVar13 = (uint)(-4 - (long)(int)uVar13);
        *(byte *)(local_80 + (int)(uVar13 | 1)) = bVar2 | 0x7e;
        *(undefined1 *)(local_80 + (int)(uVar13 | 2)) = uVar5;
        iVar7 = 3;
      }
      else {
                    /* catch() { ... } // from try @ 01046c54 with catch @ 01046f90 */
        uVar19 = uVar13 | 10;
        lVar10 = (long)(int)uVar19;
        *(byte *)(local_80 - lVar10) = bVar4;
                    /* catch() { ... } // from try @ 01046c04 with catch @ 01046fa4 */
        *(byte *)(local_80 + (1 - lVar10)) = bVar2 | 0x7f;
        bVar2 = (byte)((int)uVar14 >> 0x1f);
        *(byte *)(local_80 + (2 - lVar10)) = bVar2 & 0x7f;
                    /* catch() { ... } // from try @ 01046b90 with catch @ 01046fc4 */
        *(byte *)(local_80 + (3 - lVar10)) = bVar2;
        *(byte *)(local_80 + (4 - lVar10)) = bVar2;
        *(byte *)(local_80 + (5 - lVar10)) = bVar2;
        *(char *)(local_80 + (6 - lVar10)) = (char)(uVar14 >> 0x18);
        *(char *)(local_80 + (7 - lVar10)) = (char)(uVar14 >> 0x10);
        iVar7 = 9;
        *(undefined1 *)(local_80 + (8 - lVar10)) = uVar5;
      }
                    /* try { // try from 0104702c to 01147067 has its CatchHandler @ 0104702c
                       catch() { ... } // from try @ 0104702c with catch @ 0104702c
                       catch() { ... } // from try @ 0104707c with catch @ 0104702c */
      *(byte *)(local_80 + (int)(iVar7 - uVar19)) = (byte)uVar14;
    }
  }
  else {
joined_r0x01046d6c:
    uVar19 = 0;
    puVar12 = (undefined4 *)0x0;
  }
  if (cVar3 == '\x04') {
    if ((*(byte *)puVar1 >> 4 & 1) == 0) {
      uVar8 = lws_get_context(param_1);
      iVar7 = lws_get_random(uVar8,param_1 + 0x6c,4);
      if (iVar7 != 4) {
        pcVar9 = "frame mask generation failed\n";
        uVar8 = 1;
LAB_01046ec8:
        _lws_log(uVar8,pcVar9);
        return 0xffffffff;
      }
      *(undefined1 *)(param_1 + 0xfe) = 0;
    }
    if (puVar12 != (undefined4 *)0x0) {
      if (0 < (int)uVar18) {
        lVar10 = 4;
        do {
          bVar2 = *(byte *)(param_1 + 0xfe);
          bVar4 = *(byte *)((long)puVar12 + lVar10);
          *(byte *)(param_1 + 0xfe) = bVar2 + 1;
          *(byte *)((long)puVar12 + lVar10) = *(byte *)(param_1 + ((ulong)bVar2 & 3) + 0x6c) ^ bVar4
          ;
          bVar6 = lVar10 < (long)((uVar18 << 0x20) + 0x300000000) >> 0x20;
          lVar10 = lVar10 + 1;
        } while (bVar6);
      }
                    /* try { // try from 01046dec to 01146e2b has its CatchHandler @ 01046ee4 */
      *puVar12 = *(undefined4 *)(param_1 + 0x6c);
    }
  }
LAB_01046c14:
  if ((uVar15 & 0x1f) - 3 < 7) {
    uVar16 = FUN_01046810(param_1);
  }
  else {
                    /* try { // try from 01046c3c to 01146c4f has its CatchHandler @ 01046ee8 */
    uVar16 = FUN_01056890(param_1,param_2 - (int)uVar19,uVar18 + (long)(int)uVar19);
    puVar1 = (uint *)(param_1 + 0x106);
    uVar14 = *puVar1;
    iVar7 = (int)uVar16;
                    /* try { // try from 01046c54 to 01146c7b has its CatchHandler @ 01046f90 */
    *puVar1 = uVar14 | 0x10;
    if (0 < iVar7) {
      if (iVar7 == uVar19 + (int)uVar18) {
        *puVar1 = uVar14 & 0xffffffef;
        uVar16 = param_3 & 0xffffffff;
      }
      else {
        uVar16 = (ulong)(iVar7 - uVar19);
      }
    }
  }
  return uVar16;
}

