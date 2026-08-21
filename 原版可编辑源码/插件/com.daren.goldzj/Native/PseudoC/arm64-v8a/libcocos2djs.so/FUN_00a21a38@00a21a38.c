
/* WARNING: Removing unreachable block (ram,0x00a22b8c) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00a21a38(long param_1,long *param_2,size_t *param_3,char *param_4)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  long lVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  char cVar20;
  char *pcVar21;
  long lVar22;
  undefined8 *puVar23;
  size_t sVar24;
  char *pcVar25;
  byte *pbVar26;
  time_t local_70;
  int local_64;
  
  piVar1 = (int *)((long)param_2 + 0x23c);
                    /* try { // try from 00a21a78 to 00b21a83 has its CatchHandler @ 00a21aa0 */
                    /* try { // try from 00a21a84 to 00b21abf has its CatchHandler @ 00a219f0 */
  pcVar25 = *(char **)(param_1 + 0xf8);
                    /* catch() { ... } // from try @ 00a21a78 with catch @ 00a21aa0 */
  plVar5 = (long *)(param_1 + 0x8cd8);
  piVar2 = (int *)(param_1 + 0x128);
  plVar3 = param_2 + 0x47;
  plVar6 = (long *)(param_1 + 0x8d88);
  do {
    *(char **)(param_1 + 0x100) = pcVar25;
    sVar24 = *param_3;
    pvVar12 = memchr(pcVar25,10,sVar24);
    *(void **)(param_1 + 0x108) = pvVar12;
    if (pvVar12 == (void *)0x0) {
      uVar17 = *(long *)(param_1 + 0xf0) + sVar24;
      if (uVar17 < *(ulong *)(param_1 + 0xb00)) {
        pvVar12 = *(void **)(param_1 + 0xe8);
      }
      else {
        if (0x19000 < uVar17) goto LAB_00a22a44;
        lVar22 = *(long *)(param_1 + 0xe8);
        lVar19 = *(long *)(param_1 + 0xaf8);
        uVar17 = uVar17 * 3 >> 1;
        uVar16 = *(ulong *)(param_1 + 0xb00) * 2;
        if (uVar17 <= uVar16) {
          uVar17 = uVar16;
        }
        lVar13 = (*(code *)PTR_realloc_01d1b750)(lVar19,uVar17);
        if (lVar13 == 0) goto LAB_00a22b38;
        pcVar25 = *(char **)(param_1 + 0x100);
        *(long *)(param_1 + 0xaf8) = lVar13;
        pvVar12 = (void *)(lVar13 + (lVar22 - lVar19));
        *(ulong *)(param_1 + 0xb00) = uVar17;
        *(void **)(param_1 + 0xe8) = pvVar12;
      }
      memcpy(pvVar12,pcVar25,sVar24);
      lVar19 = *(long *)(param_1 + 0xe8);
      *(size_t *)(param_1 + 0xe8) = lVar19 + sVar24;
      *(size_t *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + sVar24;
      *(undefined1 *)(lVar19 + sVar24) = 0;
      if (*(int *)(param_1 + 0xe0) != 0) {
        return 0;
      }
      if (*(ulong *)(param_1 + 0xf0) < 6) {
        return 0;
      }
      uVar18 = *(undefined8 *)(param_1 + 0xaf8);
      if ((*(byte *)(param_2[0x80] + 0x7a) >> 2 & 1) == 0) {
        puVar23 = *(undefined8 **)(param_1 + 0x5e0);
        if (puVar23 == (undefined8 *)0x0) {
          pcVar25 = "HTTP/";
        }
        else {
          pcVar25 = "HTTP/";
          do {
            pcVar21 = (char *)*puVar23;
            sVar24 = strlen(pcVar21);
            iVar11 = FUN_00a33994(pcVar21,uVar18,sVar24);
            if (iVar11 != 0) {
              return 0;
            }
            puVar23 = (undefined8 *)puVar23[1];
          } while (puVar23 != (undefined8 *)0x0);
        }
      }
      else {
        pcVar25 = "RTSP/";
      }
      iVar11 = FUN_00a33994(pcVar25,uVar18,5);
      if (iVar11 == 0) {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 2;
        return 0;
      }
      return 0;
    }
    sVar4 = (long)pvVar12 + (1 - (long)pcVar25);
    *param_3 = sVar24 - sVar4;
    sVar24 = ((long)pvVar12 + 1) - (long)pcVar25;
    uVar17 = *(long *)(param_1 + 0xf0) + sVar24;
    *(long *)(param_1 + 0xf8) = (long)pvVar12 + 1;
    if (uVar17 < *(ulong *)(param_1 + 0xb00)) {
      pvVar12 = *(void **)(param_1 + 0xe8);
    }
    else {
      if (0x19000 < uVar17) {
LAB_00a22a44:
        FUN_00a23020(param_1,"Avoided giant realloc for header (max is %d)!",0x19000);
        return 0x1b;
      }
      lVar19 = *(long *)(param_1 + 0xe8);
      lVar22 = *(long *)(param_1 + 0xaf8);
      uVar17 = uVar17 * 3 >> 1;
      uVar16 = *(ulong *)(param_1 + 0xb00) * 2;
                    /* try { // try from 00a21b80 to 00b21bdb has its CatchHandler @ 00a21b80
                       catch() { ... } // from try @ 00a21b80 with catch @ 00a21b80
                       catch() { ... } // from try @ 00a21bf8 with catch @ 00a21b80 */
      if (uVar17 <= uVar16) {
        uVar17 = uVar16;
      }
      lVar13 = (*(code *)PTR_realloc_01d1b750)(lVar22,uVar17);
      if (lVar13 == 0) {
LAB_00a22b38:
        FUN_00a23020(param_1,"Failed to alloc memory for big header!");
        return 0x1b;
      }
      *(long *)(param_1 + 0xaf8) = lVar13;
      pvVar12 = (void *)(lVar13 + (lVar19 - lVar22));
      *(ulong *)(param_1 + 0xb00) = uVar17;
      *(void **)(param_1 + 0xe8) = pvVar12;
      pcVar25 = *(char **)(param_1 + 0x100);
    }
    memcpy(pvVar12,pcVar25,sVar24);
    lVar19 = *(long *)(param_1 + 0xe8);
    *(size_t *)(param_1 + 0xe8) = lVar19 + sVar24;
    *(size_t *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + sVar24;
    *(undefined1 *)(lVar19 + sVar24) = 0;
    uVar18 = *(undefined8 *)(param_1 + 0xaf8);
                    /* try { // try from 00a21bdc to 00b21be3 has its CatchHandler @ 00a21c14 */
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0x110) = uVar18;
    if ((*(int *)(param_1 + 0xe0) == 0) && (5 < *(ulong *)(param_1 + 0xf0))) {
                    /* try { // try from 00a21bf4 to 00b21bf7 has its CatchHandler @ 00a21c18 */
                    /* try { // try from 00a21bf8 to 00b21c3b has its CatchHandler @ 00a21b80 */
      pcVar25 = "RTSP/";
      if ((*(byte *)(param_2[0x80] + 0x7a) >> 2 & 1) == 0) {
        for (puVar23 = *(undefined8 **)(param_1 + 0x5e0); puVar23 != (undefined8 *)0x0;
            puVar23 = (undefined8 *)puVar23[1]) {
          pcVar25 = (char *)*puVar23;
                    /* catch() { ... } // from try @ 00a21bdc with catch @ 00a21c14 */
          sVar24 = strlen(pcVar25);
                    /* catch() { ... } // from try @ 00a21bf4 with catch @ 00a21c18 */
          iVar11 = FUN_00a33994(pcVar25,uVar18,sVar24);
          if (iVar11 != 0) goto LAB_00a21c4c;
        }
        pcVar25 = "HTTP/";
      }
      iVar11 = FUN_00a33994(pcVar25,uVar18,5);
      if (iVar11 == 0) {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if (*param_3 != 0) {
          *(undefined4 *)(param_1 + 0xdc) = 1;
          return 0;
        }
        *(undefined4 *)(param_1 + 0xdc) = 2;
        *param_3 = sVar4;
        return 0;
      }
    }
LAB_00a21c4c:
    pcVar25 = *(char **)(param_1 + 0x110);
    if (*pcVar25 == '\n') {
LAB_00a21c90:
      *(char **)(param_1 + 0x110) = pcVar25 + 1;
LAB_00a21c98:
      iVar11 = *piVar2;
      if (iVar11 - 100U < 100) {
        if (iVar11 == 0x65) {
          if (*(int *)(param_1 + 0x144) == 1) {
            FUN_00a22d58(param_1,"Received 101\n");
            *(undefined4 *)(param_1 + 0x144) = 2;
            *(undefined1 *)(param_1 + 0xd8) = 1;
            *(undefined4 *)(param_1 + 0xe0) = 0;
            return 1;
          }
          *(undefined1 *)(param_1 + 0xd8) = 0;
          goto LAB_00a21dd8;
        }
        if (iVar11 == 100) {
                    /* try { // try from 00a21cb8 to 00b21cbb has its CatchHandler @ 00a21cf8 */
          *(undefined1 *)(param_1 + 0xd8) = 1;
          *(undefined4 *)(param_1 + 0xe0) = 0;
          if (*(int *)(param_1 + 0x140) == 0) goto LAB_00a21dd8;
          *(undefined4 *)(param_1 + 0x140) = 0;
          *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
          cVar20 = *(char *)((long)param_2 + 0x3b9);
          goto joined_r0x00a21ddc;
        }
        *(undefined1 *)(param_1 + 0xd8) = 1;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (*(char *)((long)param_2 + 0x3b9) != '\0') goto LAB_00a21de0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if ((*(long *)(param_1 + 0x78) == -1) && (*(char *)(param_1 + 0x210) == '\0')) {
          if (*(char *)((long)param_2 + 0x3b9) == '\0') {
            if ((int)*plVar3 != 0xb) goto LAB_00a21e3c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21d48 with catch @ 00a21d90
                        */
            if (((*(byte *)(param_2[0x80] + 0x7a) >> 2 & 1) == 0) &&
               (*(int *)(param_1 + 0x430) != 5)) {
              FUN_00a22d58(param_1,"no chunk, no close, no size. Assume close to signal end\n");
              FUN_00a11300(param_2,2);
              cVar20 = *(char *)((long)param_2 + 0x3b9);
              goto joined_r0x00a21ddc;
            }
            goto LAB_00a21dd8;
          }
        }
        else {
LAB_00a21dd8:
          cVar20 = *(char *)((long)param_2 + 0x3b9);
joined_r0x00a21ddc:
          if (cVar20 == '\0') goto LAB_00a21e3c;
        }
LAB_00a21de0:
        if (*piVar2 == 0x197) {
          iVar11 = (int)param_2[0x9a];
        }
        else {
          if (*piVar2 != 0x191) goto LAB_00a21e3c;
          iVar11 = (int)param_2[0x96];
        }
        if (iVar11 == 2) {
          FUN_00a22d58(param_1,"Connection closure while negotiating auth (HTTP 1.0?)\n");
          *(undefined1 *)(param_1 + 0x8c38) = 1;
                    /* try { // try from 00a21e28 to 00b21ebf has its CatchHandler @ 00a21e28
                       catch() { ... } // from try @ 00a21e28 with catch @ 00a21e28
                       catch() { ... } // from try @ 00a21ec4 with catch @ 00a21e28 */
        }
      }
LAB_00a21e3c:
      lVar19 = *param_2;
      iVar11 = *(int *)(lVar19 + 0x128);
      if ((399 < iVar11) && (*(char *)(lVar19 + 0x618) != '\0')) {
        if (iVar11 == 0x197) {
          cVar20 = *(char *)((long)param_2 + 0x3c1);
joined_r0x00a21e74:
          if ((cVar20 != '\0') && (*(char *)(lVar19 + 0x8c38) == '\0')) goto LAB_00a21e84;
        }
        else if (iVar11 == 0x191) {
          cVar20 = (char)param_2[0x78];
          goto joined_r0x00a21e74;
        }
        iVar11 = *(int *)(param_1 + 0x128);
LAB_00a229e8:
        FUN_00a23020(param_1,"The requested URL returned error: %d",iVar11);
        return 0x16;
      }
LAB_00a21e84:
      lVar19 = *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0xaf8);
      uVar14 = 2;
      if (*(char *)(param_1 + 0x61d) != '\0') {
        uVar14 = 3;
      }
      iVar11 = FUN_00a23808(param_2,uVar14,*(long *)(param_1 + 0xaf8),lVar19);
      if (iVar11 != 0) {
        return iVar11;
      }
                    /* try { // try from 00a21ec0 to 00b21ec3 has its CatchHandler @ 00a21f80 */
      *plVar6 = *plVar6 + lVar19;
                    /* try { // try from 00a21ec4 to 00b21f93 has its CatchHandler @ 00a21e28 */
      lVar22 = *(long *)(param_1 + 0xa8) + lVar19;
      *(long *)(param_1 + 0xa8) = lVar22;
      if (99 < *(int *)(param_1 + 0x128) - 100U) {
        lVar22 = 0;
      }
      *(long *)(param_1 + 0xb0) = lVar22;
      iVar11 = FUN_00a2050c(param_2);
      if (iVar11 != 0) {
        return iVar11;
      }
      if (299 < *piVar2) {
        if ((*(char *)((long)param_2 + 0x3ca) == '\0') && (*(char *)((long)param_2 + 0x3b9) == '\0')
           ) {
          if (*(char *)((long)param_2 + 0x3cb) == '\0') {
            if ((2 < *(int *)(param_1 + 0x430) - 2U) || (*(char *)(param_1 + 0x1e8) != '\0'))
            goto LAB_00a21f0c;
            if (*(char *)(param_1 + 0x619) == '\0') {
              FUN_00a22d58(param_1,"HTTP error before end of send, stop sending\n");
              FUN_00a11300(param_2,2);
              *(undefined1 *)(param_1 + 0x1e8) = 1;
              *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffd;
              if (*(char *)(param_1 + 0x8ca8) == '\0') goto LAB_00a21f0c;
              *(undefined4 *)(param_1 + 0x140) = 3;
              cVar20 = *(char *)((long)param_2 + 0x3cb);
            }
            else {
              FUN_00a22d58(param_1,"HTTP error before end of send, keep sending\n");
              if (*(int *)(param_1 + 0x140) == 0) goto LAB_00a21f0c;
              *(undefined4 *)(param_1 + 0x140) = 0;
              *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
              cVar20 = *(char *)((long)param_2 + 0x3cb);
            }
            goto joined_r0x00a21fd8;
          }
        }
        else {
LAB_00a21f0c:
          cVar20 = *(char *)((long)param_2 + 0x3cb);
joined_r0x00a21fd8:
          if (cVar20 == '\0') goto LAB_00a21f30;
        }
        FUN_00a22d58(param_1,"Keep sending data to get tossed away!\n");
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
      }
LAB_00a21f30:
      if (*(char *)(param_1 + 0xd8) != '\0') goto LAB_00a222e8;
      if ((*(char *)(param_1 + 0x620) == '\0') &&
         ((((*(byte *)(param_2[0x80] + 0x7a) >> 2 & 1) == 0 || (*(int *)(param_1 + 0x87c) != 2)) ||
          (-1 < *(long *)(param_1 + 0x78))))) {
        if (*(char *)(param_1 + 0x210) == '\0') goto LAB_00a22a08;
        *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
LAB_00a22a28:
        if (*param_4 == '\0') goto LAB_00a22bb4;
      }
      else {
        *param_4 = '\x01';
LAB_00a22a08:
        if (*(long *)(param_1 + 0x78) == -1) {
          if (*(long *)(param_1 + 0x88) == 0) goto LAB_00a22ba0;
          goto LAB_00a22a28;
        }
        FUN_00a1b4c4(param_1);
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x78);
        if (*(long *)(param_1 + 0x78) != 0) goto LAB_00a22a28;
LAB_00a22ba0:
        *param_4 = '\x01';
      }
      *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe;
LAB_00a22bb4:
      if (*(char *)(param_1 + 0x628) != '\0') {
        FUN_00a22e78(param_1,1,*(undefined8 *)(param_1 + 0x100),lVar19,param_2);
        return 0;
      }
      return 0;
    }
    if (*pcVar25 == '\r') {
      *(char **)(param_1 + 0x110) = pcVar25 + 1;
      pcVar21 = pcVar25 + 1;
      pcVar25 = pcVar25 + 1;
      if (*pcVar21 == '\n') goto LAB_00a21c90;
      goto LAB_00a21c98;
    }
    iVar11 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xe0) = iVar11 + 1;
    if (iVar11 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21cb8 with catch @ 00a21cf8
                        */
      if ((*(uint *)(param_2[0x80] + 0x78) & 3) == 0) {
        if (((*(uint *)(param_2[0x80] + 0x78) >> 0x12 & 1) == 0) ||
           (iVar11 = sscanf(pcVar25," RTSP/%d.%d %3d",&local_64,piVar1,piVar2), iVar11 != 3))
        goto LAB_00a22c40;
        *piVar1 = *piVar1 + local_64 * 10;
        *(int *)plVar3 = 0xb;
                    /* catch() { ... } // from try @ 00a21ec0 with catch @ 00a21f80 */
      }
      else {
        iVar11 = sscanf(pcVar25," HTTP/%d.%d %d",&local_70,plVar3,piVar2);
        if ((iVar11 == 1) && ((int)local_70 == 2)) {
          iVar11 = sscanf(*(char **)(param_1 + 0x110)," HTTP/2 %d",piVar2);
                    /* try { // try from 00a21d48 to 00b21d4b has its CatchHandler @ 00a21d90 */
          if (iVar11 != 1) {
LAB_00a22020:
            iVar11 = sscanf(*(char **)(param_1 + 0x110)," HTTP %3d",piVar2);
            *(int *)plVar3 = 10;
            if (iVar11 == 0) {
              uVar18 = *(undefined8 *)(param_1 + 0x110);
              for (puVar23 = *(undefined8 **)(param_1 + 0x5e0); puVar23 != (undefined8 *)0x0;
                  puVar23 = (undefined8 *)puVar23[1]) {
                pcVar25 = (char *)*puVar23;
                sVar24 = strlen(pcVar25);
                iVar11 = FUN_00a33994(pcVar25,uVar18,sVar24);
                if (iVar11 != 0) goto LAB_00a2208c;
              }
              iVar11 = FUN_00a33994("HTTP/",uVar18,5);
              if (iVar11 == 0) {
LAB_00a22c40:
                *(undefined1 *)(param_1 + 0xd8) = 0;
                return 0;
              }
LAB_00a2208c:
              *piVar2 = 200;
              *(int *)plVar3 = 10;
            }
            goto LAB_00a220a0;
          }
          *(int *)plVar3 = 0;
          iVar11 = 0;
        }
        else {
          if (iVar11 != 3) goto LAB_00a22020;
          iVar11 = (int)*plVar3;
        }
        iVar11 = iVar11 + (int)local_70 * 10;
        *(int *)plVar3 = iVar11;
        if ((iVar11 != 0x14) && (*(int *)(param_1 + 0x144) == 2)) {
          FUN_00a22d58(param_1,"Lying server, not serving HTTP/2\n");
        }
      }
LAB_00a220a0:
      iVar11 = *piVar2;
      *(int *)(param_1 + 0x8d68) = iVar11;
      iVar10 = (int)*plVar3;
      *(int *)(param_1 + 0x8d70) = iVar10;
      iVar8 = *(int *)(param_1 + 0x8ca4);
      if ((iVar8 == 0) || (iVar10 < iVar8)) {
        *(int *)(param_1 + 0x8ca4) = iVar10;
      }
      if ((*(char *)(param_1 + 0x618) != '\0') && (399 < iVar11)) {
                    /* try { // try from 00a220e4 to 00b2225f has its CatchHandler @ 00a220e4
                       catch() { ... } // from try @ 00a220e4 with catch @ 00a220e4
                       catch() { ... } // from try @ 00a22264 with catch @ 00a220e4
                       catch() { ... } // from try @ 00a2231c with catch @ 00a220e4 */
        if (iVar11 == 0x197) {
          cVar20 = *(char *)((long)param_2 + 0x3c1);
joined_r0x00a22104:
          if (cVar20 != '\0') goto LAB_00a22128;
        }
        else if (iVar11 == 0x191) {
          cVar20 = (char)param_2[0x78];
          goto joined_r0x00a22104;
        }
        if (((*plVar5 == 0) || (*(int *)(param_1 + 0x430) != 1)) || (iVar11 != 0x1a0)) {
          pcVar25 = *(char **)(param_1 + 0x110);
          iVar10 = strncmp(pcVar25,"HTTP",4);
          if (((iVar10 == 0) && (pcVar25 = strchr(pcVar25,0x20), pcVar25 != (char *)0x0)) &&
             (pcVar25 = pcVar25 + 1, *pcVar25 != '\0')) {
            cVar20 = '\r';
            pcVar21 = strchr(pcVar25,0xd);
            if (pcVar21 == (char *)0x0) {
              cVar20 = '\n';
              pcVar21 = strchr(pcVar25,10);
              if (pcVar21 == (char *)0x0) goto LAB_00a229e8;
            }
            *pcVar21 = '\0';
            FUN_00a23020(param_1,"The requested URL returned error: %s",pcVar25);
            *pcVar21 = cVar20;
            return 0x16;
          }
          goto LAB_00a229e8;
        }
      }
LAB_00a22128:
      if (iVar10 == 0x14) {
LAB_00a2216c:
        *(undefined4 *)param_2[0xe3] = 2;
      }
      else if (iVar10 == 10) {
        FUN_00a22d58(param_1,"HTTP 1.0, assume close after body\n");
        FUN_00a11300(param_2,1);
      }
      else {
        if ((*(int *)(param_1 + 0x144) == 1) && (iVar11 == 0x65)) goto LAB_00a2216c;
        if ((((10 < iVar10) && (*(char *)((long)param_2 + 0x3b9) == '\0')) && (param_2[0xe3] != 0))
           && (uVar17 = FUN_00a17428(param_1,param_2), (uVar17 & 1) == 0)) {
          *(undefined4 *)param_2[0xe3] = 1;
        }
      }
      if ((*piVar2 == 0x130) || (*piVar2 == 0xcc)) {
        if (*(int *)(param_1 + 0x420) != 0) {
          *(undefined1 *)(param_1 + 0x8d80) = 1;
        }
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined1 *)(param_1 + 0x1ea) = 1;
      }
    }
                    /* try { // try from 00a22310 to 00b2231b has its CatchHandler @ 00a2231c */
    if (((*(char *)(param_1 + 0x1ea) == '\0') && (*(char *)(param_1 + 0x63f) == '\0')) &&
       (iVar11 = FUN_00a33994("Content-Length:",*(undefined8 *)(param_1 + 0x110),0xf), iVar11 != 0))
    {
                    /* catch() { ... } // from try @ 00a22260 with catch @ 00a2231c
                       catch() { ... } // from try @ 00a22310 with catch @ 00a2231c
                       try { // try from 00a2231c to 00b22333 has its CatchHandler @ 00a220e4 */
      lVar19 = strtol((char *)(*(long *)(param_1 + 0x110) + 0xf),(char **)0x0,10);
                    /* try { // try from 00a22334 to 00b22463 has its CatchHandler @ 00a22334
                       catch(type#1 @ 00000000) { ... } // from try @ 00a22334 with catch @ 00a22334
                       catch(type#1 @ 00000000) { ... } // from try @ 00a224c0 with catch @ 00a22334
                       catch(type#1 @ 00000000) { ... } // from try @ 00a225cc with catch @ 00a22334
                        */
      if ((*(long *)(param_1 + 0x5f0) != 0) && (*(long *)(param_1 + 0x5f0) < lVar19)) {
        FUN_00a23020(param_1,"Maximum file size exceeded");
        return 0x3f;
      }
      if (lVar19 < 0) {
        FUN_00a11300(param_2,2);
        FUN_00a22d58(param_1,"Negative content-length: %ld, closing after transfer\n",lVar19);
      }
      else {
        *(long *)(param_1 + 0x78) = lVar19;
        *(long *)(param_1 + 0x88) = lVar19;
        FUN_00a1b4c4(param_1,lVar19);
      }
    }
    else {
      iVar11 = FUN_00a33994("Content-Type:",*(undefined8 *)(param_1 + 0x110),0xd);
      if (iVar11 == 0) {
        iVar10 = FUN_00a33994("Server:",*(undefined8 *)(param_1 + 0x110),7);
        iVar11 = (int)*plVar3;
        if (iVar10 == 0) {
          if (iVar11 == 10) {
            if (*(char *)((long)param_2 + 0x3be) != '\0') {
              uVar17 = FUN_00a21648(*(undefined8 *)(param_1 + 0x110),"Proxy-Connection:",
                                    "keep-alive");
              if ((uVar17 & 1) != 0) {
                FUN_00a11300(param_2,0);
                FUN_00a22d58(param_1,"HTTP/1.0 proxy connection set to keep alive!\n");
                goto LAB_00a22280;
              }
              iVar11 = (int)*plVar3;
              goto LAB_00a22404;
            }
LAB_00a2245c:
                    /* try { // try from 00a22464 to 00b22497 has its CatchHandler @ 00a225b0 */
            uVar17 = FUN_00a21648(*(undefined8 *)(param_1 + 0x110),"Connection:","keep-alive");
            if ((uVar17 & 1) != 0) {
              FUN_00a11300(param_2,0);
              FUN_00a22d58(param_1,"HTTP/1.0 connection set to keep alive!\n");
              goto LAB_00a22280;
            }
          }
          else {
LAB_00a22404:
            if (iVar11 == 0xb) {
              if (*(char *)((long)param_2 + 0x3be) != '\0') {
                uVar17 = FUN_00a21648(*(undefined8 *)(param_1 + 0x110),"Proxy-Connection:","close");
                if ((uVar17 & 1) != 0) {
                  FUN_00a11300(param_2,1);
                  FUN_00a22d58(param_1,"HTTP/1.1 proxy connection set close!\n");
                  goto LAB_00a22280;
                }
                iVar11 = (int)*plVar3;
                goto LAB_00a22454;
              }
            }
            else {
LAB_00a22454:
              if (iVar11 == 10) goto LAB_00a2245c;
            }
          }
                    /* try { // try from 00a224a4 to 00b224af has its CatchHandler @ 00a225ac */
          uVar17 = FUN_00a21648(*(undefined8 *)(param_1 + 0x110),"Connection:","close");
          if ((uVar17 & 1) == 0) {
            iVar11 = FUN_00a33994("Transfer-Encoding:",*(undefined8 *)(param_1 + 0x110),0x12);
            if (iVar11 != 0) {
              pbVar26 = (byte *)(*(long *)(param_1 + 0x110) + 0x12);
              bVar9 = *pbVar26;
              do {
                uVar15 = (uint)bVar9;
                if (bVar9 != 0) {
                  do {
                    iVar11 = isspace(uVar15);
                    if ((uVar15 != 0x2c) && (iVar11 == 0)) break;
                    pbVar26 = pbVar26 + 1;
                    uVar15 = (uint)*pbVar26;
                  } while (uVar15 != 0);
                }
                iVar11 = FUN_00a33994("chunked",pbVar26,7);
                if (iVar11 != 0) {
                  *(undefined1 *)(param_1 + 0x210) = 1;
                  FUN_00a33ae4(param_2);
                  pbVar26 = pbVar26 + 7;
                }
                if (*(int *)(param_1 + 0x148) != 0) goto LAB_00a22280;
                iVar11 = FUN_00a33994("identity",pbVar26,8);
                if (iVar11 == 0) {
                  iVar11 = FUN_00a33994("deflate",pbVar26,7);
                  if (iVar11 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a224b4 with catch @ 00a225a8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a224a4 with catch @ 00a225ac
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a22464 with catch @ 00a225b0
                        */
                    iVar11 = FUN_00a33994("gzip",pbVar26,4);
                    if (iVar11 == 0) {
                    /* try { // try from 00a225c8 to 00b225cb has its CatchHandler @ 00a22660 */
                    /* try { // try from 00a225cc to 00b22673 has its CatchHandler @ 00a22334 */
                      iVar11 = FUN_00a33994("x-gzip",pbVar26,6);
                      if (iVar11 == 0) goto LAB_00a22280;
                      uVar14 = 2;
                      lVar19 = 6;
                    }
                    else {
                      uVar14 = 2;
                      lVar19 = 4;
                    }
                  }
                  else {
                    uVar14 = 1;
                    lVar19 = 7;
                  }
                }
                else {
                  uVar14 = 0;
                  lVar19 = 8;
                }
                *(undefined4 *)(param_1 + 0x148) = uVar14;
                pbVar26 = pbVar26 + lVar19;
                bVar9 = *pbVar26;
              } while( true );
            }
            iVar11 = FUN_00a33994("Content-Encoding:",*(long *)(param_1 + 0x110),0x11);
            if ((iVar11 == 0) || (*(long *)(param_1 + 0x6b8) == 0)) {
              iVar11 = FUN_00a33994("Content-Range:",*(undefined8 *)(param_1 + 0x110),0xe);
              if (iVar11 == 0) {
                if ((*(long *)(param_1 + 0x938) == 0) ||
                   (iVar11 = FUN_00a33994("Set-Cookie:",*(undefined8 *)(param_1 + 0x110),0xb),
                   iVar11 == 0)) {
                  iVar11 = FUN_00a33994("Last-Modified:",*(undefined8 *)(param_1 + 0x110),0xe);
                    /* try { // try from 00a227c4 to 00b227d3 has its CatchHandler @ 00a2286c */
                    /* try { // try from 00a227d4 to 00b2285f has its CatchHandler @ 00a22674 */
                  if ((iVar11 == 0) ||
                     ((*(int *)(param_1 + 0x420) == 0 && (*(char *)(param_1 + 0x611) == '\0')))) {
                    iVar11 = FUN_00a33994("WWW-Authenticate:",*(undefined8 *)(param_1 + 0x110),0x11)
                    ;
                    if ((iVar11 == 0) || (*piVar2 != 0x191)) {
                      iVar11 = FUN_00a33994("Proxy-authenticate:",*(undefined8 *)(param_1 + 0x110),
                                            0x13);
                      if ((iVar11 != 0) && (*(int *)(param_1 + 0x128) == 0x197)) {
                        iVar11 = 0x197;
                        goto LAB_00a2289c;
                      }
                    /* try { // try from 00a228fc to 00b228ff has its CatchHandler @ 00a22988 */
                    /* try { // try from 00a22900 to 00b2299b has its CatchHandler @ 00a228a4 */
                      if (((*(int *)(param_1 + 0x128) - 300U < 100) &&
                          (iVar11 = FUN_00a33994("Location:",*(undefined8 *)(param_1 + 0x110),9),
                          iVar11 != 0)) && (*(long *)(param_1 + 0x1f0) == 0)) {
                        pcVar25 = (char *)FUN_00a20424(*(undefined8 *)(param_1 + 0x110));
                        if (pcVar25 == (char *)0x0) {
                          return 0x1b;
                        }
                        if (*pcVar25 == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a228fc with catch @ 00a22988
                        */
                          (*(code *)PTR_free_01d1b748)();
                        }
                        else {
                          *(char **)(param_1 + 0x1f0) = pcVar25;
                          if (*(char *)(param_1 + 0x61a) != '\0') {
                            lVar19 = (*(code *)PTR_strdup_01d1b758)();
                            *(long *)(param_1 + 0x1f8) = lVar19;
                            if (lVar19 == 0) {
                              return 0x1b;
                            }
                            iVar11 = FUN_00a20808(param_2);
                            goto joined_r0x00a2297c;
                          }
                        }
                        goto LAB_00a22280;
                      }
                      if ((*(byte *)(param_2[0x80] + 0x7a) >> 2 & 1) == 0) goto LAB_00a22280;
                      iVar11 = FUN_00a3f404(param_2,*(undefined8 *)(param_1 + 0x110));
                    }
                    else {
                      iVar11 = 0x191;
LAB_00a2289c:
                      lVar19 = FUN_00a20424(*(undefined8 *)(param_1 + 0x110));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a22900 with catch @ 00a228a4
                        */
                      if (lVar19 == 0) {
                        return 0x1b;
                      }
                      iVar11 = FUN_00a20da8(param_2,iVar11 == 0x197,lVar19);
                      (*(code *)PTR_free_01d1b748)(lVar19);
                    }
joined_r0x00a2297c:
                    if (iVar11 != 0) {
                      return iVar11;
                    }
                  }
                  else {
                    local_70 = time((time_t *)0x0);
                    uVar18 = FUN_00a358b8(*(long *)(param_1 + 0x110) + 0xe,&local_70);
                    *(undefined8 *)(param_1 + 0x1c0) = uVar18;
                    if (*(char *)(param_1 + 0x611) != '\0') {
                      *(undefined8 *)(param_1 + 0x8d78) = uVar18;
                    }
                  }
                }
                else {
                  FUN_00a3557c(param_1,2,2);
                  plVar7 = param_2 + 0x8b;
                  if (param_2[0x8b] == 0) {
                    plVar7 = param_2 + 0x18;
                  }
                  FUN_00a1bcd8(param_1,*(undefined8 *)(param_1 + 0x938),1,
                               *(long *)(param_1 + 0x110) + 0xb,*plVar7,
                               *(undefined8 *)(param_1 + 0x8cc0));
                  FUN_00a355d4(param_1,2);
                }
              }
              else {
                pbVar26 = (byte *)(*(long *)(param_1 + 0x110) + 0xe);
                uVar15 = (uint)*pbVar26;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a225c8 with catch @ 00a22660
                        */
                if (*pbVar26 != 0) {
                  do {
                    /* try { // try from 00a22674 to 00b227c3 has its CatchHandler @ 00a22674
                       catch() { ... } // from try @ 00a22674 with catch @ 00a22674
                       catch() { ... } // from try @ 00a227d4 with catch @ 00a22674
                       catch() { ... } // from try @ 00a22864 with catch @ 00a22674 */
                    if ((uVar15 == 0x2a) || (uVar15 - 0x30 < 10)) break;
                    pbVar26 = pbVar26 + 1;
                    uVar15 = (uint)*pbVar26;
                  } while (uVar15 != 0);
                }
                if (uVar15 - 0x30 < 10) {
                  lVar19 = strtol((char *)pbVar26,(char **)0x0,10);
                  *(long *)(param_1 + 0x120) = lVar19;
                  if (*plVar5 == lVar19) {
                    *(undefined1 *)(param_1 + 0x118) = 1;
                  }
                }
                else {
                  *plVar5 = 0;
                }
              }
            }
            else {
              pbVar26 = (byte *)(*(long *)(param_1 + 0x110) + 0x11);
              uVar15 = (uint)*pbVar26;
              if (*pbVar26 != 0) {
                do {
                  iVar11 = isspace(uVar15);
                  if (iVar11 == 0) break;
                  pbVar26 = pbVar26 + 1;
                  uVar15 = (uint)*pbVar26;
                } while (uVar15 != 0);
              }
              iVar11 = FUN_00a33994("identity",pbVar26,8);
              if (iVar11 == 0) {
                iVar11 = FUN_00a33994("deflate",pbVar26,7);
                if (iVar11 == 0) {
                  iVar11 = FUN_00a33994("gzip",pbVar26,4);
                    /* try { // try from 00a22860 to 00b22863 has its CatchHandler @ 00a22868 */
                    /* try { // try from 00a22864 to 00b228a3 has its CatchHandler @ 00a22674 */
                  if ((iVar11 != 0) || (iVar11 = FUN_00a33994("x-gzip",pbVar26,6), iVar11 != 0)) {
                    /* catch() { ... } // from try @ 00a22860 with catch @ 00a22868 */
                    /* catch() { ... } // from try @ 00a227c4 with catch @ 00a2286c */
                    *(undefined4 *)(param_1 + 0x148) = 2;
                  }
                }
                else {
                  *(undefined4 *)(param_1 + 0x148) = 1;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x148) = 0;
              }
            }
          }
          else {
                    /* try { // try from 00a224b4 to 00b224bf has its CatchHandler @ 00a225a8 */
            FUN_00a11300(param_2,2);
                    /* try { // try from 00a224c0 to 00b225c7 has its CatchHandler @ 00a22334 */
          }
        }
        else if (iVar11 < 0x14) {
          pcVar25 = (char *)FUN_00a20424(*(undefined8 *)(param_1 + 0x110));
          if ((((int *)param_2[0xe3] != (int *)0x0) && (*(int *)param_2[0xe3] == 1)) &&
             (uVar17 = FUN_00a1763c(param_1,pcVar25), (uVar17 & 1) != 0)) {
                    /* try { // try from 00a22260 to 00b22263 has its CatchHandler @ 00a2231c */
                    /* try { // try from 00a22264 to 00b2230f has its CatchHandler @ 00a220e4 */
            *(undefined4 *)param_2[0xe3] = 0xffffffff;
          }
          goto LAB_00a22278;
        }
      }
      else {
        pcVar25 = (char *)FUN_00a20424(*(undefined8 *)(param_1 + 0x110));
        if (pcVar25 == (char *)0x0) {
          return 0x1b;
        }
        if (*pcVar25 == '\0') {
LAB_00a22278:
          (*(code *)PTR_free_01d1b748)(pcVar25);
        }
        else {
          (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8db0));
          *(undefined8 *)(param_1 + 0x8db0) = pcVar25;
        }
      }
    }
LAB_00a22280:
    uVar14 = 2;
    if (*(char *)(param_1 + 0x61d) != '\0') {
      uVar14 = 3;
    }
    if (*(char *)(param_1 + 0x628) != '\0') {
      FUN_00a22e78(param_1,1,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xf0),
                   param_2);
    }
    iVar11 = FUN_00a23808(param_2,uVar14,*(undefined8 *)(param_1 + 0x110),
                          *(undefined8 *)(param_1 + 0xf0));
    if (iVar11 != 0) {
      return iVar11;
    }
    *plVar6 = *plVar6 + *(long *)(param_1 + 0xf0);
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xf0);
LAB_00a222e8:
    pcVar25 = *(char **)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xaf8);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (*pcVar25 == '\0') {
      return 0;
    }
  } while( true );
}

