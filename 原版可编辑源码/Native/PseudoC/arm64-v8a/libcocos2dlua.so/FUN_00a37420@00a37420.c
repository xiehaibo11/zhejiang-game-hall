
/* WARNING: Removing unreachable block (ram,0x00a38574) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00a37420(long param_1,long *param_2,size_t *param_3,char *param_4)

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
                    /* try { // try from 00a37470 to 00b376bf has its CatchHandler @ 00a37470
                       catch() { ... } // from try @ 00a37470 with catch @ 00a37470
                       catch() { ... } // from try @ 00a37740 with catch @ 00a37470 */
  pcVar25 = *(char **)(param_1 + 0xf8);
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
        if (0x19000 < uVar17) goto LAB_00a3842c;
        lVar22 = *(long *)(param_1 + 0xe8);
        lVar19 = *(long *)(param_1 + 0xaf8);
        uVar17 = uVar17 * 3 >> 1;
        uVar16 = *(ulong *)(param_1 + 0xb00) * 2;
        if (uVar17 <= uVar16) {
          uVar17 = uVar16;
        }
        lVar13 = (*(code *)PTR_realloc_01769a08)(lVar19,uVar17);
        if (lVar13 == 0) goto LAB_00a38520;
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
            iVar11 = FUN_00a4a37c(pcVar21,uVar18,sVar24);
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
      iVar11 = FUN_00a4a37c(pcVar25,uVar18,5);
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
LAB_00a3842c:
        FUN_00a38a08(param_1,"Avoided giant realloc for header (max is %d)!",0x19000);
        return 0x1b;
      }
      lVar19 = *(long *)(param_1 + 0xe8);
      lVar22 = *(long *)(param_1 + 0xaf8);
      uVar17 = uVar17 * 3 >> 1;
      uVar16 = *(ulong *)(param_1 + 0xb00) * 2;
      if (uVar17 <= uVar16) {
        uVar17 = uVar16;
      }
      lVar13 = (*(code *)PTR_realloc_01769a08)(lVar22,uVar17);
      if (lVar13 == 0) {
LAB_00a38520:
        FUN_00a38a08(param_1,"Failed to alloc memory for big header!");
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
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0x110) = uVar18;
    if ((*(int *)(param_1 + 0xe0) == 0) && (5 < *(ulong *)(param_1 + 0xf0))) {
      pcVar25 = "RTSP/";
      if ((*(byte *)(param_2[0x80] + 0x7a) >> 2 & 1) == 0) {
        for (puVar23 = *(undefined8 **)(param_1 + 0x5e0); puVar23 != (undefined8 *)0x0;
            puVar23 = (undefined8 *)puVar23[1]) {
          pcVar25 = (char *)*puVar23;
          sVar24 = strlen(pcVar25);
          iVar11 = FUN_00a4a37c(pcVar25,uVar18,sVar24);
          if (iVar11 != 0) goto LAB_00a37634;
        }
        pcVar25 = "HTTP/";
      }
      iVar11 = FUN_00a4a37c(pcVar25,uVar18,5);
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
LAB_00a37634:
    pcVar25 = *(char **)(param_1 + 0x110);
    if (*pcVar25 == '\n') {
LAB_00a37678:
      *(char **)(param_1 + 0x110) = pcVar25 + 1;
LAB_00a37680:
      iVar11 = *piVar2;
      if (iVar11 - 100U < 100) {
        if (iVar11 == 0x65) {
          if (*(int *)(param_1 + 0x144) == 1) {
            FUN_00a38740(param_1,"Received 101\n");
            *(undefined4 *)(param_1 + 0x144) = 2;
            *(undefined1 *)(param_1 + 0xd8) = 1;
            *(undefined4 *)(param_1 + 0xe0) = 0;
            return 1;
          }
          *(undefined1 *)(param_1 + 0xd8) = 0;
          goto LAB_00a377c0;
        }
        if (iVar11 == 100) {
          *(undefined1 *)(param_1 + 0xd8) = 1;
          *(undefined4 *)(param_1 + 0xe0) = 0;
          if (*(int *)(param_1 + 0x140) == 0) goto LAB_00a377c0;
          *(undefined4 *)(param_1 + 0x140) = 0;
          *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
                    /* try { // try from 00a376c0 to 00b376f3 has its CatchHandler @ 00a377c0 */
          cVar20 = *(char *)((long)param_2 + 0x3b9);
          goto joined_r0x00a377c4;
        }
        *(undefined1 *)(param_1 + 0xd8) = 1;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (*(char *)((long)param_2 + 0x3b9) != '\0') goto LAB_00a377c8;
      }
      else {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if ((*(long *)(param_1 + 0x78) == -1) && (*(char *)(param_1 + 0x210) == '\0')) {
          if (*(char *)((long)param_2 + 0x3b9) == '\0') {
            if ((int)*plVar3 != 0xb) goto LAB_00a37824;
            if (((*(byte *)(param_2[0x80] + 0x7a) >> 2 & 1) == 0) &&
               (*(int *)(param_1 + 0x430) != 5)) {
                    /* catch() { ... } // from try @ 00a376f4 with catch @ 00a3778c */
                    /* catch() { ... } // from try @ 00a3770c with catch @ 00a37790 */
              FUN_00a38740(param_1,"no chunk, no close, no size. Assume close to signal end\n");
              FUN_00a26ce8(param_2,2);
              cVar20 = *(char *)((long)param_2 + 0x3b9);
              goto joined_r0x00a377c4;
            }
            goto LAB_00a377c0;
          }
        }
        else {
LAB_00a377c0:
                    /* catch() { ... } // from try @ 00a376c0 with catch @ 00a377c0 */
          cVar20 = *(char *)((long)param_2 + 0x3b9);
joined_r0x00a377c4:
          if (cVar20 == '\0') goto LAB_00a37824;
        }
LAB_00a377c8:
        if (*piVar2 == 0x197) {
          iVar11 = (int)param_2[0x9a];
        }
        else {
          if (*piVar2 != 0x191) goto LAB_00a37824;
                    /* try { // try from 00a377dc to 00b3782b has its CatchHandler @ 00a377dc
                       catch() { ... } // from try @ 00a377dc with catch @ 00a377dc
                       catch() { ... } // from try @ 00a3787c with catch @ 00a377dc
                       catch() { ... } // from try @ 00a378fc with catch @ 00a377dc */
          iVar11 = (int)param_2[0x96];
        }
        if (iVar11 == 2) {
          FUN_00a38740(param_1,"Connection closure while negotiating auth (HTTP 1.0?)\n");
          *(undefined1 *)(param_1 + 0x8c38) = 1;
        }
      }
LAB_00a37824:
      lVar19 = *param_2;
      iVar11 = *(int *)(lVar19 + 0x128);
                    /* try { // try from 00a3782c to 00b37843 has its CatchHandler @ 00a37914 */
      if ((399 < iVar11) && (*(char *)(lVar19 + 0x618) != '\0')) {
        if (iVar11 == 0x197) {
          cVar20 = *(char *)((long)param_2 + 0x3c1);
joined_r0x00a3785c:
          if ((cVar20 != '\0') && (*(char *)(lVar19 + 0x8c38) == '\0')) goto LAB_00a3786c;
        }
        else if (iVar11 == 0x191) {
          cVar20 = (char)param_2[0x78];
                    /* try { // try from 00a37850 to 00b3787b has its CatchHandler @ 00a37910 */
          goto joined_r0x00a3785c;
        }
        iVar11 = *(int *)(param_1 + 0x128);
LAB_00a383d0:
        FUN_00a38a08(param_1,"The requested URL returned error: %d",iVar11);
        return 0x16;
      }
LAB_00a3786c:
                    /* try { // try from 00a3787c to 00b378a3 has its CatchHandler @ 00a377dc */
      lVar19 = *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0xaf8);
      uVar14 = 2;
      if (*(char *)(param_1 + 0x61d) != '\0') {
        uVar14 = 3;
      }
      iVar11 = FUN_00a391f0(param_2,uVar14,*(long *)(param_1 + 0xaf8),lVar19);
      if (iVar11 != 0) {
        return iVar11;
      }
                    /* try { // try from 00a378a4 to 00b378b7 has its CatchHandler @ 00a37914 */
      *plVar6 = *plVar6 + lVar19;
      lVar22 = *(long *)(param_1 + 0xa8) + lVar19;
      *(long *)(param_1 + 0xa8) = lVar22;
      if (99 < *(int *)(param_1 + 0x128) - 100U) {
        lVar22 = 0;
      }
      *(long *)(param_1 + 0xb0) = lVar22;
      iVar11 = FUN_00a35ef4(param_2);
      if (iVar11 != 0) {
        return iVar11;
      }
      if (299 < *piVar2) {
        if ((*(char *)((long)param_2 + 0x3ca) == '\0') && (*(char *)((long)param_2 + 0x3b9) == '\0')
           ) {
          if (*(char *)((long)param_2 + 0x3cb) == '\0') {
                    /* try { // try from 00a37988 to 00b379c3 has its CatchHandler @ 00a37aa4 */
            if ((2 < *(int *)(param_1 + 0x430) - 2U) || (*(char *)(param_1 + 0x1e8) != '\0'))
            goto LAB_00a378f4;
            if (*(char *)(param_1 + 0x619) == '\0') {
              FUN_00a38740(param_1,"HTTP error before end of send, stop sending\n");
              FUN_00a26ce8(param_2,2);
              *(undefined1 *)(param_1 + 0x1e8) = 1;
              *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffd;
              if (*(char *)(param_1 + 0x8ca8) == '\0') goto LAB_00a378f4;
              *(undefined4 *)(param_1 + 0x140) = 3;
              cVar20 = *(char *)((long)param_2 + 0x3cb);
            }
            else {
              FUN_00a38740(param_1,"HTTP error before end of send, keep sending\n");
              if (*(int *)(param_1 + 0x140) == 0) goto LAB_00a378f4;
              *(undefined4 *)(param_1 + 0x140) = 0;
              *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
              cVar20 = *(char *)((long)param_2 + 0x3cb);
            }
            goto joined_r0x00a379c0;
          }
        }
        else {
LAB_00a378f4:
                    /* try { // try from 00a378f4 to 00b378fb has its CatchHandler @ 00a37910 */
          cVar20 = *(char *)((long)param_2 + 0x3cb);
joined_r0x00a379c0:
          if (cVar20 == '\0') goto LAB_00a37918;
        }
                    /* try { // try from 00a378fc to 00b3792f has its CatchHandler @ 00a377dc */
        FUN_00a38740(param_1,"Keep sending data to get tossed away!\n");
                    /* catch() { ... } // from try @ 00a37850 with catch @ 00a37910
                       catch() { ... } // from try @ 00a378f4 with catch @ 00a37910 */
                    /* catch() { ... } // from try @ 00a3782c with catch @ 00a37914
                       catch() { ... } // from try @ 00a378a4 with catch @ 00a37914 */
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
      }
LAB_00a37918:
      if (*(char *)(param_1 + 0xd8) != '\0') goto LAB_00a37cd0;
      if ((*(char *)(param_1 + 0x620) == '\0') &&
         ((((*(byte *)(param_2[0x80] + 0x7a) >> 2 & 1) == 0 || (*(int *)(param_1 + 0x87c) != 2)) ||
          (-1 < *(long *)(param_1 + 0x78))))) {
        if (*(char *)(param_1 + 0x210) == '\0') goto LAB_00a383f0;
        *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
LAB_00a38410:
        if (*param_4 == '\0') goto LAB_00a3859c;
      }
      else {
        *param_4 = '\x01';
LAB_00a383f0:
        if (*(long *)(param_1 + 0x78) == -1) {
          if (*(long *)(param_1 + 0x88) == 0) goto LAB_00a38588;
          goto LAB_00a38410;
        }
        FUN_00a30eac(param_1);
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x78);
        if (*(long *)(param_1 + 0x78) != 0) goto LAB_00a38410;
LAB_00a38588:
        *param_4 = '\x01';
      }
      *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe;
LAB_00a3859c:
      if (*(char *)(param_1 + 0x628) != '\0') {
        FUN_00a38860(param_1,1,*(undefined8 *)(param_1 + 0x100),lVar19,param_2);
        return 0;
      }
      return 0;
    }
    if (*pcVar25 == '\r') {
      *(char **)(param_1 + 0x110) = pcVar25 + 1;
      pcVar21 = pcVar25 + 1;
      pcVar25 = pcVar25 + 1;
      if (*pcVar21 == '\n') goto LAB_00a37678;
      goto LAB_00a37680;
    }
    iVar11 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xe0) = iVar11 + 1;
    if (iVar11 == 0) {
      if ((*(uint *)(param_2[0x80] + 0x78) & 3) == 0) {
                    /* try { // try from 00a37930 to 00b37987 has its CatchHandler @ 00a37930
                       catch() { ... } // from try @ 00a37930 with catch @ 00a37930
                       catch() { ... } // from try @ 00a379c4 with catch @ 00a37930
                       catch() { ... } // from try @ 00a37a90 with catch @ 00a37930 */
        if (((*(uint *)(param_2[0x80] + 0x78) >> 0x12 & 1) == 0) ||
           (iVar11 = sscanf(pcVar25," RTSP/%d.%d %3d",&local_64,piVar1,piVar2), iVar11 != 3))
        goto LAB_00a38628;
        *piVar1 = *piVar1 + local_64 * 10;
        *(int *)plVar3 = 0xb;
      }
      else {
                    /* try { // try from 00a376f4 to 00b37707 has its CatchHandler @ 00a3778c */
        iVar11 = sscanf(pcVar25," HTTP/%d.%d %d",&local_70,plVar3,piVar2);
                    /* try { // try from 00a3770c to 00b3773f has its CatchHandler @ 00a37790 */
        if ((iVar11 == 1) && ((int)local_70 == 2)) {
          iVar11 = sscanf(*(char **)(param_1 + 0x110)," HTTP/2 %d",piVar2);
          if (iVar11 != 1) {
LAB_00a37a08:
            iVar11 = sscanf(*(char **)(param_1 + 0x110)," HTTP %3d",piVar2);
            *(int *)plVar3 = 10;
            if (iVar11 == 0) {
              uVar18 = *(undefined8 *)(param_1 + 0x110);
              for (puVar23 = *(undefined8 **)(param_1 + 0x5e0); puVar23 != (undefined8 *)0x0;
                  puVar23 = (undefined8 *)puVar23[1]) {
                pcVar25 = (char *)*puVar23;
                sVar24 = strlen(pcVar25);
                iVar11 = FUN_00a4a37c(pcVar25,uVar18,sVar24);
                if (iVar11 != 0) goto LAB_00a37a74;
              }
              iVar11 = FUN_00a4a37c("HTTP/",uVar18,5);
              if (iVar11 == 0) {
LAB_00a38628:
                *(undefined1 *)(param_1 + 0xd8) = 0;
                return 0;
              }
LAB_00a37a74:
              *piVar2 = 200;
              *(int *)plVar3 = 10;
            }
            goto LAB_00a37a88;
          }
          *(int *)plVar3 = 0;
          iVar11 = 0;
                    /* try { // try from 00a37740 to 00b377db has its CatchHandler @ 00a37470 */
        }
        else {
          if (iVar11 != 3) goto LAB_00a37a08;
          iVar11 = (int)*plVar3;
        }
        iVar11 = iVar11 + (int)local_70 * 10;
        *(int *)plVar3 = iVar11;
        if ((iVar11 != 0x14) && (*(int *)(param_1 + 0x144) == 2)) {
                    /* try { // try from 00a379f8 to 00b37a8f has its CatchHandler @ 00a37aa4 */
          FUN_00a38740(param_1,"Lying server, not serving HTTP/2\n");
        }
      }
LAB_00a37a88:
      iVar11 = *piVar2;
                    /* try { // try from 00a37a90 to 00b37abf has its CatchHandler @ 00a37930 */
      *(int *)(param_1 + 0x8d68) = iVar11;
      iVar10 = (int)*plVar3;
      *(int *)(param_1 + 0x8d70) = iVar10;
                    /* catch() { ... } // from try @ 00a37988 with catch @ 00a37aa4
                       catch() { ... } // from try @ 00a379f8 with catch @ 00a37aa4 */
      iVar8 = *(int *)(param_1 + 0x8ca4);
      if ((iVar8 == 0) || (iVar10 < iVar8)) {
        *(int *)(param_1 + 0x8ca4) = iVar10;
      }
      if ((*(char *)(param_1 + 0x618) != '\0') && (399 < iVar11)) {
        if (iVar11 == 0x197) {
          cVar20 = *(char *)((long)param_2 + 0x3c1);
joined_r0x00a37aec:
          if (cVar20 != '\0') goto LAB_00a37b10;
        }
        else if (iVar11 == 0x191) {
          cVar20 = (char)param_2[0x78];
          goto joined_r0x00a37aec;
        }
        if (((*plVar5 == 0) || (*(int *)(param_1 + 0x430) != 1)) || (iVar11 != 0x1a0)) {
          pcVar25 = *(char **)(param_1 + 0x110);
          iVar10 = strncmp(pcVar25,"HTTP",4);
                    /* try { // try from 00a386a4 to 00b386fb has its CatchHandler @ 00a386a4
                       catch() { ... } // from try @ 00a386a4 with catch @ 00a386a4
                       catch() { ... } // from try @ 00a38738 with catch @ 00a386a4
                       catch() { ... } // from try @ 00a38804 with catch @ 00a386a4 */
          if (((iVar10 == 0) && (pcVar25 = strchr(pcVar25,0x20), pcVar25 != (char *)0x0)) &&
             (pcVar25 = pcVar25 + 1, *pcVar25 != '\0')) {
            cVar20 = '\r';
            pcVar21 = strchr(pcVar25,0xd);
            if (pcVar21 == (char *)0x0) {
              cVar20 = '\n';
              pcVar21 = strchr(pcVar25,10);
              if (pcVar21 == (char *)0x0) goto LAB_00a383d0;
            }
            *pcVar21 = '\0';
                    /* try { // try from 00a386fc to 00b38737 has its CatchHandler @ 00a38818 */
            FUN_00a38a08(param_1,"The requested URL returned error: %s",pcVar25);
            *pcVar21 = cVar20;
            return 0x16;
          }
          goto LAB_00a383d0;
        }
      }
LAB_00a37b10:
      if (iVar10 == 0x14) {
LAB_00a37b54:
        *(undefined4 *)param_2[0xe3] = 2;
      }
      else if (iVar10 == 10) {
        FUN_00a38740(param_1,"HTTP 1.0, assume close after body\n");
        FUN_00a26ce8(param_2,1);
      }
      else {
        if ((*(int *)(param_1 + 0x144) == 1) && (iVar11 == 0x65)) goto LAB_00a37b54;
        if ((((10 < iVar10) && (*(char *)((long)param_2 + 0x3b9) == '\0')) && (param_2[0xe3] != 0))
           && (uVar17 = FUN_00a2ce10(param_1,param_2), (uVar17 & 1) == 0)) {
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
    if (((*(char *)(param_1 + 0x1ea) == '\0') && (*(char *)(param_1 + 0x63f) == '\0')) &&
       (iVar11 = FUN_00a4a37c("Content-Length:",*(undefined8 *)(param_1 + 0x110),0xf), iVar11 != 0))
    {
      lVar19 = strtol((char *)(*(long *)(param_1 + 0x110) + 0xf),(char **)0x0,10);
      if ((*(long *)(param_1 + 0x5f0) != 0) && (*(long *)(param_1 + 0x5f0) < lVar19)) {
        FUN_00a38a08(param_1,"Maximum file size exceeded");
        return 0x3f;
      }
      if (lVar19 < 0) {
        FUN_00a26ce8(param_2,2);
        FUN_00a38740(param_1,"Negative content-length: %ld, closing after transfer\n",lVar19);
      }
      else {
        *(long *)(param_1 + 0x78) = lVar19;
        *(long *)(param_1 + 0x88) = lVar19;
        FUN_00a30eac(param_1,lVar19);
      }
    }
    else {
      iVar11 = FUN_00a4a37c("Content-Type:",*(undefined8 *)(param_1 + 0x110),0xd);
      if (iVar11 == 0) {
        iVar10 = FUN_00a4a37c("Server:",*(undefined8 *)(param_1 + 0x110),7);
        iVar11 = (int)*plVar3;
        if (iVar10 == 0) {
          if (iVar11 == 10) {
            if (*(char *)((long)param_2 + 0x3be) != '\0') {
              uVar17 = FUN_00a37030(*(undefined8 *)(param_1 + 0x110),"Proxy-Connection:",
                                    "keep-alive");
              if ((uVar17 & 1) != 0) {
                FUN_00a26ce8(param_2,0);
                FUN_00a38740(param_1,"HTTP/1.0 proxy connection set to keep alive!\n");
                goto LAB_00a37c68;
              }
              iVar11 = (int)*plVar3;
              goto LAB_00a37dec;
            }
LAB_00a37e44:
            uVar17 = FUN_00a37030(*(undefined8 *)(param_1 + 0x110),"Connection:","keep-alive");
            if ((uVar17 & 1) != 0) {
              FUN_00a26ce8(param_2,0);
              FUN_00a38740(param_1,"HTTP/1.0 connection set to keep alive!\n");
              goto LAB_00a37c68;
            }
          }
          else {
LAB_00a37dec:
            if (iVar11 == 0xb) {
              if (*(char *)((long)param_2 + 0x3be) != '\0') {
                uVar17 = FUN_00a37030(*(undefined8 *)(param_1 + 0x110),"Proxy-Connection:","close");
                if ((uVar17 & 1) != 0) {
                  FUN_00a26ce8(param_2,1);
                  FUN_00a38740(param_1,"HTTP/1.1 proxy connection set close!\n");
                  goto LAB_00a37c68;
                }
                iVar11 = (int)*plVar3;
                goto LAB_00a37e3c;
              }
            }
            else {
LAB_00a37e3c:
              if (iVar11 == 10) goto LAB_00a37e44;
            }
          }
          uVar17 = FUN_00a37030(*(undefined8 *)(param_1 + 0x110),"Connection:","close");
          if ((uVar17 & 1) == 0) {
            iVar11 = FUN_00a4a37c("Transfer-Encoding:",*(undefined8 *)(param_1 + 0x110),0x12);
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
                iVar11 = FUN_00a4a37c("chunked",pbVar26,7);
                if (iVar11 != 0) {
                  *(undefined1 *)(param_1 + 0x210) = 1;
                  FUN_00a4a4cc(param_2);
                  pbVar26 = pbVar26 + 7;
                }
                if (*(int *)(param_1 + 0x148) != 0) goto LAB_00a37c68;
                iVar11 = FUN_00a4a37c("identity",pbVar26,8);
                if (iVar11 == 0) {
                  iVar11 = FUN_00a4a37c("deflate",pbVar26,7);
                  if (iVar11 == 0) {
                    iVar11 = FUN_00a4a37c("gzip",pbVar26,4);
                    if (iVar11 == 0) {
                      iVar11 = FUN_00a4a37c("x-gzip",pbVar26,6);
                      if (iVar11 == 0) goto LAB_00a37c68;
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
            iVar11 = FUN_00a4a37c("Content-Encoding:",*(long *)(param_1 + 0x110),0x11);
            if ((iVar11 == 0) || (*(long *)(param_1 + 0x6b8) == 0)) {
              iVar11 = FUN_00a4a37c("Content-Range:",*(undefined8 *)(param_1 + 0x110),0xe);
              if (iVar11 == 0) {
                if ((*(long *)(param_1 + 0x938) == 0) ||
                   (iVar11 = FUN_00a4a37c("Set-Cookie:",*(undefined8 *)(param_1 + 0x110),0xb),
                   iVar11 == 0)) {
                  iVar11 = FUN_00a4a37c("Last-Modified:",*(undefined8 *)(param_1 + 0x110),0xe);
                  if ((iVar11 == 0) ||
                     ((*(int *)(param_1 + 0x420) == 0 && (*(char *)(param_1 + 0x611) == '\0')))) {
                    iVar11 = FUN_00a4a37c("WWW-Authenticate:",*(undefined8 *)(param_1 + 0x110),0x11)
                    ;
                    if ((iVar11 == 0) || (*piVar2 != 0x191)) {
                    /* try { // try from 00a38260 to 00b382d3 has its CatchHandler @ 00a38164 */
                      iVar11 = FUN_00a4a37c("Proxy-authenticate:",*(undefined8 *)(param_1 + 0x110),
                                            0x13);
                      if ((iVar11 != 0) && (*(int *)(param_1 + 0x128) == 0x197)) {
                        iVar11 = 0x197;
                        goto LAB_00a38284;
                      }
                    /* try { // try from 00a382d4 to 00b382ff has its CatchHandler @ 00a38350 */
                      if (((*(int *)(param_1 + 0x128) - 300U < 100) &&
                          (iVar11 = FUN_00a4a37c("Location:",*(undefined8 *)(param_1 + 0x110),9),
                          iVar11 != 0)) && (*(long *)(param_1 + 0x1f0) == 0)) {
                        pcVar25 = (char *)FUN_00a35e0c(*(undefined8 *)(param_1 + 0x110));
                        if (pcVar25 == (char *)0x0) {
                          return 0x1b;
                        }
                    /* try { // try from 00a38328 to 00b38377 has its CatchHandler @ 00a38164 */
                        if (*pcVar25 == '\0') {
                          (*(code *)PTR_free_01769a00)();
                        }
                        else {
                          *(char **)(param_1 + 0x1f0) = pcVar25;
                          if (*(char *)(param_1 + 0x61a) != '\0') {
                            lVar19 = (*(code *)PTR_strdup_01769a10)();
                    /* catch() { ... } // from try @ 00a38310 with catch @ 00a3834c */
                            *(long *)(param_1 + 0x1f8) = lVar19;
                    /* catch() { ... } // from try @ 00a381ec with catch @ 00a38350
                       catch() { ... } // from try @ 00a382d4 with catch @ 00a38350 */
                            if (lVar19 == 0) {
                              return 0x1b;
                            }
                    /* catch() { ... } // from try @ 00a38248 with catch @ 00a38354 */
                    /* catch() { ... } // from try @ 00a38224 with catch @ 00a38358 */
                            iVar11 = FUN_00a361f0(param_2);
                    /* catch() { ... } // from try @ 00a381c0 with catch @ 00a3835c */
                            goto joined_r0x00a38364;
                          }
                        }
                        goto LAB_00a37c68;
                      }
                      if ((*(byte *)(param_2[0x80] + 0x7a) >> 2 & 1) == 0) goto LAB_00a37c68;
                      iVar11 = FUN_00a55dec(param_2,*(undefined8 *)(param_1 + 0x110));
                    /* try { // try from 00a38310 to 00b38327 has its CatchHandler @ 00a3834c */
                    }
                    else {
                      iVar11 = 0x191;
LAB_00a38284:
                      lVar19 = FUN_00a35e0c(*(undefined8 *)(param_1 + 0x110));
                      if (lVar19 == 0) {
                        return 0x1b;
                      }
                      iVar11 = FUN_00a36790(param_2,iVar11 == 0x197,lVar19);
                      (*(code *)PTR_free_01769a00)(lVar19);
                    }
joined_r0x00a38364:
                    if (iVar11 != 0) {
                      return iVar11;
                    }
                  }
                  else {
                    /* try { // try from 00a381c0 to 00b381d7 has its CatchHandler @ 00a3835c */
                    local_70 = time((time_t *)0x0);
                    uVar18 = FUN_00a4c2a0(*(long *)(param_1 + 0x110) + 0xe,&local_70);
                    *(undefined8 *)(param_1 + 0x1c0) = uVar18;
                    if (*(char *)(param_1 + 0x611) != '\0') {
                    /* try { // try from 00a381ec to 00b381f3 has its CatchHandler @ 00a38350 */
                      *(undefined8 *)(param_1 + 0x8d78) = uVar18;
                    }
                  }
                }
                else {
                  FUN_00a4bf64(param_1,2,2);
                  plVar7 = param_2 + 0x8b;
                  if (param_2[0x8b] == 0) {
                    plVar7 = param_2 + 0x18;
                  }
                  FUN_00a316c0(param_1,*(undefined8 *)(param_1 + 0x938),1,
                               *(long *)(param_1 + 0x110) + 0xb,*plVar7,
                               *(undefined8 *)(param_1 + 0x8cc0));
                  FUN_00a4bfbc(param_1,2);
                    /* try { // try from 00a38164 to 00b381bf has its CatchHandler @ 00a38164
                       catch() { ... } // from try @ 00a38164 with catch @ 00a38164
                       catch() { ... } // from try @ 00a38260 with catch @ 00a38164
                       catch() { ... } // from try @ 00a38328 with catch @ 00a38164 */
                }
              }
              else {
                pbVar26 = (byte *)(*(long *)(param_1 + 0x110) + 0xe);
                uVar15 = (uint)*pbVar26;
                if (*pbVar26 != 0) {
                  do {
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
              iVar11 = FUN_00a4a37c("identity",pbVar26,8);
              if (iVar11 == 0) {
                iVar11 = FUN_00a4a37c("deflate",pbVar26,7);
                if (iVar11 == 0) {
                    /* try { // try from 00a38224 to 00b3823b has its CatchHandler @ 00a38358 */
                  iVar11 = FUN_00a4a37c("gzip",pbVar26,4);
                    /* try { // try from 00a38248 to 00b3825f has its CatchHandler @ 00a38354 */
                  if ((iVar11 != 0) || (iVar11 = FUN_00a4a37c("x-gzip",pbVar26,6), iVar11 != 0)) {
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
            FUN_00a26ce8(param_2,2);
          }
        }
        else if (iVar11 < 0x14) {
          pcVar25 = (char *)FUN_00a35e0c(*(undefined8 *)(param_1 + 0x110));
          if ((((int *)param_2[0xe3] != (int *)0x0) && (*(int *)param_2[0xe3] == 1)) &&
             (uVar17 = FUN_00a2d024(param_1,pcVar25), (uVar17 & 1) != 0)) {
            *(undefined4 *)param_2[0xe3] = 0xffffffff;
          }
          goto LAB_00a37c60;
        }
      }
      else {
        pcVar25 = (char *)FUN_00a35e0c(*(undefined8 *)(param_1 + 0x110));
        if (pcVar25 == (char *)0x0) {
          return 0x1b;
        }
        if (*pcVar25 == '\0') {
LAB_00a37c60:
          (*(code *)PTR_free_01769a00)(pcVar25);
        }
        else {
          (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8db0));
          *(undefined8 *)(param_1 + 0x8db0) = pcVar25;
        }
      }
    }
LAB_00a37c68:
    uVar14 = 2;
    if (*(char *)(param_1 + 0x61d) != '\0') {
      uVar14 = 3;
    }
    if (*(char *)(param_1 + 0x628) != '\0') {
      FUN_00a38860(param_1,1,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xf0),
                   param_2);
    }
    iVar11 = FUN_00a391f0(param_2,uVar14,*(undefined8 *)(param_1 + 0x110),
                          *(undefined8 *)(param_1 + 0xf0));
    if (iVar11 != 0) {
      return iVar11;
    }
    *plVar6 = *plVar6 + *(long *)(param_1 + 0xf0);
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xf0);
LAB_00a37cd0:
    pcVar25 = *(char **)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xaf8);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (*pcVar25 == '\0') {
      return 0;
    }
  } while( true );
}

