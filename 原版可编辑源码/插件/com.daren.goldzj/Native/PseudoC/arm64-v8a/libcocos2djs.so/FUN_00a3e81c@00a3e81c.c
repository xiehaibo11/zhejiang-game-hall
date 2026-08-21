
int FUN_00a3e81c(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  size_t sVar17;
  size_t sVar18;
  size_t sVar19;
  long lVar20;
  char *local_80;
  char *local_68;
  
                    /* catch() { ... } // from try @ 00a3e650 with catch @ 00a3e824 */
                    /* catch() { ... } // from try @ 00a3e644 with catch @ 00a3e828 */
                    /* catch() { ... } // from try @ 00a3e624 with catch @ 00a3e82c */
                    /* catch() { ... } // from try @ 00a3e65c with catch @ 00a3e83c */
  lVar15 = *param_1;
  uVar3 = *(uint *)(lVar15 + 0x87c);
  lVar20 = *(long *)(lVar15 + 0x218);
  *param_2 = 1;
  plVar1 = (long *)(lVar15 + 0x8ce0);
  *(long *)(lVar20 + 0x88) = *plVar1;
  *(undefined8 *)(lVar20 + 0x90) = 0;
  *(undefined1 *)(lVar15 + 0x620) = 1;
  pcVar6 = "SET_PARAMETER";
  pcVar10 = "OPTIONS";
                    /* try { // try from 00a3e894 to 00b3e8e7 has its CatchHandler @ 00a3e894
                       catch() { ... } // from try @ 00a3e894 with catch @ 00a3e894
                       catch() { ... } // from try @ 00a3ead4 with catch @ 00a3e894 */
  switch(uVar3) {
  case 1:
    break;
  case 2:
    pcVar10 = "DESCRIBE";
    *(undefined1 *)(lVar15 + 0x620) = 0;
    break;
  case 3:
    pcVar10 = "ANNOUNCE";
    break;
  case 4:
    pcVar10 = "SETUP";
    break;
  case 5:
    pcVar10 = "PLAY";
    break;
  case 6:
    pcVar10 = "PAUSE";
    break;
  case 7:
                    /* try { // try from 00a3e8e8 to 00b3e8ff has its CatchHandler @ 00a3eb9c */
    pcVar10 = "TEARDOWN";
    break;
  case 8:
    pcVar6 = "GET_PARAMETER";
    *(undefined1 *)(lVar15 + 0x620) = 0;
  case 9:
    lVar16 = *(long *)(lVar15 + 0x7e8);
    pcVar10 = pcVar6;
    goto joined_r0x00a3eb00;
  case 10:
    lVar16 = *(long *)(lVar15 + 0x7e8);
    pcVar10 = "RECORD";
joined_r0x00a3eb00:
    if (lVar16 == 0) {
      FUN_00a23020(lVar15,"Refusing to issue an RTSP request [%s] without a session ID.",pcVar10);
      return 0x2b;
    }
                    /* try { // try from 00a3e914 to 00b3e927 has its CatchHandler @ 00a3eb98 */
    bVar4 = true;
    goto LAB_00a3e918;
  case 0xb:
    *(undefined1 *)(lVar15 + 0x620) = 0;
    FUN_00a335d8(param_1,0,0xffffffffffffffff,1,lVar20 + 0x28,0xffffffff,0);
    return 0;
  case 0xc:
    pcVar6 = "Got invalid RTSP request: RTSPREQ_LAST";
    goto LAB_00a3ec28;
  default:
    pcVar6 = "Got invalid RTSP request";
    goto LAB_00a3ec28;
  }
  lVar16 = *(long *)(lVar15 + 0x7e8);
  bVar4 = lVar16 != 0;
LAB_00a3e918:
                    /* try { // try from 00a3e928 to 00b3e937 has its CatchHandler @ 00a3eb7c */
  puVar2 = &DAT_01895dc4;
  if (*(undefined1 **)(lVar15 + 0x7f0) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(lVar15 + 0x7f0);
  }
                    /* try { // try from 00a3e938 to 00b3e93f has its CatchHandler @ 00a3eb80 */
  pcVar6 = (char *)FUN_00a20330(param_1,"Transport:");
  if ((uVar3 == 4) && (pcVar6 == (char *)0x0)) {
    if (*(long *)(lVar15 + 0x7f8) == 0) {
                    /* try { // try from 00a3ea70 to 00b3ea9b has its CatchHandler @ 00a3eb80 */
      pcVar6 = "Refusing to issue an RTSP SETUP without a Transport: header.";
      goto LAB_00a3ec28;
    }
                    /* try { // try from 00a3e95c to 00b3e99f has its CatchHandler @ 00a3ebac */
    (*(code *)PTR_free_01d1b748)(param_1[0x8c]);
    param_1[0x8c] = 0;
    pcVar6 = (char *)FUN_00a0e870("Transport: %s\r\n",*(undefined8 *)(lVar15 + 0x7f8));
    param_1[0x8c] = (long)pcVar6;
    if (pcVar6 == (char *)0x0) {
      return 0x1b;
    }
  }
  if (uVar3 == 2) {
    lVar7 = FUN_00a20330(param_1,"Accept:");
    local_68 = (char *)0x0;
    if (lVar7 == 0) {
      local_68 = "Accept: application/sdp\r\n";
    }
    lVar7 = FUN_00a20330(param_1,"Accept-Encoding:");
    pcVar11 = (char *)0x0;
                    /* try { // try from 00a3e9cc to 00b3e9db has its CatchHandler @ 00a3eb54 */
    if ((lVar7 == 0) && (pcVar11 = (char *)0x0, *(long *)(lVar15 + 0x6b8) != 0)) {
                    /* try { // try from 00a3e9dc to 00b3e9eb has its CatchHandler @ 00a3eb78 */
      (*(code *)PTR_free_01d1b748)(param_1[0x86]);
      param_1[0x86] = 0;
      pcVar11 = (char *)FUN_00a0e870("Accept-Encoding: %s\r\n",*(undefined8 *)(lVar15 + 0x6b8));
                    /* try { // try from 00a3e9fc to 00b3ea3f has its CatchHandler @ 00a3ebac */
      param_1[0x86] = (long)pcVar11;
      if (pcVar11 == (char *)0x0) {
        return 0x1b;
      }
    }
  }
  else {
    pcVar11 = (char *)0x0;
    local_68 = (char *)0x0;
  }
  lVar7 = FUN_00a20330(param_1,"User-Agent:");
  if ((lVar7 == 0) || (param_1[0x85] == 0)) {
    lVar7 = FUN_00a20330(param_1,"User-Agent:");
    if ((lVar7 == 0) && (*(long *)(lVar15 + 0x790) != 0)) {
      local_80 = (char *)param_1[0x85];
    }
    else {
      local_80 = (char *)0x0;
    }
  }
  else {
    (*(code *)PTR_free_01d1b748)();
    local_80 = (char *)0x0;
    param_1[0x85] = 0;
  }
                    /* try { // try from 00a3ea9c to 00b3eaa3 has its CatchHandler @ 00a3eb74 */
  iVar5 = FUN_00a20988(param_1,pcVar10,puVar2,0);
                    /* try { // try from 00a3eaa4 to 00b3ead3 has its CatchHandler @ 00a3eb88 */
  if (iVar5 != 0) {
    return iVar5;
  }
  pcVar12 = (char *)param_1[0x84];
  pcVar13 = (char *)param_1[0x87];
  (*(code *)PTR_free_01d1b748)(param_1[0x89]);
  param_1[0x89] = 0;
                    /* try { // try from 00a3ead4 to 00b3ec23 has its CatchHandler @ 00a3e894 */
  if ((*(long *)(lVar15 + 0x918) == 0) || (lVar7 = FUN_00a20330(param_1,"Referer:"), lVar7 != 0)) {
    pcVar8 = (char *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00a3e9cc with catch @ 00a3eb54 */
    pcVar8 = (char *)FUN_00a0e870("Referer: %s\r\n",*(undefined8 *)(lVar15 + 0x918));
  }
  pcVar14 = (char *)0x0;
  param_1[0x89] = (long)pcVar8;
                    /* catch() { ... } // from try @ 00a3ea9c with catch @ 00a3eb74 */
                    /* catch() { ... } // from try @ 00a3e9dc with catch @ 00a3eb78 */
                    /* catch() { ... } // from try @ 00a3e928 with catch @ 00a3eb7c */
                    /* catch() { ... } // from try @ 00a3e938 with catch @ 00a3eb80
                       catch() { ... } // from try @ 00a3ea70 with catch @ 00a3eb80 */
  if (((uVar3 & 0xf) != 0) && (*(char *)(lVar15 + 0x8cc9) != '\0')) {
                    /* catch() { ... } // from try @ 00a3eaa4 with catch @ 00a3eb88 */
    lVar7 = FUN_00a20330(param_1,"Range:");
                    /* catch() { ... } // from try @ 00a3e95c with catch @ 00a3ebac
                       catch() { ... } // from try @ 00a3e9fc with catch @ 00a3ebac */
    if ((lVar7 == 0) && (*(long *)(lVar15 + 0x8cd0) != 0)) {
      (*(code *)PTR_free_01d1b748)(param_1[0x88]);
      param_1[0x88] = 0;
      pcVar14 = (char *)FUN_00a0e870("Range: %s\r\n",*(long *)(lVar15 + 0x8cd0));
      param_1[0x88] = (long)pcVar14;
    }
    else {
                    /* catch() { ... } // from try @ 00a3e914 with catch @ 00a3eb98 */
      pcVar14 = (char *)0x0;
                    /* catch() { ... } // from try @ 00a3e8e8 with catch @ 00a3eb9c */
    }
  }
  lVar7 = FUN_00a20330(param_1,"CSeq:");
  if (lVar7 != 0) {
    FUN_00a23020(lVar15,"CSeq cannot be set as a custom header.");
    return 0x55;
  }
  lVar7 = FUN_00a20330(param_1,"Session:");
  if (lVar7 == 0) {
    lVar7 = FUN_00a21074();
    if (lVar7 == 0) {
      return 0x1b;
    }
    iVar5 = FUN_00a21380(lVar7,"%s %s RTSP/1.0\r\nCSeq: %ld\r\n",pcVar10,puVar2,
                         *(undefined8 *)(lVar20 + 0x88));
    if (iVar5 != 0) {
      return iVar5;
    }
                    /* try { // try from 00a3ec68 to 00b3ec7f has its CatchHandler @ 00a3ecb0 */
                    /* try { // try from 00a3ec80 to 00b3ecc3 has its CatchHandler @ 00a3ec24 */
    if ((bVar4) && (iVar5 = FUN_00a21380(lVar7,"Session: %s\r\n",lVar16), iVar5 != 0)) {
      return iVar5;
    }
    pcVar10 = "";
    if (pcVar6 == (char *)0x0) {
      pcVar6 = pcVar10;
    }
    if (local_68 == (char *)0x0) {
      local_68 = pcVar10;
    }
                    /* catch() { ... } // from try @ 00a3ec68 with catch @ 00a3ecb0 */
    if (pcVar11 == (char *)0x0) {
      pcVar11 = pcVar10;
    }
    if (pcVar14 == (char *)0x0) {
      pcVar14 = pcVar10;
    }
                    /* catch() { ... } // from try @ 00a3ed20 with catch @ 00a3ecc4 */
    if (pcVar8 == (char *)0x0) {
      pcVar8 = pcVar10;
    }
    if (local_80 == (char *)0x0) {
      local_80 = pcVar10;
    }
    if (pcVar12 == (char *)0x0) {
      pcVar12 = pcVar10;
    }
    if (pcVar13 == (char *)0x0) {
      pcVar13 = pcVar10;
    }
    iVar5 = FUN_00a21380(lVar7,"%s%s%s%s%s%s%s%s",pcVar6,local_68,pcVar11,pcVar14,pcVar8,local_80,
                         pcVar12,pcVar13);
                    /* try { // try from 00a3ed0c to 00b3ed1f has its CatchHandler @ 00a3eed0 */
    (*(code *)PTR_free_01d1b748)(param_1[0x87]);
    param_1[0x87] = 0;
    if (iVar5 == 0) {
                    /* try { // try from 00a3ed20 to 00b3eeeb has its CatchHandler @ 00a3ecc4 */
      if (((uVar3 == 4) || (uVar3 == 2)) && (iVar5 = FUN_00a2193c(lVar15,lVar7), iVar5 != 0)) {
        return iVar5;
      }
      iVar5 = FUN_00a21728(param_1,0,lVar7);
      if (iVar5 != 0) {
        return iVar5;
      }
      sVar17 = 0;
      if (uVar3 < 10) {
        sVar18 = 0;
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x308U) != 0) {
          sVar19 = *(size_t *)(lVar15 + 0x8cf8);
          if (*(char *)(lVar15 + 0x621) == '\0') {
            if (sVar19 == 0xffffffffffffffff) {
              if (*(char **)(lVar15 + 0x290) == (char *)0x0) {
                sVar17 = 0;
              }
              else {
                sVar17 = strlen(*(char **)(lVar15 + 0x290));
              }
              sVar18 = 0;
              uVar9 = 2;
            }
            else {
              uVar9 = 2;
              sVar18 = 0;
              sVar17 = sVar19;
            }
          }
          else {
            uVar9 = 4;
            sVar17 = 0;
            sVar18 = sVar19;
          }
          *(undefined4 *)(lVar15 + 0x430) = uVar9;
          if (((long)sVar17 < 1) && ((long)sVar18 < 1)) {
            if (uVar3 == 8) {
              *(undefined4 *)(lVar15 + 0x430) = 5;
              *(undefined1 *)(lVar15 + 0x620) = 1;
            }
          }
          else {
            lVar16 = FUN_00a20330(param_1,"Content-Length:");
            if (lVar16 == 0) {
              sVar19 = sVar18;
              if (*(char *)(lVar15 + 0x621) == '\0') {
                sVar19 = sVar17;
              }
              iVar5 = FUN_00a21380(lVar7,"Content-Length: %ld\r\n",sVar19);
              if (iVar5 != 0) {
                return iVar5;
              }
            }
            if ((((uVar3 | 1) == 9) && (lVar16 = FUN_00a20330(param_1,"Content-Type:"), lVar16 == 0)
                ) && (iVar5 = FUN_00a21380(lVar7,"Content-Type: text/parameters\r\n"), iVar5 != 0))
            {
              return iVar5;
            }
            if (((uVar3 == 3) && (lVar16 = FUN_00a20330(param_1,"Content-Type:"), lVar16 == 0)) &&
               (iVar5 = FUN_00a21380(lVar7,"Content-Type: application/sdp\r\n"), iVar5 != 0)) {
              return iVar5;
            }
            *(undefined1 *)(lVar15 + 0x8ca8) = 0;
          }
        }
      }
      else {
        sVar18 = 0;
      }
      *(undefined1 *)(lVar15 + 0x213) = 1;
      iVar5 = FUN_00a21540(lVar7,&DAT_018bc985,2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if ((0 < (long)sVar17) &&
         (iVar5 = FUN_00a21540(lVar7,*(undefined8 *)(lVar15 + 0x290),sVar17), iVar5 != 0)) {
        return iVar5;
      }
                    /* catch() { ... } // from try @ 00a3ed0c with catch @ 00a3eed0 */
      iVar5 = FUN_00a210d0(lVar7,param_1,lVar15 + 0x8d90,0,0);
                    /* try { // try from 00a3eeec to 00b3ef3f has its CatchHandler @ 00a3eeec
                       catch() { ... } // from try @ 00a3eeec with catch @ 00a3eeec
                       catch() { ... } // from try @ 00a3f0a8 with catch @ 00a3eeec */
      if (iVar5 != 0) {
        FUN_00a23020(lVar15,"Failed sending RTSP request");
        return iVar5;
      }
      lVar16 = lVar20 + 0x30;
      if (sVar18 == 0) {
        lVar16 = 0;
      }
                    /* try { // try from 00a3ef40 to 00b3ef57 has its CatchHandler @ 00a3f124 */
      FUN_00a335d8(param_1,0,0xffffffffffffffff,1,lVar20 + 0x28,-(uint)(sVar18 == 0),lVar16);
      *plVar1 = *plVar1 + 1;
                    /* try { // try from 00a3ef60 to 00b3ef6b has its CatchHandler @ 00a3f120 */
      if (*(long *)(lVar20 + 0x30) == 0) {
        return 0;
      }
                    /* try { // try from 00a3ef6c to 00b3ef77 has its CatchHandler @ 00a3f11c */
      FUN_00a1b744(lVar15);
      iVar5 = FUN_00a1ace8(param_1);
                    /* try { // try from 00a3ef78 to 00b3f0a7 has its CatchHandler @ 00a3f134 */
      if (iVar5 != 0) {
        return 0x2a;
      }
      return 0;
    }
    return iVar5;
  }
                    /* try { // try from 00a3ec24 to 00b3ec67 has its CatchHandler @ 00a3ec24
                       catch() { ... } // from try @ 00a3ec24 with catch @ 00a3ec24
                       catch() { ... } // from try @ 00a3ec80 with catch @ 00a3ec24 */
  pcVar6 = "Session ID cannot be set as a custom header.";
LAB_00a3ec28:
  FUN_00a23020(lVar15,pcVar6);
  return 0x2b;
}

