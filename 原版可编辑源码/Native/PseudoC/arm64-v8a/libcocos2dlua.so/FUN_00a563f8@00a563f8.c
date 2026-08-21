
int FUN_00a563f8(long *param_1,int param_2,char *param_3,undefined4 param_4,uint param_5)

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
  
  local_64 = 0;
                    /* try { // try from 00a5642c to 00b5645f has its CatchHandler @ 00a56334 */
  iVar9 = 0;
  if (*(int *)((long)param_1 + (long)param_2 * 4 + 0x710) != 2) {
    bVar7 = false;
    local_90 = 0;
    lVar21 = *param_1;
    puVar1 = (undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260);
    uVar5 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260);
    piVar2 = (int *)((long)param_1 + (long)param_2 * 4 + 0x710);
                    /* try { // try from 00a56460 to 00b56473 has its CatchHandler @ 00a564cc */
    *(undefined1 *)((long)param_1 + 0x3d2) = 0;
                    /* try { // try from 00a56478 to 00b5648b has its CatchHandler @ 00a564d0 */
                    /* try { // try from 00a5648c to 00b564eb has its CatchHandler @ 00a56334 */
    pcVar18 = (char *)(lVar21 + 0xb08);
    piVar3 = (int *)(lVar21 + 0x128);
    do {
      iVar9 = *piVar2;
      do {
        if (iVar9 == 0) {
          FUN_00a38740(lVar21,"Establish HTTP proxy tunnel to %s:%hu\n",param_3,param_4);
          (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar21 + 0x1f8));
          *(undefined8 *)(lVar21 + 0x1f8) = 0;
          lVar10 = FUN_00a36a5c();
          if (lVar10 == 0) {
            return 0x1b;
          }
          lVar11 = FUN_00a24258("%s:%hu",param_3,param_4);
          if (lVar11 == 0) {
LAB_00a56e60:
            FUN_00a36a74(lVar10);
            return 0x1b;
          }
          iVar9 = FUN_00a36370(param_1,"CONNECT",lVar11,1);
          (*(code *)PTR_free_01769a00)(lVar11);
          if (iVar9 != 0) {
            FUN_00a36a74(lVar10);
            return iVar9;
          }
          pcVar17 = "1.0";
          if ((int)param_1[0x30] != 1) {
            pcVar17 = "1.1";
          }
          bVar8 = *(char *)((long)param_1 + 0x3c2) != '\0';
          if ((char *)param_1[0x18] != param_3) {
            pcVar12 = strchr(param_3,0x3a);
            bVar8 = pcVar12 != (char *)0x0;
          }
          pcVar12 = "";
          pcVar14 = "[";
          if (!bVar8) {
            pcVar14 = pcVar12;
          }
          pcVar4 = "]";
          if (!bVar8) {
            pcVar4 = pcVar12;
          }
          lVar11 = FUN_00a24258("%s%s%s:%hu",pcVar14,param_3,pcVar4,param_4);
          if (lVar11 == 0) goto LAB_00a56e60;
          lVar13 = FUN_00a35d80(param_1,"Host:");
          pcVar14 = pcVar12;
          if ((lVar13 == 0) &&
             (pcVar14 = (char *)FUN_00a24258("Host: %s\r\n",lVar11), pcVar14 == (char *)0x0)) {
            (*(code *)PTR_free_01769a00)(lVar11);
            goto LAB_00a56e60;
          }
          lVar13 = FUN_00a35d80(param_1,"Proxy-Connection:");
          pcVar4 = "Proxy-Connection: Keep-Alive\r\n";
          if (lVar13 != 0) {
            pcVar4 = pcVar12;
          }
          lVar13 = FUN_00a35d80(param_1,"User-Agent:");
          pcVar19 = pcVar12;
          if ((lVar13 == 0) && (*(long *)(lVar21 + 0x790) != 0)) {
            pcVar19 = (char *)param_1[0x85];
          }
          if ((char *)param_1[0x84] != (char *)0x0) {
            pcVar12 = (char *)param_1[0x84];
          }
                    /* try { // try from 00a56694 to 00b566df has its CatchHandler @ 00a56694
                       catch() { ... } // from try @ 00a56694 with catch @ 00a56694
                       catch() { ... } // from try @ 00a566e4 with catch @ 00a56694 */
          iVar9 = FUN_00a36d68(lVar10,"CONNECT %s HTTP/%s\r\n%s%s%s%s",lVar11,pcVar17,pcVar14,
                               pcVar12,pcVar19,pcVar4);
          if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
            (*(code *)PTR_free_01769a00)(pcVar14);
          }
          (*(code *)PTR_free_01769a00)(lVar11);
                    /* try { // try from 00a566e0 to 00b566e3 has its CatchHandler @ 00a5671c */
                    /* try { // try from 00a566e4 to 00b5672f has its CatchHandler @ 00a56694 */
                    /* catch() { ... } // from try @ 00a566e0 with catch @ 00a5671c */
          if ((((iVar9 != 0) || (iVar9 = FUN_00a37110(param_1,1,lVar10), iVar9 != 0)) ||
              (iVar9 = FUN_00a36d68(lVar10,&DAT_013ecf75), iVar9 != 0)) ||
             (iVar9 = FUN_00a36ab8(lVar10,param_1,lVar21 + 0x8d90,0,param_2), iVar9 != 0)) {
            FUN_00a38a08(lVar21,"Failed sending CONNECT to proxy");
            FUN_00a36a74(0);
            return iVar9;
          }
          FUN_00a36a74(0);
                    /* catch() { ... } // from try @ 00a567b8 with catch @ 00a56730 */
          *piVar2 = 1;
        }
        lVar10 = FUN_00a25238(lVar21,0,1);
        if (lVar10 < 1) {
          pcVar18 = "Proxy CONNECT aborted due to timeout";
LAB_00a56ce4:
          FUN_00a38a08(lVar21,pcVar18);
          goto LAB_00a56cec;
        }
        if (((param_5 & 1) == 0) && (uVar15 = FUN_00a26d38(param_1,param_2), (uVar15 & 1) == 0)) {
          return 0;
        }
        lVar10 = 0;
        uVar15 = 0;
        uVar22 = 1;
        bVar8 = false;
        pcVar17 = pcVar18;
        pcVar12 = pcVar18;
        while( true ) {
          iVar9 = FUN_00a306d0(param_1);
          if (iVar9 != 0) {
            return 0x2a;
          }
          if ((char *)(lVar21 + 0x4b08U) <= pcVar17) {
            pcVar18 = "CONNECT response too large!";
            goto LAB_00a56ce4;
          }
          lVar11 = FUN_00a25238(lVar21,0,1);
          if (lVar11 < 1) break;
          iVar9 = FUN_00a393e0(param_1,uVar5,pcVar17,1,&local_70);
          if (iVar9 != 0) {
            if (iVar9 == 0x51) {
              if (999 < lVar11) {
                lVar11 = 1000;
              }
              iVar9 = FUN_00a2b3d0(uVar5,0xffffffff,0xffffffff,lVar11);
              if (iVar9 != -1) goto LAB_00a56ba4;
              pcVar17 = "Proxy CONNECT aborted due to select/poll error";
              goto LAB_00a56c20;
            }
            bVar6 = false;
            goto LAB_00a56c28;
          }
          if (local_70 < 1) {
            if ((*(long *)(lVar21 + 0x270) == 0) || (*(long *)(lVar21 + 0x8c28) == 0)) {
                    /* catch() { ... } // from try @ 00a56b90 with catch @ 00a56c14 */
              pcVar17 = "Proxy CONNECT aborted";
              goto LAB_00a56c20;
            }
            *(undefined1 *)((long)param_1 + 0x3d2) = 1;
            FUN_00a38740(lVar21,"Proxy CONNECT connection closed\n");
            bVar6 = false;
                    /* catch() { ... } // from try @ 00a56b78 with catch @ 00a56c10 */
            goto LAB_00a56c28;
          }
          if (uVar22 < 2) {
            uVar15 = uVar15 + 1;
            lVar10 = (long)(int)lVar10 + 1;
            if (*pcVar17 == '\n') {
              if (*(char *)(lVar21 + 0x628) != '\0') {
                FUN_00a38860(lVar21,1,pcVar12,lVar10,param_1);
              }
              uVar20 = 2;
              if (*(char *)(lVar21 + 0x61d) != '\0') {
                uVar20 = 3;
              }
              iVar9 = FUN_00a391f0(param_1,uVar20,pcVar12,lVar10);
              *(long *)(lVar21 + 0x8d88) = *(long *)(lVar21 + 0x8d88) + lVar10;
              *(long *)(lVar21 + 0xa8) = *(long *)(lVar21 + 0xa8) + lVar10;
              if (iVar9 != 0) {
                return iVar9;
              }
              if ((*pcVar12 == '\r') || (*pcVar12 == '\n')) {
                pcVar14 = pcVar12;
                if ((*piVar3 == 0x197) && (*(char *)(lVar21 + 0x8c38) == '\0')) {
                  if (local_90 == 0) {
                    if (!bVar7) goto LAB_00a56a4c;
                    FUN_00a38740(lVar21,"Ignore chunked response-body\n");
                    *(undefined1 *)(lVar21 + 0x1e9) = 1;
                    pcVar14 = pcVar12 + 1;
                    if (pcVar12[1] != '\n') {
                      pcVar14 = pcVar12;
                    }
                    iVar9 = FUN_00a4a4d8(param_1,pcVar14 + 1,1,&local_70);
                    if (iVar9 != -1) goto LAB_00a567a0;
                    FUN_00a38740(lVar21,"chunk reading DONE\n");
                    uVar22 = 0;
                    *piVar2 = 2;
                  }
                  else {
                    FUN_00a38740(lVar21,"Ignore %ld bytes of response-body\n");
LAB_00a567a0:
                    uVar22 = 2;
                  }
                }
                else {
LAB_00a56a4c:
                  uVar22 = 0;
                }
                uVar15 = 0;
                *piVar2 = 2;
                pcVar17 = pcVar18;
                pcVar12 = pcVar14;
              }
              else {
                pcVar12[lVar10] = '\0';
                iVar9 = FUN_00a4a37c("WWW-Authenticate:",pcVar12,0x11);
                if ((iVar9 == 0) || (*piVar3 != 0x191)) {
                  iVar9 = FUN_00a4a37c("Proxy-authenticate:",pcVar12,0x13);
                  if ((iVar9 != 0) && (*piVar3 == 0x197)) {
                    iVar9 = 0x197;
                    goto LAB_00a56b18;
                  }
                  iVar9 = FUN_00a4a37c("Content-Length:",pcVar12,0xf);
                  if (iVar9 == 0) {
                    /* try { // try from 00a567b4 to 00b567b7 has its CatchHandler @ 00a567cc */
                    /* try { // try from 00a567b8 to 00b568ab has its CatchHandler @ 00a56730 */
                    uVar16 = FUN_00a37030(pcVar12,"Connection:","close");
                    if ((uVar16 & 1) == 0) {
                      uVar16 = FUN_00a37030(pcVar12,"Transfer-Encoding:","chunked");
                      if ((uVar16 & 1) == 0) {
                    /* try { // try from 00a568ac to 00b56b43 has its CatchHandler @ 00a568ac
                       catch() { ... } // from try @ 00a568ac with catch @ 00a568ac
                       catch() { ... } // from try @ 00a56bc4 with catch @ 00a568ac */
                        uVar16 = FUN_00a37030(pcVar12,"Proxy-Connection:","close");
                        if ((uVar16 & 1) != 0) goto LAB_00a567c4;
                        iVar9 = sscanf(pcVar12,"HTTP/1.%d %d",&local_64,piVar3);
                        if (iVar9 == 2) {
                          *(int *)(lVar21 + 0x8d6c) = *piVar3;
                        }
                      }
                      else {
                        iVar9 = *piVar3;
                        if (iVar9 - 200U < 100) {
                          pcVar18 = "Transfer-Encoding: in %03d response";
                          goto LAB_00a56e78;
                        }
                        FUN_00a38740(lVar21,"CONNECT responded chunked\n");
                        FUN_00a4a4cc(param_1);
                        bVar7 = true;
                      }
                    }
                    else {
LAB_00a567c4:
                    /* catch() { ... } // from try @ 00a567b4 with catch @ 00a567cc */
                      bVar8 = true;
                    }
                  }
                  else {
                    iVar9 = *piVar3;
                    /* try { // try from 00a56b78 to 00b56b8b has its CatchHandler @ 00a56c10 */
                    if (iVar9 - 200U < 100) {
                      pcVar18 = "Content-Length: in %03d response";
                      goto LAB_00a56e78;
                    }
                    /* try { // try from 00a56b90 to 00b56bc3 has its CatchHandler @ 00a56c14 */
                    local_90 = strtol(pcVar12 + 0xf,(char **)0x0,10);
                  }
                }
                else {
                  iVar9 = 0x191;
LAB_00a56b18:
                  lVar10 = FUN_00a35e0c(pcVar12);
                  if (lVar10 == 0) {
                    return 0x1b;
                  }
                  iVar9 = FUN_00a36790(param_1,iVar9 == 0x197,lVar10);
                    /* try { // try from 00a56b44 to 00b56b77 has its CatchHandler @ 00a56c44 */
                  (*(code *)PTR_free_01769a00)(lVar10);
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
            iVar9 = FUN_00a4a4d8(param_1,pcVar18,1,&local_78);
            if (iVar9 == -1) {
              FUN_00a38740(lVar21,"chunk reading DONE\n");
              uVar22 = 0;
              *piVar2 = 2;
            }
            uVar15 = 0;
            local_90 = 0;
            pcVar17 = pcVar18;
          }
          else {
            if (local_90 < 2) {
              bVar6 = false;
              local_90 = local_90 + -1;
                    /* catch() { ... } // from try @ 00a56388 with catch @ 00a564cc
                       catch() { ... } // from try @ 00a56460 with catch @ 00a564cc */
                    /* catch() { ... } // from try @ 00a563d0 with catch @ 00a564d0
                       catch() { ... } // from try @ 00a56478 with catch @ 00a564d0 */
              goto LAB_00a56c28;
            }
            uVar15 = 0;
            pcVar17 = pcVar18;
            local_90 = local_90 + -1;
          }
LAB_00a56ba4:
          bVar6 = false;
          if ((uVar15 >> 0xe != 0) || (uVar22 == 0)) goto LAB_00a56c28;
        }
        pcVar17 = "Proxy CONNECT aborted due to timeout";
                    /* try { // try from 00a56bc4 to 00b56c5f has its CatchHandler @ 00a568ac */
LAB_00a56c20:
        FUN_00a38a08(lVar21,pcVar17);
        bVar6 = true;
LAB_00a56c28:
        iVar9 = FUN_00a306d0(param_1);
        if (iVar9 != 0) {
          return 0x2a;
        }
        if (bVar6) goto LAB_00a56cec;
                    /* catch() { ... } // from try @ 00a56b44 with catch @ 00a56c44 */
        if (*(int *)(lVar21 + 0x8d6c) == 200) {
          if (bVar8) {
LAB_00a56d3c:
            if (*(long *)(lVar21 + 0x1f8) != 0) {
              FUN_00a25eac(param_1,*puVar1);
              *puVar1 = 0xffffffff;
            }
            bVar8 = true;
            goto LAB_00a56d60;
          }
        }
        else {
          iVar9 = FUN_00a35ef4(param_1);
          if (iVar9 != 0) {
            return iVar9;
          }
          if (bVar8 || *(char *)((long)param_1 + 0x3b9) != '\0') goto LAB_00a56d3c;
        }
        bVar8 = false;
        if (*(long *)(lVar21 + 0x1f8) == 0) goto LAB_00a56d60;
        iVar9 = *piVar2;
      } while (iVar9 != 2);
      *piVar2 = 0;
      FUN_00a38740(lVar21,"TUNNEL_STATE switched to: %d\n",0);
    } while (*(long *)(lVar21 + 0x1f8) != 0);
    bVar8 = false;
LAB_00a56d60:
    if (*piVar3 == 200) {
      *piVar2 = 2;
      (*(code *)PTR_free_01769a00)(param_1[0x84]);
      param_1[0x84] = 0;
      *(undefined1 *)(lVar21 + 0x8c30) = 1;
      FUN_00a38740(lVar21,"Proxy replied OK to CONNECT request\n");
      iVar9 = 0;
      *(undefined1 *)(lVar21 + 0x1e9) = 0;
      *(undefined1 *)((long)param_1 + 0x3cb) = 0;
    }
    else {
      if ((bVar8) && (*(long *)(lVar21 + 0x1f8) != 0)) {
        *(undefined1 *)((long)param_1 + 0x3d2) = 1;
        FUN_00a38740(lVar21,"Connect me again please\n");
      }
      else {
        (*(code *)PTR_free_01769a00)();
        *(undefined8 *)(lVar21 + 0x1f8) = 0;
        FUN_00a26ce8(param_1,2);
        FUN_00a25eac(param_1,*puVar1);
        *puVar1 = 0xffffffff;
      }
      *piVar2 = 0;
      iVar9 = 0;
      if (*(char *)((long)param_1 + 0x3d2) == '\0') {
        iVar9 = *(int *)(lVar21 + 0x128);
        pcVar18 = "Received HTTP code %d from proxy after CONNECT";
LAB_00a56e78:
        FUN_00a38a08(lVar21,pcVar18,iVar9);
LAB_00a56cec:
        iVar9 = 0x38;
      }
    }
  }
  return iVar9;
}

