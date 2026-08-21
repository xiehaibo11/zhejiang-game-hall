
undefined8 FUN_00a4dca0(long *param_1,uint *param_2)

{
  char *pcVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char local_64 [4];
  byte *local_60;
  byte *local_58;
  
  lVar13 = *param_1;
  local_64[0] = '\0';
  lVar14 = *(long *)(lVar13 + 0x218);
  if (*(char *)((long)param_1 + 0x3c6) == '\0') {
    if (*(int *)((long)param_1 + 0x714) == 1) {
      uVar5 = FUN_00a3fa10(param_1,1,0,0,0);
      return uVar5;
    }
    uVar5 = FUN_00a0fcbc(param_1,1,local_64);
    if (local_64[0] == '\0') {
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if (*(int *)((long)param_1 + 0x6bc) != 0) {
        return uVar5;
      }
                    /* catch() { ... } // from try @ 00a4dc34 with catch @ 00a4de08 */
                    /* catch() { ... } // from try @ 00a4dc28 with catch @ 00a4de0c */
      *param_2 = 0xffffffff;
                    /* catch() { ... } // from try @ 00a4dc08 with catch @ 00a4de10 */
      if (*(char *)((long)param_1 + 0x3c3) != '\0') {
                    /* catch() { ... } // from try @ 00a4dc40 with catch @ 00a4de20 */
        FUN_00a23020(*param_1,"Failed EPSV attempt, exiting\n");
        return 8;
      }
      FUN_00a22d58(*param_1,"Failed EPSV attempt. Disabling EPSV\n");
      *(undefined1 *)((long)param_1 + 0x3cc) = 0;
      *(undefined1 *)(*param_1 + 0x8b60) = 0;
      uVar5 = FUN_00a3e3a4(param_1 + 0xc3,"%s",&DAT_01898fe4);
      if ((int)uVar5 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 0x1e;
        *(int *)((long)param_1 + 0x6bc) = *(int *)((long)param_1 + 0x6bc) + 1;
        return uVar5;
      }
      return uVar5;
    }
  }
  uVar5 = FUN_00a3f8d8(param_1,1);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if ((((int)param_1[0x30] == 2) && (*(char *)((long)param_1 + 0x3da) == '\0')) ||
     ((*(char *)((long)param_1 + 0x3c9) != '\0' &&
      ((*(char *)((long)param_1 + 0x3be) != '\0' && (*(int *)((long)param_1 + 0x714) != 2)))))) {
    return 0;
  }
  if ((int)param_1[0xd9] != 0) {
    uVar5 = FUN_00a3e038(param_1 + 0xc3,0);
    *param_2 = (uint)((int)param_1[0xd9] == 0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*(char *)((long)param_1 + 0x6ac) != '\x01') {
      return 0;
    }
    *param_2 = 0;
  }
  if (1 < *(uint *)(lVar14 + 0x18)) {
    FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    if (*(char *)((long)param_1 + 0x6ac) != '\0') {
      return 0;
    }
    uVar5 = 0;
    uVar8 = 1;
    goto LAB_00a4e0cc;
  }
  if (*(char *)((long)param_1 + 0x6ac) != '\0') {
    uVar5 = FUN_00a5137c(param_1,&local_58);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((char)local_58 == '\0') {
      return 0;
    }
    uVar5 = FUN_00a5152c(param_1);
    *(undefined1 *)((long)param_1 + 0x6ac) = 0;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_00a512b4(param_1);
                    /* try { // try from 00a4dd94 to 00b4de77 has its CatchHandler @ 00a4dbb4 */
    if ((int)uVar5 == 0) {
      *param_2 = 1;
      return 0;
    }
    return uVar5;
  }
  if (*(char *)(lVar13 + 0x621) == '\0') {
                    /* try { // try from 00a4deec to 00b4def7 has its CatchHandler @ 00a4e0d0 */
    *(undefined8 *)(lVar14 + 0x20) = 0xffffffffffffffff;
    lVar15 = *param_1;
                    /* try { // try from 00a4def8 to 00b4df03 has its CatchHandler @ 00a4e0cc */
                    /* try { // try from 00a4df04 to 00b4e057 has its CatchHandler @ 00a4e0e4 */
    if ((*(char *)(lVar15 + 0x8cc9) == '\0') || (*(char **)(lVar15 + 0x8cd0) == (char *)0x0)) {
      *(undefined8 *)(lVar15 + 0x88) = 0xffffffffffffffff;
      if (*(char *)(lVar13 + 0x615) == '\0') goto LAB_00a4e034;
LAB_00a4e07c:
      if (*(int *)(lVar14 + 0x18) == 0) {
                    /* catch() { ... } // from try @ 00a4decc with catch @ 00a4e0d4 */
        if ((char)param_1[0xd7] == 'A') {
                    /* catch() { ... } // from try @ 00a4df04 with catch @ 00a4e0e4 */
          *(undefined4 *)(param_1 + 0xd9) = 0x14;
          uVar5 = FUN_00a50214(param_1,200,0x14);
          iVar4 = (int)uVar5;
          goto joined_r0x00a4e0f8;
        }
        cVar12 = 'A';
        uVar5 = FUN_00a3e3a4(param_1 + 0xc3,"TYPE %c",0x41);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar9 = 0x14;
LAB_00a4e140:
        *(undefined4 *)(param_1 + 0xd9) = uVar9;
        *(char *)(param_1 + 0xd7) = cVar12;
      }
    }
    else {
      lVar6 = strtol(*(char **)(lVar15 + 0x8cd0),(char **)&local_58,0);
      uVar8 = (uint)*local_58;
      if (*local_58 != 0) {
        do {
          iVar4 = isspace(uVar8);
          if ((uVar8 != 0x2d) && (iVar4 == 0)) break;
          local_58 = local_58 + 1;
          uVar8 = (uint)*local_58;
        } while (uVar8 != 0);
      }
      pbVar3 = local_58;
      lVar7 = strtol((char *)local_58,(char **)&local_60,0);
      if (pbVar3 == local_60) {
        lVar7 = -1;
      }
      if ((lVar6 < 0) || (lVar7 != -1)) {
        lVar2 = -lVar6;
        if (-1 < lVar6) {
          lVar2 = (1 - lVar6) + lVar7;
        }
        *(long *)(lVar15 + 0x88) = lVar2;
      }
      *(long *)(lVar15 + 0x8cd8) = lVar6;
      *(undefined1 *)(param_1 + 0xd5) = 1;
      if (*(char *)(lVar13 + 0x615) != '\0') goto LAB_00a4e07c;
LAB_00a4e034:
      if (param_1[0xd4] == 0) goto LAB_00a4e07c;
      cVar12 = 'A';
      if (*(char *)(lVar13 + 0x613) == '\0') {
        cVar12 = 'I';
      }
                    /* try { // try from 00a4e058 to 00b4e13b has its CatchHandler @ 00a4de78 */
      if ((char)param_1[0xd7] != cVar12) {
        uVar5 = FUN_00a3e3a4(param_1 + 0xc3,"TYPE %c",cVar12);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
                    /* try { // try from 00a4e13c to 00b4e18f has its CatchHandler @ 00a4e13c
                       catch() { ... } // from try @ 00a4e13c with catch @ 00a4e13c
                       catch() { ... } // from try @ 00a4e368 with catch @ 00a4e13c */
        uVar9 = 0x15;
        goto LAB_00a4e140;
      }
      *(undefined4 *)(param_1 + 0xd9) = 0x15;
      uVar5 = FUN_00a4ff08(param_1,1,0xd);
      iVar4 = (int)uVar5;
joined_r0x00a4e0f8:
      if (iVar4 != 0) {
        return uVar5;
      }
    }
    uVar5 = FUN_00a3e038(param_1 + 0xc3,0);
  }
  else {
                    /* try { // try from 00a4de78 to 00b4decb has its CatchHandler @ 00a4de78
                       catch() { ... } // from try @ 00a4de78 with catch @ 00a4de78
                       catch() { ... } // from try @ 00a4e058 with catch @ 00a4de78 */
    cVar12 = 'A';
    if (*(char *)(lVar13 + 0x613) == '\0') {
      cVar12 = 'I';
    }
    if ((char)param_1[0xd7] == cVar12) {
      *(undefined4 *)(param_1 + 0xd9) = 0x16;
      puVar10 = *(undefined8 **)(*param_1 + 1000);
      *(undefined4 *)((long)param_1 + 0x6bc) = 0;
      if (puVar10 == (undefined8 *)0x0) {
        uVar5 = FUN_00a50698(param_1,0);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      else {
        pcVar11 = (char *)*puVar10;
        pcVar1 = pcVar11 + 1;
                    /* try { // try from 00a4decc to 00b4dee3 has its CatchHandler @ 00a4e0d4 */
        if (*pcVar11 != '*') {
          pcVar1 = pcVar11;
        }
        *(uint *)(param_1 + 0xd8) = (uint)(*pcVar11 == '*');
        uVar5 = FUN_00a3e3a4(param_1 + 0xc3,"%s",pcVar1);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(undefined4 *)(param_1 + 0xd9) = 0xe;
      }
    }
    else {
      uVar5 = FUN_00a3e3a4(param_1 + 0xc3,"TYPE %c",cVar12);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *(undefined4 *)(param_1 + 0xd9) = 0x16;
      *(char *)(param_1 + 0xd7) = cVar12;
    }
    uVar5 = FUN_00a3e038(param_1 + 0xc3,0);
    uVar8 = 0;
    if (*(char *)((long)param_1 + 0x6ac) != '\0') goto LAB_00a4e0cc;
  }
  uVar8 = (uint)((int)param_1[0xd9] == 0);
LAB_00a4e0cc:
                    /* catch() { ... } // from try @ 00a4def8 with catch @ 00a4e0cc */
  *param_2 = uVar8;
  return uVar5;
                    /* catch() { ... } // from try @ 00a4deec with catch @ 00a4e0d0 */
}

