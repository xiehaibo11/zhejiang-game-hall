
ulong FUN_00a1fcbc(long param_1,uint *param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ushort *puVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar5;
  
  uVar4 = 0;
  uVar6 = *(uint *)(param_1 + 0x28) & 0xff;
  uVar7 = *(uint *)(param_1 + 0x28) >> 8;
  do {
    iVar3 = (int)uVar4;
    lVar5 = (long)iVar3;
    lVar10 = 0;
    lVar15 = (lVar5 << 0x20) + 0x200000000;
    while( true ) {
      pbVar1 = (byte *)(param_3 + lVar10);
      bVar2 = *pbVar1;
      iVar9 = (int)lVar10;
      if (bVar2 != 0x1b) break;
      if (param_4 < lVar5 + lVar10 + 4U) {
        iVar8 = iVar3 + iVar9;
        goto LAB_00a1fdc4;
      }
      if (((pbVar1[1] != 0x24) || (pbVar1[2] != 0x29)) || (pbVar1[3] != 0x43)) goto LAB_00a1fda0;
      lVar10 = lVar10 + 4;
      lVar15 = lVar15 + 0x400000000;
      uVar7 = 1;
      if (param_4 < lVar5 + lVar10 + 1U) {
        iVar8 = iVar3 + (int)lVar10;
        goto LAB_00a1fdc0;
      }
    }
    if (bVar2 == 0xe) {
      if (uVar7 != 1) goto LAB_00a1fda0;
      if (param_4 < (ulong)(lVar15 >> 0x20)) {
        uVar6 = 1;
                    /* catch() { ... } // from try @ 00a1fe6c with catch @ 00a1fec8 */
        iVar8 = iVar3 + iVar9 + 1;
                    /* catch() { ... } // from try @ 00a1fe14 with catch @ 00a1fecc */
LAB_00a1fdc0:
        uVar7 = 1;
        goto LAB_00a1fdc4;
      }
                    /* try { // try from 00a1fd8c to 00b1fe13 has its CatchHandler @ 00a1fd8c
                       catch() { ... } // from try @ 00a1fd8c with catch @ 00a1fd8c
                       catch() { ... } // from try @ 00a1fe80 with catch @ 00a1fd8c */
      uVar6 = 1;
    }
    else {
      uVar13 = (uint)bVar2;
      if (uVar13 != 0xf) {
        iVar8 = iVar9 + iVar3;
        uVar14 = (uint)bVar2;
        if (uVar6 == 1) {
                    /* try { // try from 00a1fe14 to 00b1fe33 has its CatchHandler @ 00a1fecc */
          uVar4 = lVar10 + (uVar4 & 0xffffffff) + 2;
          if (param_4 < (ulong)(long)(int)uVar4) goto LAB_00a1fdc4;
          if (uVar7 != 1) goto LAB_00a1ff34;
                    /* try { // try from 00a1fe6c to 00b1fe7f has its CatchHandler @ 00a1fec8 */
                    /* try { // try from 00a1fe80 to 00b1fee7 has its CatchHandler @ 00a1fd8c */
          if ((((-1 < (char)bVar2) && (bVar2 = *(byte *)(param_3 + lVar10 + 1), -1 < (char)bVar2))
              && (uVar14 - 0x4a < 0x34 || (uVar13 - 0x21 < 0xc || uVar13 - 0x30 < 0x19))) &&
             ((bVar2 - 0x21 & 0xff) < 0x5e)) {
            iVar8 = (uint)bVar2 + uVar14 * 0x5e;
            uVar13 = iVar8 - 0xc3f;
            if (uVar13 < 0x582) {
              if (uVar13 < 0x45b) {
                puVar11 = (ushort *)(&DAT_0131dd04 + (ulong)uVar13 * 2);
LAB_00a1ff14:
                if (*puVar11 != 0xfffd) {
                  *param_2 = (uint)*puVar11;
                  *(undefined4 *)(param_1 + 0x28) = 0x101;
                  goto LAB_00a1fdd4;
                }
              }
            }
            else if (uVar13 < 0xf0e) {
              if (uVar13 < 0xeb0) {
                uVar13 = iVar8 - 0x11c1;
                puVar12 = &DAT_0131e5ba;
LAB_00a1ff10:
                puVar11 = (ushort *)(puVar12 + (ulong)uVar13 * 2);
                goto LAB_00a1ff14;
              }
            }
            else if (uVar13 < 0x2226) {
              uVar13 = iVar8 - 0x1b4d;
              puVar12 = &DAT_0131f816;
              goto LAB_00a1ff10;
            }
          }
        }
        else {
          if (uVar6 != 0) {
LAB_00a1ff34:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (-1 < (char)bVar2) {
            *param_2 = uVar14;
            *(uint *)(param_1 + 0x28) = uVar7 << 8;
            uVar4 = (ulong)(iVar3 + iVar9 + 1);
            goto LAB_00a1fdd4;
          }
        }
LAB_00a1fda0:
        *(uint *)(param_1 + 0x28) = uVar6 | uVar7 << 8;
        uVar4 = (ulong)((iVar3 + iVar9) * 2 ^ 0xffffffff);
        goto LAB_00a1fdd4;
      }
      if (param_4 < (ulong)(lVar15 >> 0x20)) {
        uVar6 = 0;
        iVar8 = iVar3 + iVar9 + 1;
LAB_00a1fdc4:
        *(uint *)(param_1 + 0x28) = uVar6 | uVar7 << 8;
        uVar4 = (ulong)(iVar8 * -2 - 2);
LAB_00a1fdd4:
        return uVar4 & 0xffffffff;
      }
      uVar6 = 0;
    }
    uVar4 = lVar10 + (uVar4 & 0xffffffff) + 1;
    param_3 = param_3 + lVar10 + 1;
  } while( true );
}

