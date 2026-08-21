
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00aa6228(long *param_1,ulong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte bVar7;
  ulong uVar8;
  ushort *puVar9;
  long lVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  byte local_24 [4];
  
  uVar13 = (uint)param_2;
  local_24[0] = (byte)param_2;
  bVar7 = *(byte *)((long)param_1 + 0x36);
  uVar8 = (ulong)bVar7;
  lVar19 = *param_1;
  switch((uint)bVar7) {
  case 0x5c:
    uVar8 = (ulong)*(short *)((long)param_1 + 0x2c);
    uVar17 = (uint)(byte)(&DAT_0189edb4)[uVar8];
    uVar12 = uVar13 + 0x20;
    if (0x19 < (uVar13 - 0x41 & 0xff)) {
      uVar12 = uVar13;
    }
    if (-1 < (char)(&DAT_0189edb4)[uVar8]) {
      pbVar15 = &DAT_0189edb4 + uVar8;
      lVar10 = (uVar8 << 0x20) + 0x200000000;
      lVar18 = (uVar8 << 0x20) + 0x100000000;
      do {
        uVar13 = (uint)uVar8;
        pbVar15 = pbVar15 + 3;
        if (uVar17 == 8) goto LAB_00aa64e8;
        if (uVar17 < 8) goto LAB_00aa6304;
        if (uVar17 == (uVar12 & 0xff)) {
          uVar13 = CONCAT11((&DAT_0189edb4)[lVar10 >> 0x20],(&DAT_0189edb4)[lVar18 >> 0x20]) +
                   uVar13;
          sVar14 = (short)uVar13;
          *(short *)((long)param_1 + 0x2c) = sVar14;
          goto joined_r0x00aa6624;
        }
        uVar17 = (uint)*pbVar15;
        uVar8 = (ulong)(uVar13 + 3);
        lVar10 = lVar10 + 0x300000000;
        lVar18 = lVar18 + 0x300000000;
      } while (-1 < (char)*pbVar15);
    }
    if ((uVar17 & 0x7f) == (uVar12 & 0xff)) {
      uVar13 = (int)uVar8 + 1;
      if ((&DAT_0189edb5)[(int)uVar8] == '\b') {
        uVar13 = 0xffffffff;
      }
LAB_00aa6304:
      sVar14 = (short)uVar13;
      *(short *)((long)param_1 + 0x2c) = sVar14;
joined_r0x00aa6624:
      if ((uVar13 >> 0xf & 1) != 0) {
        cVar1 = *(char *)((long)param_1 + 0x2fe);
        goto joined_r0x00aa64f4;
      }
    }
    else {
LAB_00aa64e8:
      sVar14 = -1;
      *(undefined2 *)((long)param_1 + 0x2c) = 0xffff;
      cVar1 = *(char *)((long)param_1 + 0x2fe);
joined_r0x00aa64f4:
      if (cVar1 == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa63a0 with catch @ 00aa6330
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa63d0 with catch @ 00aa6330
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa6400 with catch @ 00aa6330
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa6428 with catch @ 00aa6330
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa6454 with catch @ 00aa6330
                        */
        if (((((*(char *)(lVar19 + 0x300) != '\0') || (*(char *)(lVar19 + 0x301) != '\0')) ||
             (*(char *)(lVar19 + 0x302) != '\0')) ||
            ((*(char *)(lVar19 + 0x34a) != '\0' || (*(char *)(lVar19 + 0x349) != '\0')))) ||
           ((*(char *)(lVar19 + 0x34b) != '\0' ||
            ((*(char *)(lVar19 + 0x351) != '\0' || (*(char *)(lVar19 + 0x352) != '\0'))))))
        goto LAB_00aa65ec;
        if ((*(byte *)(param_1[0x45] + 0x1da) >> 4 & 1) != 0) {
          return 2;
        }
        goto switchD_00aa65a4_caseD_2;
      }
    }
    if (sVar14 < 0) {
LAB_00aa65ec:
      *(undefined1 *)((long)param_1 + 0x36) = 0x5d;
      return 0;
    }
    if (7 < (byte)(&DAT_0189edb4)[sVar14]) {
      return 0;
    }
    uVar13 = (uint)CONCAT11((&DAT_0189edb4)[sVar14],(&DAT_0189edb5)[sVar14]);
    if (uVar13 < 0x49) {
                    /* try { // try from 00aa6644 to 00ba664b has its CatchHandler @ 00aa6740 */
      if (uVar13 == 0) {
        cVar1 = *(char *)(lVar19 + 0x300);
      }
      else {
                    /* try { // try from 00aa664c to 00ba666f has its CatchHandler @ 00aa65dc */
        if (uVar13 == 1) {
          cVar1 = *(char *)(lVar19 + 0x301);
        }
        else {
          if (uVar13 != 2) goto switchD_00aa6540_caseD_4c;
          cVar1 = *(char *)(lVar19 + 0x302);
        }
      }
      goto joined_r0x00aa6754;
    }
    switch(uVar13) {
    case 0x49:
      cVar1 = *(char *)(lVar19 + 0x349);
      break;
    case 0x4a:
      cVar1 = *(char *)(lVar19 + 0x34a);
      break;
    case 0x4b:
      cVar1 = *(char *)(lVar19 + 0x34b);
      break;
    default:
      goto switchD_00aa6540_caseD_4c;
    case 0x51:
      cVar1 = *(char *)(lVar19 + 0x351);
      break;
    case 0x52:
      cVar1 = *(char *)(lVar19 + 0x352);
    }
joined_r0x00aa6754:
    if (cVar1 == '\0') {
switchD_00aa6540_caseD_4c:
      uVar12 = 6;
      if (uVar13 != 0x22) {
        uVar12 = uVar13;
      }
      *(char *)((long)param_1 + 0x36) = (char)uVar12;
      lVar10 = *(long *)(param_1[0x44] + 0x858);
      if (lVar10 == 0) {
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1[0x44] + 0xc88);
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa6864 with catch @ 00aa67a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa6ac0 with catch @ 00aa67a0
                        */
        *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar10 + (ulong)(uVar12 & 0xff) * 2);
      }
      if ((uVar12 & 0xff) == 8) goto LAB_00aa67a8;
LAB_00aa685c:
      bVar7 = *(byte *)(lVar19 + 0xb8b) + 1;
                    /* try { // try from 00aa6864 to 00ba6ab3 has its CatchHandler @ 00aa67a0 */
      *(byte *)(lVar19 + 0xb8b) = bVar7;
      uVar8 = (ulong)(uint)bVar7;
      if (bVar7 != 0x5b) {
LAB_00aa66d8:
        lVar10 = lVar19 + uVar8 * 8;
        *(undefined4 *)(lVar10 + 0x1c) = *(undefined4 *)(lVar19 + 0xb60);
        *(undefined4 *)(lVar10 + 0x20) = 0x2000000;
        lVar10 = lVar19 + (ulong)*(byte *)((long)param_1 + 0x36);
        bVar2 = *(byte *)(lVar10 + 0x300);
        uVar13 = (uint)bVar2;
                    /* try { // try from 00aa66f4 to 00ba66ff has its CatchHandler @ 00aa673c */
        if (bVar2 == 0) {
          *(byte *)(lVar10 + 0x300) = bVar7;
          *(uint *)(lVar19 + 0xb68) = (uint)*(byte *)((long)param_1 + 0x36);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa66a4 with catch @ 00aa673c
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa66cc with catch @ 00aa673c
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa66f4 with catch @ 00aa673c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa6644 with catch @ 00aa6740
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa6670 with catch @ 00aa6740
                        */
          return 0;
        }
        do {
                    /* try { // try from 00aa6700 to 00ba6743 has its CatchHandler @ 00aa65dc */
          pbVar15 = (byte *)(lVar19 + (ulong)uVar13 * 8 + 0x22);
          uVar13 = (uint)*pbVar15;
        } while (uVar13 != 0);
        *pbVar15 = bVar7;
        iVar3 = FUN_00aa6124(param_1,0x20);
        if (iVar3 < 0) {
          return 0xffffffff;
        }
        return 0;
      }
LAB_00aa6874:
      pcVar6 = "More hdr frags than we can deal with\n";
    }
    else {
      pcVar6 = "Duplicated method\n";
    }
    uVar5 = 2;
    break;
  case 0x5d:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa6398 with catch @ 00aa6494
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa63c4 with catch @ 00aa6494
                        */
    if ((uVar13 & 0xff) != 0xd) {
      return 0;
    }
    *(undefined1 *)((long)param_1 + 0x36) = 0x5e;
    return 0;
  case 0x5e:
    if ((int)param_1[5] == 0) {
      if ((uVar13 & 0xff) == 10) {
        *(undefined1 *)((long)param_1 + 0x36) = 0x5c;
        *(undefined2 *)((long)param_1 + 0x2c) = 0;
        return 0;
      }
      goto LAB_00aa65ec;
    }
    goto switchD_00aa65a4_caseD_2;
  case 0x5f:
    return 0;
  default:
    if (((uVar13 & 0xff) == 0x20) &&
       (*(short *)(lVar19 + (ulong)*(byte *)(lVar19 + uVar8 + 0x300) * 8 + 0x20) == 0)) {
      return 0;
    }
    uVar12 = bVar7 - 0x49;
                    /* try { // try from 00aa6398 to 00ba639f has its CatchHandler @ 00aa6494 */
                    /* try { // try from 00aa63a0 to 00ba63c3 has its CatchHandler @ 00aa6330 */
    if (((9 < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x307U) == 0)) && (2 < bVar7)) {
LAB_00aa65b0:
      if (((int)uVar8 != 8) && (((uint)param_2 & 0xff) == 0xd)) {
        if ((int)param_1[5] != 0) goto switchD_00aa65a4_caseD_2;
        param_2 = 0;
        local_24[0] = 0;
        *(undefined1 *)((long)param_1 + 0x36) = 0x5e;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa664c with catch @ 00aa65dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa667c with catch @ 00aa65dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa66ac with catch @ 00aa65dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa66d4 with catch @ 00aa65dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa6700 with catch @ 00aa65dc
                        */
      iVar3 = FUN_00aa6124(param_1,param_2);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      if (iVar3 != 0) goto LAB_00aa65ec;
switchD_00aa65a4_caseD_1:
      if (*(char *)((long)param_1 + 0x36) != '\b') {
        return 0;
      }
LAB_00aa67a8:
      if ((int)param_1[5] == 0) {
        lVar19 = *param_1;
        if ((lVar19 != 0) && (uVar8 = (ulong)*(byte *)(lVar19 + 0x305), uVar8 != 0)) {
          iVar3 = 0;
          do {
            lVar10 = lVar19 + uVar8 * 8;
            uVar8 = (ulong)*(byte *)(lVar10 + 0x22);
            iVar3 = iVar3 + (uint)*(ushort *)(lVar10 + 0x20);
          } while (uVar8 != 0);
          if ((iVar3 != 0) && (uVar8 = (ulong)*(byte *)(lVar19 + 0x321), uVar8 != 0)) {
            iVar3 = 0;
            uVar16 = uVar8;
            do {
              lVar10 = lVar19 + uVar16 * 8;
              uVar16 = (ulong)*(byte *)(lVar10 + 0x22);
              iVar3 = iVar3 + (uint)*(ushort *)(lVar10 + 0x20);
            } while (uVar16 != 0);
            if (iVar3 != 0) {
              iVar3 = atoi((char *)(*(long *)(lVar19 + 0x10) +
                                   (ulong)*(uint *)(lVar19 + uVar8 * 8 + 0x1c)));
              *(char *)((long)param_1 + 0x2fd) = (char)iVar3;
            }
          }
        }
        *(undefined1 *)((long)param_1 + 0x36) = 0x5f;
        *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 1;
                    /* try { // try from 00aa683c to 00ba6863 has its CatchHandler @ 00aa6a90 */
        return 0;
      }
switchD_00aa65a4_caseD_2:
      _lws_log(4," forbidding on uri sanitation\n");
      lws_return_http_status(param_1,0x193,0);
      return 0xffffffff;
    }
                    /* try { // try from 00aa63c4 to 00ba63cf has its CatchHandler @ 00aa6494 */
    if ((uVar13 & 0xff) != 0x20) {
      uVar4 = FUN_00aa5a50(param_1,local_24);
      switch(uVar4) {
      case 0:
        uVar8 = (ulong)*(byte *)((long)param_1 + 0x36);
        param_2 = (ulong)local_24[0];
        goto LAB_00aa65b0;
      case 1:
        goto switchD_00aa65a4_caseD_1;
      case 2:
        goto switchD_00aa65a4_caseD_2;
      case 3:
        bVar7 = *(byte *)(lVar19 + 0xb8b);
        uVar8 = (ulong)bVar7;
                    /* try { // try from 00aa66cc to 00ba66d3 has its CatchHandler @ 00aa673c */
                    /* try { // try from 00aa66d4 to 00ba66f3 has its CatchHandler @ 00aa65dc */
        if (bVar7 != 0x5b) goto LAB_00aa66d8;
        break;
      default:
        goto switchD_00aa65a4_default;
      }
      goto LAB_00aa6874;
    }
                    /* try { // try from 00aa63d0 to 00ba63f7 has its CatchHandler @ 00aa6330 */
    if ((*(short *)(lVar19 + (ulong)*(byte *)(lVar19 + 0xb8b) * 8 + 0x20) == 0) &&
       (iVar3 = FUN_00aa6124(param_1,0x2f), iVar3 < 0)) {
      return 0xffffffff;
    }
    if (*(int *)((long)param_1 + 0x24) == 3) {
                    /* try { // try from 00aa63f8 to 00ba63ff has its CatchHandler @ 00aa6490 */
      puVar9 = (ushort *)(lVar19 + (ulong)*(byte *)(lVar19 + 0xb8b) * 8 + 0x20);
                    /* try { // try from 00aa6400 to 00ba641f has its CatchHandler @ 00aa6330 */
      if (2 < *puVar9) {
        uVar11 = *puVar9 - 1;
        uVar13 = *(int *)(lVar19 + 0xb60) - 2;
        *(int *)(lVar19 + 0xb60) = *(int *)(lVar19 + 0xb60) + -1;
        *puVar9 = uVar11;
        do {
                    /* try { // try from 00aa6420 to 00ba6427 has its CatchHandler @ 00aa6490 */
          uVar11 = uVar11 - 1;
                    /* try { // try from 00aa6428 to 00ba6447 has its CatchHandler @ 00aa6330 */
          *(uint *)(lVar19 + 0xb60) = uVar13;
          *puVar9 = uVar11;
          if (uVar11 < 2) break;
          uVar8 = (ulong)uVar13;
          uVar13 = uVar13 - 1;
                    /* try { // try from 00aa6448 to 00ba6453 has its CatchHandler @ 00aa6490 */
        } while (*(char *)(*(long *)(lVar19 + 0x10) + uVar8) != '/');
      }
    }
    lVar10 = *param_1;
                    /* try { // try from 00aa6454 to 00ba6497 has its CatchHandler @ 00aa6330 */
    uVar13 = *(uint *)(lVar10 + 0xb60);
    if (uVar13 < *(uint *)(param_1[0x44] + 0xc88)) {
      uVar12 = (uint)*(ushort *)(lVar10 + (ulong)*(byte *)(lVar10 + 0xb8b) * 8 + 0x20);
      if (uVar12 < *(uint *)(param_1 + 6)) {
        *(uint *)(lVar10 + 0xb60) = uVar13 + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0x10) + (ulong)uVar13) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa63f8 with catch @ 00aa6490
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa6420 with catch @ 00aa6490
                       catch(type#1 @ 00000000) { ... } // from try @ 00aa6448 with catch @ 00aa6490
                        */
      }
      else if (*(uint *)(param_1 + 6) == uVar12) {
                    /* try { // try from 00aa667c to 00ba66a3 has its CatchHandler @ 00aa65dc */
        *(uint *)(lVar10 + 0xb60) = uVar13 + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0x10) + (ulong)uVar13) = 0;
        _lws_log(2,"header %i exceeds limit %d\n",*(undefined1 *)((long)param_1 + 0x36),
                 (int)param_1[6]);
      }
                    /* try { // try from 00aa66a4 to 00ba66ab has its CatchHandler @ 00aa673c */
      *(undefined1 *)((long)param_1 + 0x36) = 0xf;
      goto LAB_00aa685c;
    }
    if (uVar13 != *(uint *)(param_1[0x44] + 0xc88)) {
                    /* try { // try from 00aa66ac to 00ba66cb has its CatchHandler @ 00aa65dc */
      _lws_log(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds");
      return 0xffffffff;
    }
    pcVar6 = "Ran out of header data space\n";
    uVar5 = 1;
  }
  _lws_log(uVar5,pcVar6);
switchD_00aa65a4_default:
  return 0xffffffff;
}

