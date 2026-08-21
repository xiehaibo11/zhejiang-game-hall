
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_010489ac(long *param_1,ulong param_2)

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
                    /* try { // try from 010489b8 to 011489c3 has its CatchHandler @ 01048d38 */
  local_24[0] = (byte)param_2;
  bVar7 = *(byte *)((long)param_1 + 0x36);
  uVar8 = (ulong)bVar7;
  lVar19 = *param_1;
                    /* try { // try from 010489e4 to 011489f3 has its CatchHandler @ 01048d34 */
  switch((uint)bVar7) {
  case 0x5c:
    uVar8 = (ulong)*(short *)((long)param_1 + 0x2c);
                    /* try { // try from 010489fc to 01148a1f has its CatchHandler @ 01048d6c */
    uVar17 = (uint)(byte)(&DAT_01459944)[uVar8];
    uVar12 = uVar13 + 0x20;
    if (0x19 < (uVar13 - 0x41 & 0xff)) {
      uVar12 = uVar13;
    }
    if (-1 < (char)(&DAT_01459944)[uVar8]) {
                    /* try { // try from 01048a20 to 01148a2b has its CatchHandler @ 01048d30 */
      pbVar15 = &DAT_01459944 + uVar8;
      lVar10 = (uVar8 << 0x20) + 0x200000000;
      lVar18 = (uVar8 << 0x20) + 0x100000000;
      do {
        uVar13 = (uint)uVar8;
        pbVar15 = pbVar15 + 3;
        if (uVar17 == 8) goto LAB_01048c6c;
        if (uVar17 < 8) goto LAB_01048a88;
                    /* try { // try from 01048a4c to 01148a5b has its CatchHandler @ 01048d2c */
        if (uVar17 == (uVar12 & 0xff)) {
          uVar13 = CONCAT11((&DAT_01459944)[lVar10 >> 0x20],(&DAT_01459944)[lVar18 >> 0x20]) +
                   uVar13;
          sVar14 = (short)uVar13;
          *(short *)((long)param_1 + 0x2c) = sVar14;
          goto joined_r0x01048da8;
        }
        uVar17 = (uint)*pbVar15;
        uVar8 = (ulong)(uVar13 + 3);
        lVar10 = lVar10 + 0x300000000;
                    /* try { // try from 01048a60 to 01148a7f has its CatchHandler @ 01048d58 */
        lVar18 = lVar18 + 0x300000000;
      } while (-1 < (char)*pbVar15);
    }
    if ((uVar17 & 0x7f) == (uVar12 & 0xff)) {
      uVar13 = (int)uVar8 + 1;
      if ((&DAT_01459945)[(int)uVar8] == '\b') {
        uVar13 = 0xffffffff;
      }
LAB_01048a88:
      sVar14 = (short)uVar13;
      *(short *)((long)param_1 + 0x2c) = sVar14;
joined_r0x01048da8:
                    /* catch() { ... } // from try @ 01048804 with catch @ 01048da8 */
      if ((uVar13 >> 0xf & 1) != 0) {
        cVar1 = *(char *)((long)param_1 + 0x2fe);
                    /* try { // try from 01048a94 to 01148aa3 has its CatchHandler @ 01048d24 */
        goto joined_r0x01048c78;
      }
    }
    else {
LAB_01048c6c:
      sVar14 = -1;
      *(undefined2 *)((long)param_1 + 0x2c) = 0xffff;
      cVar1 = *(char *)((long)param_1 + 0x2fe);
joined_r0x01048c78:
      if (cVar1 == '\0') {
                    /* try { // try from 01048aa8 to 01148ac7 has its CatchHandler @ 01048d80 */
        if (((((*(char *)(lVar19 + 0x300) != '\0') || (*(char *)(lVar19 + 0x301) != '\0')) ||
             (*(char *)(lVar19 + 0x302) != '\0')) ||
            ((*(char *)(lVar19 + 0x34a) != '\0' || (*(char *)(lVar19 + 0x349) != '\0')))) ||
           ((*(char *)(lVar19 + 0x34b) != '\0' ||
            ((*(char *)(lVar19 + 0x351) != '\0' || (*(char *)(lVar19 + 0x352) != '\0'))))))
        goto LAB_01048d70;
        if ((*(byte *)(param_1[0x45] + 0x1da) >> 4 & 1) != 0) {
          return 2;
        }
        goto switchD_01048d28_caseD_2;
      }
    }
                    /* try { // try from 01048c80 to 01148c9f has its CatchHandler @ 01048d50 */
    if (sVar14 < 0) {
LAB_01048d70:
                    /* catch() { ... } // from try @ 010488c4 with catch @ 01048d70 */
                    /* catch() { ... } // from try @ 010485d4 with catch @ 01048d74 */
      *(undefined1 *)((long)param_1 + 0x36) = 0x5d;
                    /* catch() { ... } // from try @ 01048560 with catch @ 01048d78 */
                    /* catch() { ... } // from try @ 01048bf4 with catch @ 01048d7c */
                    /* catch() { ... } // from try @ 01048aa8 with catch @ 01048d80 */
                    /* catch() { ... } // from try @ 01048994 with catch @ 01048d84 */
                    /* catch() { ... } // from try @ 01048bc8 with catch @ 01048d88 */
      return 0;
    }
    if (7 < (byte)(&DAT_01459944)[sVar14]) {
      return 0;
    }
    uVar13 = (uint)CONCAT11((&DAT_01459944)[sVar14],(&DAT_01459945)[sVar14]);
                    /* try { // try from 01048ca4 to 01148cb3 has its CatchHandler @ 01048e30 */
    if (uVar13 < 0x49) {
                    /* catch() { ... } // from try @ 01048774 with catch @ 01048dc8 */
      if (uVar13 == 0) {
        cVar1 = *(char *)(lVar19 + 0x300);
      }
      else {
                    /* catch() { ... } // from try @ 01048ba4 with catch @ 01048dcc */
                    /* catch() { ... } // from try @ 01048578 with catch @ 01048dd0 */
        if (uVar13 == 1) {
          cVar1 = *(char *)(lVar19 + 0x301);
        }
        else {
          if (uVar13 != 2) goto switchD_01048cc4_caseD_4c;
          cVar1 = *(char *)(lVar19 + 0x302);
                    /* catch() { ... } // from try @ 01048c0c with catch @ 01048de0 */
        }
      }
      goto joined_r0x01048ed8;
    }
                    /* try { // try from 01048cb4 to 01148e8b has its CatchHandler @ 01048378 */
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
      goto switchD_01048cc4_caseD_4c;
    case 0x51:
      cVar1 = *(char *)(lVar19 + 0x351);
      break;
    case 0x52:
      cVar1 = *(char *)(lVar19 + 0x352);
    }
joined_r0x01048ed8:
    if (cVar1 == '\0') {
switchD_01048cc4_caseD_4c:
      uVar12 = 6;
      if (uVar13 != 0x22) {
        uVar12 = uVar13;
      }
                    /* try { // try from 01048f08 to 01148f17 has its CatchHandler @ 0104927c */
      *(char *)((long)param_1 + 0x36) = (char)uVar12;
      lVar10 = *(long *)(param_1[0x44] + 0x858);
      if (lVar10 == 0) {
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1[0x44] + 0xc88);
      }
      else {
                    /* try { // try from 01048f18 to 01148f27 has its CatchHandler @ 01049278 */
        *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar10 + (ulong)(uVar12 & 0xff) * 2);
      }
      if ((uVar12 & 0xff) == 8) goto LAB_01048f2c;
LAB_01048fe0:
      bVar7 = *(byte *)(lVar19 + 0xb8b) + 1;
      *(byte *)(lVar19 + 0xb8b) = bVar7;
      uVar8 = (ulong)(uint)bVar7;
      if (bVar7 != 0x5b) {
LAB_01048e5c:
        lVar10 = lVar19 + uVar8 * 8;
        *(undefined4 *)(lVar10 + 0x1c) = *(undefined4 *)(lVar19 + 0xb60);
        *(undefined4 *)(lVar10 + 0x20) = 0x2000000;
        lVar10 = lVar19 + (ulong)*(byte *)((long)param_1 + 0x36);
        bVar2 = *(byte *)(lVar10 + 0x300);
        uVar13 = (uint)bVar2;
        if (bVar2 == 0) {
          *(byte *)(lVar10 + 0x300) = bVar7;
          *(uint *)(lVar19 + 0xb68) = (uint)*(byte *)((long)param_1 + 0x36);
          return 0;
        }
        do {
          pbVar15 = (byte *)(lVar19 + (ulong)uVar13 * 8 + 0x22);
          uVar13 = (uint)*pbVar15;
        } while (uVar13 != 0);
                    /* try { // try from 01048e8c to 01148eef has its CatchHandler @ 01048e8c
                       catch() { ... } // from try @ 01048e8c with catch @ 01048e8c
                       catch() { ... } // from try @ 010491c4 with catch @ 01048e8c
                       catch() { ... } // from try @ 01049268 with catch @ 01048e8c */
        *pbVar15 = bVar7;
        iVar3 = FUN_010488a8(param_1,0x20);
        if (iVar3 < 0) {
          return 0xffffffff;
        }
        return 0;
      }
LAB_01048ff8:
      pcVar6 = "More hdr frags than we can deal with\n";
    }
    else {
      pcVar6 = "Duplicated method\n";
                    /* try { // try from 01048ef0 to 01148f07 has its CatchHandler @ 010492c4 */
    }
    uVar5 = 2;
    break;
  case 0x5d:
    if ((uVar13 & 0xff) != 0xd) {
      return 0;
    }
    *(undefined1 *)((long)param_1 + 0x36) = 0x5e;
                    /* try { // try from 01048c30 to 01148c3b has its CatchHandler @ 01048d60 */
    return 0;
  case 0x5e:
    if ((int)param_1[5] == 0) {
      if ((uVar13 & 0xff) == 10) {
        *(undefined1 *)((long)param_1 + 0x36) = 0x5c;
        *(undefined2 *)((long)param_1 + 0x2c) = 0;
        return 0;
      }
      goto LAB_01048d70;
    }
    goto switchD_01048d28_caseD_2;
  case 0x5f:
    return 0;
  default:
                    /* try { // try from 01048af8 to 01148b03 has its CatchHandler @ 01048e48 */
                    /* try { // try from 01048b10 to 01148b1b has its CatchHandler @ 01048e38 */
    if (((uVar13 & 0xff) == 0x20) &&
       (*(short *)(lVar19 + (ulong)*(byte *)(lVar19 + uVar8 + 0x300) * 8 + 0x20) == 0)) {
      return 0;
    }
    uVar12 = bVar7 - 0x49;
                    /* try { // try from 01048b20 to 01148b43 has its CatchHandler @ 01048e58 */
    if (((9 < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x307U) == 0)) && (2 < bVar7)) {
LAB_01048d34:
                    /* catch() { ... } // from try @ 010489e4 with catch @ 01048d34 */
                    /* catch() { ... } // from try @ 010489b8 with catch @ 01048d38 */
                    /* catch() { ... } // from try @ 0104897c with catch @ 01048d3c */
                    /* catch() { ... } // from try @ 01048950 with catch @ 01048d40 */
                    /* catch() { ... } // from try @ 010485c0 with catch @ 01048d44 */
      if (((int)uVar8 != 8) && (((uint)param_2 & 0xff) == 0xd)) {
                    /* catch() { ... } // from try @ 01048914 with catch @ 01048d48 */
                    /* catch() { ... } // from try @ 010488e8 with catch @ 01048d4c */
        if ((int)param_1[5] != 0) goto switchD_01048d28_caseD_2;
                    /* catch() { ... } // from try @ 01048c80 with catch @ 01048d50 */
        param_2 = 0;
                    /* catch() { ... } // from try @ 01048c5c with catch @ 01048d54 */
                    /* catch() { ... } // from try @ 01048a60 with catch @ 01048d58 */
        local_24[0] = 0;
                    /* catch() { ... } // from try @ 0104859c with catch @ 01048d5c */
        *(undefined1 *)((long)param_1 + 0x36) = 0x5e;
      }
                    /* catch() { ... } // from try @ 01048c30 with catch @ 01048d60 */
                    /* catch() { ... } // from try @ 0104892c with catch @ 01048d64 */
      iVar3 = FUN_010488a8(param_1,param_2);
                    /* catch() { ... } // from try @ 01048b8c with catch @ 01048d68 */
      if (iVar3 < 0) {
        return 0xffffffff;
      }
                    /* catch() { ... } // from try @ 010489fc with catch @ 01048d6c */
      if (iVar3 != 0) goto LAB_01048d70;
switchD_01048d28_caseD_1:
      if (*(char *)((long)param_1 + 0x36) != '\b') {
        return 0;
      }
LAB_01048f2c:
      if ((int)param_1[5] == 0) {
        lVar19 = *param_1;
        if ((lVar19 != 0) && (uVar8 = (ulong)*(byte *)(lVar19 + 0x305), uVar8 != 0)) {
          iVar3 = 0;
          do {
            lVar10 = lVar19 + uVar8 * 8;
                    /* try { // try from 01048f4c to 01148f5f has its CatchHandler @ 01049274 */
            uVar8 = (ulong)*(byte *)(lVar10 + 0x22);
            iVar3 = iVar3 + (uint)*(ushort *)(lVar10 + 0x20);
          } while (uVar8 != 0);
                    /* try { // try from 01048f64 to 01148f87 has its CatchHandler @ 010492a4 */
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
                    /* try { // try from 01048f9c to 01148faf has its CatchHandler @ 01049270 */
              *(char *)((long)param_1 + 0x2fd) = (char)iVar3;
            }
          }
        }
        *(undefined1 *)((long)param_1 + 0x36) = 0x5f;
                    /* try { // try from 01048fb4 to 01148fdb has its CatchHandler @ 01049290 */
        *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 1;
        return 0;
      }
switchD_01048d28_caseD_2:
      _lws_log(4," forbidding on uri sanitation\n");
                    /* try { // try from 01048c5c to 01148c73 has its CatchHandler @ 01048d54 */
      lws_return_http_status(param_1,0x193,0);
      return 0xffffffff;
    }
    if ((uVar13 & 0xff) != 0x20) {
      uVar4 = FUN_010481d4(param_1,local_24);
                    /* catch() { ... } // from try @ 010484b0 with catch @ 01048d0c */
                    /* catch() { ... } // from try @ 01048460 with catch @ 01048d10 */
                    /* catch() { ... } // from try @ 010483d8 with catch @ 01048d14 */
                    /* catch() { ... } // from try @ 01048a94 with catch @ 01048d24 */
                    /* catch() { ... } // from try @ 010488ac with catch @ 01048d28 */
      switch(uVar4) {
      case 0:
                    /* catch() { ... } // from try @ 01048a4c with catch @ 01048d2c */
        uVar8 = (ulong)*(byte *)((long)param_1 + 0x36);
                    /* catch() { ... } // from try @ 01048a20 with catch @ 01048d30 */
        param_2 = (ulong)local_24[0];
        goto LAB_01048d34;
      case 1:
        goto switchD_01048d28_caseD_1;
      case 2:
        goto switchD_01048d28_caseD_2;
      case 3:
        bVar7 = *(byte *)(lVar19 + 0xb8b);
        uVar8 = (ulong)bVar7;
                    /* catch() { ... } // from try @ 01048b20 with catch @ 01048e58 */
        if (bVar7 != 0x5b) goto LAB_01048e5c;
        break;
      default:
        goto switchD_01048d28_default;
      }
      goto LAB_01048ff8;
    }
    if ((*(short *)(lVar19 + (ulong)*(byte *)(lVar19 + 0xb8b) * 8 + 0x20) == 0) &&
       (iVar3 = FUN_010488a8(param_1,0x2f), iVar3 < 0)) {
      return 0xffffffff;
    }
    if (*(int *)((long)param_1 + 0x24) == 3) {
      puVar9 = (ushort *)(lVar19 + (ulong)*(byte *)(lVar19 + 0xb8b) * 8 + 0x20);
      if (2 < *puVar9) {
                    /* try { // try from 01048b8c to 01148b9b has its CatchHandler @ 01048d68 */
        uVar11 = *puVar9 - 1;
        uVar13 = *(int *)(lVar19 + 0xb60) - 2;
        *(int *)(lVar19 + 0xb60) = *(int *)(lVar19 + 0xb60) + -1;
        *puVar9 = uVar11;
        do {
                    /* try { // try from 01048ba4 to 01148bc7 has its CatchHandler @ 01048dcc */
          uVar11 = uVar11 - 1;
          *(uint *)(lVar19 + 0xb60) = uVar13;
          *puVar9 = uVar11;
          if (uVar11 < 2) break;
          uVar8 = (ulong)uVar13;
          uVar13 = uVar13 - 1;
                    /* try { // try from 01048bc8 to 01148bcf has its CatchHandler @ 01048d88 */
        } while (*(char *)(*(long *)(lVar19 + 0x10) + uVar8) != '/');
      }
    }
    lVar10 = *param_1;
    uVar13 = *(uint *)(lVar10 + 0xb60);
    if (uVar13 < *(uint *)(param_1[0x44] + 0xc88)) {
                    /* try { // try from 01048bf4 to 01148c03 has its CatchHandler @ 01048d7c */
      uVar12 = (uint)*(ushort *)(lVar10 + (ulong)*(byte *)(lVar10 + 0xb8b) * 8 + 0x20);
      if (uVar12 < *(uint *)(param_1 + 6)) {
                    /* try { // try from 01048c0c to 01148c2f has its CatchHandler @ 01048de0 */
        *(uint *)(lVar10 + 0xb60) = uVar13 + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0x10) + (ulong)uVar13) = 0;
      }
      else if (*(uint *)(param_1 + 6) == uVar12) {
                    /* catch() { ... } // from try @ 01048818 with catch @ 01048e00 */
                    /* catch() { ... } // from try @ 01048880 with catch @ 01048e04 */
        *(uint *)(lVar10 + 0xb60) = uVar13 + 1;
                    /* catch() { ... } // from try @ 010486f8 with catch @ 01048e08 */
                    /* catch() { ... } // from try @ 01048620 with catch @ 01048e0c */
        *(undefined1 *)(*(long *)(lVar10 + 0x10) + (ulong)uVar13) = 0;
                    /* catch() { ... } // from try @ 01048740 with catch @ 01048e10 */
                    /* catch() { ... } // from try @ 01048668 with catch @ 01048e14 */
                    /* catch() { ... } // from try @ 01048788 with catch @ 01048e18 */
                    /* catch() { ... } // from try @ 010486b0 with catch @ 01048e1c */
                    /* catch() { ... } // from try @ 010487d0 with catch @ 01048e20 */
        _lws_log(2,"header %i exceeds limit %d\n",*(undefined1 *)((long)param_1 + 0x36),
                 (int)param_1[6]);
      }
      *(undefined1 *)((long)param_1 + 0x36) = 0xf;
      goto LAB_01048fe0;
    }
                    /* catch() { ... } // from try @ 0104860c with catch @ 01048db0 */
                    /* catch() { ... } // from try @ 0104884c with catch @ 01048db4 */
    if (uVar13 != *(uint *)(param_1[0x44] + 0xc88)) {
                    /* catch() { ... } // from try @ 01048ca4 with catch @ 01048e30 */
                    /* catch() { ... } // from try @ 01048544 with catch @ 01048e34 */
                    /* catch() { ... } // from try @ 01048b10 with catch @ 01048e38 */
      _lws_log(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds");
      return 0xffffffff;
                    /* catch() { ... } // from try @ 01048af8 with catch @ 01048e48 */
    }
                    /* catch() { ... } // from try @ 01048654 with catch @ 01048db8 */
                    /* catch() { ... } // from try @ 010486e4 with catch @ 01048dbc */
    pcVar6 = "Ran out of header data space\n";
                    /* catch() { ... } // from try @ 0104869c with catch @ 01048dc0 */
    uVar5 = 1;
                    /* catch() { ... } // from try @ 0104872c with catch @ 01048dc4 */
  }
  _lws_log(uVar5,pcVar6);
switchD_01048d28_default:
  return 0xffffffff;
}

