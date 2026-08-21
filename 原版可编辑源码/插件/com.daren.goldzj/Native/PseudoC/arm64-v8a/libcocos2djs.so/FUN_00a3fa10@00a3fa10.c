
int FUN_00a3fa10(long *param_1,int param_2,char *param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  undefined4 uVar20;
  long lVar21;
  uint uVar22;
  long local_90;
  undefined8 local_78;
  long local_70;
  undefined4 local_64;
  
                    /* catch() { ... } // from try @ 00a3f9cc with catch @ 00a3fa14 */
                    /* catch() { ... } // from try @ 00a3fa7c with catch @ 00a3fa28 */
  local_64 = 0;
  iVar9 = 0;
  if (*(int *)((long)param_1 + (long)param_2 * 4 + 0x710) != 2) {
    bVar7 = false;
    local_90 = 0;
    lVar21 = *param_1;
                    /* try { // try from 00a3fa68 to 00b3fa7b has its CatchHandler @ 00a3fb54 */
    puVar1 = (undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260);
    uVar5 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260);
    piVar2 = (int *)((long)param_1 + (long)param_2 * 4 + 0x710);
                    /* try { // try from 00a3fa7c to 00b3fb6f has its CatchHandler @ 00a3fa28 */
    *(undefined1 *)((long)param_1 + 0x3d2) = 0;
    pcVar18 = (char *)(lVar21 + 0xb08);
    piVar3 = (int *)(lVar21 + 0x128);
    do {
      iVar9 = *piVar2;
      do {
        if (iVar9 == 0) {
          FUN_00a22d58(lVar21,"Establish HTTP proxy tunnel to %s:%hu\n",param_3,param_4);
          (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar21 + 0x1f8));
          *(undefined8 *)(lVar21 + 0x1f8) = 0;
          lVar10 = FUN_00a21074();
          if (lVar10 == 0) {
            return 0x1b;
          }
          lVar11 = FUN_00a0e870("%s:%hu",param_3,param_4);
          if (lVar11 == 0) {
LAB_00a40478:
            FUN_00a2108c(lVar10);
            return 0x1b;
          }
                    /* catch() { ... } // from try @ 00a3fa68 with catch @ 00a3fb54 */
          iVar9 = FUN_00a20988(param_1,"CONNECT",lVar11,1);
                    /* try { // try from 00a3fb70 to 00b3fbbf has its CatchHandler @ 00a3fb70
                       catch() { ... } // from try @ 00a3fb70 with catch @ 00a3fb70
                       catch() { ... } // from try @ 00a3fc78 with catch @ 00a3fb70 */
          (*(code *)PTR_free_01d1b748)(lVar11);
          if (iVar9 != 0) {
            FUN_00a2108c(lVar10);
            return iVar9;
          }
          pcVar17 = "1.0";
          if ((int)param_1[0x30] != 1) {
            pcVar17 = "1.1";
          }
          bVar8 = *(char *)((long)param_1 + 0x3c2) != '\0';
          if ((char *)param_1[0x18] != param_3) {
            pcVar12 = strchr(param_3,0x3a);
                    /* try { // try from 00a3fbc0 to 00b3fbd7 has its CatchHandler @ 00a3fd40 */
            bVar8 = pcVar12 != (char *)0x0;
          }
          pcVar12 = "";
          pcVar14 = "[";
          if (!bVar8) {
            pcVar14 = pcVar12;
          }
          pcVar4 = "]";
                    /* try { // try from 00a3fbec to 00b3fbff has its CatchHandler @ 00a3fd3c */
          if (!bVar8) {
            pcVar4 = pcVar12;
          }
          lVar11 = FUN_00a0e870("%s%s%s:%hu",pcVar14,param_3,pcVar4,param_4);
                    /* try { // try from 00a3fc00 to 00b3fc0f has its CatchHandler @ 00a3fd10 */
          if (lVar11 == 0) goto LAB_00a40478;
          lVar13 = FUN_00a20398(param_1,"Host:");
          pcVar14 = pcVar12;
                    /* try { // try from 00a3fc28 to 00b3fc2f has its CatchHandler @ 00a3fcf4 */
                    /* try { // try from 00a3fc30 to 00b3fc3f has its CatchHandler @ 00a3fd24 */
          if ((lVar13 == 0) &&
             (pcVar14 = (char *)FUN_00a0e870("Host: %s\r\n",lVar11), pcVar14 == (char *)0x0)) {
            (*(code *)PTR_free_01d1b748)(lVar11);
            goto LAB_00a40478;
          }
                    /* try { // try from 00a3fc40 to 00b3fc47 has its CatchHandler @ 00a3fd0c */
          lVar13 = FUN_00a20398(param_1,"Proxy-Connection:");
                    /* try { // try from 00a3fc48 to 00b3fc77 has its CatchHandler @ 00a3fd14 */
          pcVar4 = "Proxy-Connection: Keep-Alive\r\n";
          if (lVar13 != 0) {
            pcVar4 = pcVar12;
          }
          lVar13 = FUN_00a20398(param_1,"User-Agent:");
          pcVar19 = pcVar12;
          if ((lVar13 == 0) && (*(long *)(lVar21 + 0x790) != 0)) {
                    /* try { // try from 00a3fc78 to 00b3fd8f has its CatchHandler @ 00a3fb70 */
            pcVar19 = (char *)param_1[0x85];
          }
          if ((char *)param_1[0x84] != (char *)0x0) {
            pcVar12 = (char *)param_1[0x84];
          }
          iVar9 = FUN_00a21380(lVar10,"CONNECT %s HTTP/%s\r\n%s%s%s%s",lVar11,pcVar17,pcVar14,
                               pcVar12,pcVar19,pcVar4);
          if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
            (*(code *)PTR_free_01d1b748)(pcVar14);
          }
          (*(code *)PTR_free_01d1b748)(lVar11);
                    /* catch() { ... } // from try @ 00a3fc28 with catch @ 00a3fcf4 */
                    /* catch() { ... } // from try @ 00a3fc40 with catch @ 00a3fd0c */
                    /* catch() { ... } // from try @ 00a3fc00 with catch @ 00a3fd10 */
                    /* catch() { ... } // from try @ 00a3fc48 with catch @ 00a3fd14 */
                    /* catch() { ... } // from try @ 00a3fc30 with catch @ 00a3fd24 */
                    /* catch() { ... } // from try @ 00a3fbec with catch @ 00a3fd3c */
          if ((((iVar9 != 0) || (iVar9 = FUN_00a21728(param_1,1,lVar10), iVar9 != 0)) ||
              (iVar9 = FUN_00a21380(lVar10,&DAT_018bc985), iVar9 != 0)) ||
             (iVar9 = FUN_00a210d0(lVar10,param_1,lVar21 + 0x8d90,0,param_2), iVar9 != 0)) {
            FUN_00a23020(lVar21,"Failed sending CONNECT to proxy");
            FUN_00a2108c(0);
            return iVar9;
          }
                    /* catch() { ... } // from try @ 00a3fbc0 with catch @ 00a3fd40 */
          FUN_00a2108c(0);
          *piVar2 = 1;
        }
        lVar10 = FUN_00a0f850(lVar21,0,1);
        if (lVar10 < 1) {
          pcVar18 = "Proxy CONNECT aborted due to timeout";
LAB_00a402fc:
          FUN_00a23020(lVar21,pcVar18);
          goto LAB_00a40304;
        }
        if (((param_5 & 1) == 0) && (uVar15 = FUN_00a11350(param_1,param_2), (uVar15 & 1) == 0)) {
          return 0;
        }
        lVar10 = 0;
        uVar15 = 0;
        uVar22 = 1;
                    /* try { // try from 00a3fd90 to 00b3fdd3 has its CatchHandler @ 00a3fd90
                       catch() { ... } // from try @ 00a3fd90 with catch @ 00a3fd90
                       catch() { ... } // from try @ 00a3fdec with catch @ 00a3fd90 */
        bVar8 = false;
        pcVar17 = pcVar18;
        pcVar12 = pcVar18;
        while( true ) {
          iVar9 = FUN_00a1ace8(param_1);
          if (iVar9 != 0) {
            return 0x2a;
          }
          if ((char *)(lVar21 + 0x4b08U) <= pcVar17) {
            pcVar18 = "CONNECT response too large!";
            goto LAB_00a402fc;
          }
          lVar11 = FUN_00a0f850(lVar21,0,1);
                    /* catch() { ... } // from try @ 00a3fe70 with catch @ 00a3ff28 */
          if (lVar11 < 1) break;
                    /* try { // try from 00a3ff44 to 00b3ff9b has its CatchHandler @ 00a3ff44
                       catch() { ... } // from try @ 00a3ff44 with catch @ 00a3ff44
                       catch() { ... } // from try @ 00a400fc with catch @ 00a3ff44 */
          iVar9 = FUN_00a239f8(param_1,uVar5,pcVar17,1,&local_70);
          if (iVar9 != 0) {
            if (iVar9 == 0x51) {
              if (999 < lVar11) {
                lVar11 = 1000;
              }
              iVar9 = FUN_00a159e8(uVar5,0xffffffff,0xffffffff,lVar11);
              if (iVar9 != -1) goto LAB_00a401bc;
              pcVar17 = "Proxy CONNECT aborted due to select/poll error";
              goto LAB_00a40238;
            }
            bVar6 = false;
                    /* try { // try from 00a401e4 to 00b40237 has its CatchHandler @ 00a401e4
                       catch() { ... } // from try @ 00a401e4 with catch @ 00a401e4
                       catch() { ... } // from try @ 00a403a8 with catch @ 00a401e4 */
            goto LAB_00a40240;
          }
          if (local_70 < 1) {
            if ((*(long *)(lVar21 + 0x270) == 0) || (*(long *)(lVar21 + 0x8c28) == 0)) {
              pcVar17 = "Proxy CONNECT aborted";
              goto LAB_00a40238;
            }
            *(undefined1 *)((long)param_1 + 0x3d2) = 1;
            FUN_00a22d58(lVar21,"Proxy CONNECT connection closed\n");
            bVar6 = false;
            goto LAB_00a40240;
          }
          if (uVar22 < 2) {
                    /* try { // try from 00a3ffbc to 00b3ffc7 has its CatchHandler @ 00a40178 */
            uVar15 = uVar15 + 1;
            lVar10 = (long)(int)lVar10 + 1;
                    /* try { // try from 00a3ffc8 to 00b3ffd3 has its CatchHandler @ 00a40174 */
            if (*pcVar17 == '\n') {
                    /* try { // try from 00a3ffd4 to 00b400fb has its CatchHandler @ 00a4018c */
              if (*(char *)(lVar21 + 0x628) != '\0') {
                FUN_00a22e78(lVar21,1,pcVar12,lVar10,param_1);
              }
              uVar20 = 2;
              if (*(char *)(lVar21 + 0x61d) != '\0') {
                uVar20 = 3;
              }
              iVar9 = FUN_00a23808(param_1,uVar20,pcVar12,lVar10);
              *(long *)(lVar21 + 0x8d88) = *(long *)(lVar21 + 0x8d88) + lVar10;
              *(long *)(lVar21 + 0xa8) = *(long *)(lVar21 + 0xa8) + lVar10;
              if (iVar9 != 0) {
                return iVar9;
              }
              if ((*pcVar12 == '\r') || (*pcVar12 == '\n')) {
                pcVar14 = pcVar12;
                if ((*piVar3 == 0x197) && (*(char *)(lVar21 + 0x8c38) == '\0')) {
                  if (local_90 == 0) {
                    /* try { // try from 00a3fdec to 00b3fe2f has its CatchHandler @ 00a3fd90 */
                    if (!bVar7) goto LAB_00a40064;
                    FUN_00a22d58(lVar21,"Ignore chunked response-body\n");
                    *(undefined1 *)(lVar21 + 0x1e9) = 1;
                    /* catch() { ... } // from try @ 00a3fdd4 with catch @ 00a3fe1c */
                    pcVar14 = pcVar12 + 1;
                    if (pcVar12[1] != '\n') {
                      pcVar14 = pcVar12;
                    }
                    iVar9 = FUN_00a33af0(param_1,pcVar14 + 1,1,&local_70);
                    /* catch() { ... } // from try @ 00a3fe84 with catch @ 00a3fe30 */
                    if (iVar9 != -1) goto LAB_00a3fdb8;
                    FUN_00a22d58(lVar21,"chunk reading DONE\n");
                    uVar22 = 0;
                    *piVar2 = 2;
                  }
                  else {
                    FUN_00a22d58(lVar21,"Ignore %ld bytes of response-body\n");
LAB_00a3fdb8:
                    uVar22 = 2;
                  }
                }
                else {
LAB_00a40064:
                  uVar22 = 0;
                }
                uVar15 = 0;
                *piVar2 = 2;
                pcVar17 = pcVar18;
                pcVar12 = pcVar14;
              }
              else {
                pcVar12[lVar10] = '\0';
                iVar9 = FUN_00a33994("WWW-Authenticate:",pcVar12,0x11);
                    /* try { // try from 00a400fc to 00b401e3 has its CatchHandler @ 00a3ff44 */
                if ((iVar9 == 0) || (*piVar3 != 0x191)) {
                  iVar9 = FUN_00a33994("Proxy-authenticate:",pcVar12,0x13);
                  if ((iVar9 != 0) && (*piVar3 == 0x197)) {
                    iVar9 = 0x197;
                    goto LAB_00a40130;
                  }
                    /* catch() { ... } // from try @ 00a3ffc8 with catch @ 00a40174 */
                    /* catch() { ... } // from try @ 00a3ffbc with catch @ 00a40178 */
                    /* catch() { ... } // from try @ 00a3ff9c with catch @ 00a4017c */
                  iVar9 = FUN_00a33994("Content-Length:",pcVar12,0xf);
                  if (iVar9 == 0) {
                    /* try { // try from 00a3fdd4 to 00b3fdeb has its CatchHandler @ 00a3fe1c */
                    uVar16 = FUN_00a21648(pcVar12,"Connection:","close");
                    if ((uVar16 & 1) == 0) {
                    /* try { // try from 00a3fe70 to 00b3fe83 has its CatchHandler @ 00a3ff28 */
                      uVar16 = FUN_00a21648(pcVar12,"Transfer-Encoding:","chunked");
                      if ((uVar16 & 1) == 0) {
                        uVar16 = FUN_00a21648(pcVar12,"Proxy-Connection:","close");
                        if ((uVar16 & 1) != 0) goto LAB_00a3fddc;
                        iVar9 = sscanf(pcVar12,"HTTP/1.%d %d",&local_64,piVar3);
                        if (iVar9 == 2) {
                          *(int *)(lVar21 + 0x8d6c) = *piVar3;
                        }
                      }
                      else {
                        iVar9 = *piVar3;
                    /* try { // try from 00a3fe84 to 00b3ff43 has its CatchHandler @ 00a3fe30 */
                        if (iVar9 - 200U < 100) {
                          pcVar18 = "Transfer-Encoding: in %03d response";
                          goto LAB_00a40490;
                        }
                        FUN_00a22d58(lVar21,"CONNECT responded chunked\n");
                        FUN_00a33ae4(param_1);
                        bVar7 = true;
                      }
                    }
                    else {
LAB_00a3fddc:
                      bVar8 = true;
                    }
                  }
                  else {
                    /* catch() { ... } // from try @ 00a3ffd4 with catch @ 00a4018c */
                    iVar9 = *piVar3;
                    if (iVar9 - 200U < 100) {
                    /* try { // try from 00a4048c to 00b404df has its CatchHandler @ 00a4048c
                       catch() { ... } // from try @ 00a4048c with catch @ 00a4048c
                       catch() { ... } // from try @ 00a40648 with catch @ 00a4048c */
                      pcVar18 = "Content-Length: in %03d response";
                      goto LAB_00a40490;
                    }
                    local_90 = strtol(pcVar12 + 0xf,(char **)0x0,10);
                  }
                }
                else {
                  iVar9 = 0x191;
LAB_00a40130:
                  lVar10 = FUN_00a20424(pcVar12);
                  if (lVar10 == 0) {
                    return 0x1b;
                  }
                  iVar9 = FUN_00a20da8(param_1,iVar9 == 0x197,lVar10);
                  (*(code *)PTR_free_01d1b748)(lVar10);
                  if (iVar9 != 0) {
                    return iVar9;
                  }
                }
                lVar10 = 0;
                pcVar17 = pcVar18;
                pcVar12 = pcVar18;
              }
            }
            else {
              pcVar17 = pcVar17 + 1;
            }
          }
          else if (local_90 == 0) {
            local_78 = 0;
            iVar9 = FUN_00a33af0(param_1,pcVar18,1,&local_78);
            if (iVar9 == -1) {
              FUN_00a22d58(lVar21,"chunk reading DONE\n");
              uVar22 = 0;
              *piVar2 = 2;
            }
            uVar15 = 0;
            local_90 = 0;
            pcVar17 = pcVar18;
          }
          else {
                    /* try { // try from 00a3ff9c to 00b3ffb3 has its CatchHandler @ 00a4017c */
            if (local_90 < 2) {
              bVar6 = false;
              local_90 = local_90 + -1;
              goto LAB_00a40240;
            }
            uVar15 = 0;
            pcVar17 = pcVar18;
            local_90 = local_90 + -1;
          }
LAB_00a401bc:
          bVar6 = false;
          if ((uVar15 >> 0xe != 0) || (uVar22 == 0)) goto LAB_00a40240;
        }
        pcVar17 = "Proxy CONNECT aborted due to timeout";
LAB_00a40238:
                    /* try { // try from 00a40238 to 00b4024f has its CatchHandler @ 00a40424 */
        FUN_00a23020(lVar21,pcVar17);
        bVar6 = true;
LAB_00a40240:
        iVar9 = FUN_00a1ace8(param_1);
        if (iVar9 != 0) {
          return 0x2a;
        }
        if (bVar6) goto LAB_00a40304;
                    /* try { // try from 00a40258 to 00b40263 has its CatchHandler @ 00a40420 */
        if (*(int *)(lVar21 + 0x8d6c) == 200) {
                    /* try { // try from 00a40264 to 00b4026f has its CatchHandler @ 00a4041c */
                    /* try { // try from 00a40270 to 00b403a7 has its CatchHandler @ 00a40434 */
          if (bVar8) {
LAB_00a40354:
            if (*(long *)(lVar21 + 0x1f8) != 0) {
              FUN_00a104c4(param_1,*puVar1);
              *puVar1 = 0xffffffff;
            }
            bVar8 = true;
            goto LAB_00a40378;
          }
        }
        else {
          iVar9 = FUN_00a2050c(param_1);
          if (iVar9 != 0) {
            return iVar9;
          }
          if (bVar8 || *(char *)((long)param_1 + 0x3b9) != '\0') goto LAB_00a40354;
        }
        bVar8 = false;
        if (*(long *)(lVar21 + 0x1f8) == 0) goto LAB_00a40378;
        iVar9 = *piVar2;
      } while (iVar9 != 2);
      *piVar2 = 0;
      FUN_00a22d58(lVar21,"TUNNEL_STATE switched to: %d\n",0);
    } while (*(long *)(lVar21 + 0x1f8) != 0);
    bVar8 = false;
LAB_00a40378:
    if (*piVar3 == 200) {
      *piVar2 = 2;
      (*(code *)PTR_free_01d1b748)(param_1[0x84]);
                    /* try { // try from 00a403a8 to 00b4048b has its CatchHandler @ 00a401e4 */
      param_1[0x84] = 0;
      *(undefined1 *)(lVar21 + 0x8c30) = 1;
      FUN_00a22d58(lVar21,"Proxy replied OK to CONNECT request\n");
      iVar9 = 0;
      *(undefined1 *)(lVar21 + 0x1e9) = 0;
      *(undefined1 *)((long)param_1 + 0x3cb) = 0;
    }
    else {
      if ((bVar8) && (*(long *)(lVar21 + 0x1f8) != 0)) {
        *(undefined1 *)((long)param_1 + 0x3d2) = 1;
        FUN_00a22d58(lVar21,"Connect me again please\n");
      }
      else {
        (*(code *)PTR_free_01d1b748)();
                    /* catch() { ... } // from try @ 00a40264 with catch @ 00a4041c */
                    /* catch() { ... } // from try @ 00a40258 with catch @ 00a40420 */
                    /* catch() { ... } // from try @ 00a40238 with catch @ 00a40424 */
        *(undefined8 *)(lVar21 + 0x1f8) = 0;
        FUN_00a11300(param_1,2);
                    /* catch() { ... } // from try @ 00a40270 with catch @ 00a40434 */
        FUN_00a104c4(param_1,*puVar1);
        *puVar1 = 0xffffffff;
      }
      *piVar2 = 0;
      iVar9 = 0;
      if (*(char *)((long)param_1 + 0x3d2) == '\0') {
        iVar9 = *(int *)(lVar21 + 0x128);
        pcVar18 = "Received HTTP code %d from proxy after CONNECT";
LAB_00a40490:
        FUN_00a23020(lVar21,pcVar18,iVar9);
LAB_00a40304:
        iVar9 = 0x38;
      }
    }
  }
  return iVar9;
}

