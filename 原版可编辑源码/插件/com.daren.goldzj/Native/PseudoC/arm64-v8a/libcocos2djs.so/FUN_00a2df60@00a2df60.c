
int FUN_00a2df60(long *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  long local_60;
  byte *local_58;
  
  lVar10 = *param_1;
  uVar1 = (undefined4)param_1[0x4c];
  pcVar11 = *(char **)(lVar10 + 0x8cc0);
  *param_2 = 1;
  iVar2 = FUN_00a33838(pcVar11,"/MATCH:",7);
  if (((iVar2 == 0) && (iVar2 = FUN_00a33838(pcVar11,&DAT_0189314f,3), iVar2 == 0)) &&
     (iVar2 = FUN_00a33838(pcVar11,"/FIND:",6), iVar2 == 0)) {
    iVar2 = FUN_00a33838(pcVar11,"/DEFINE:",8);
                    /* try { // try from 00a2e1f4 to 00b2e20b has its CatchHandler @ 00a2e45c */
                    /* try { // try from 00a2e214 to 00b2e21f has its CatchHandler @ 00a2e458 */
    if (((iVar2 == 0) && (iVar2 = FUN_00a33838(pcVar11,&DAT_018931c5,3), iVar2 == 0)) &&
       (iVar2 = FUN_00a33838(pcVar11,"/LOOKUP:",8), iVar2 == 0)) {
      pcVar11 = strchr(pcVar11,0x2f);
      if (pcVar11 == (char *)0x0) {
        return 0;
      }
      do {
        while( true ) {
          pcVar11 = pcVar11 + 1;
          if (*pcVar11 != ':') break;
          *pcVar11 = ' ';
        }
      } while (*pcVar11 != '\0');
                    /* catch() { ... } // from try @ 00a2e220 with catch @ 00a2e454 */
                    /* catch() { ... } // from try @ 00a2e214 with catch @ 00a2e458 */
      iVar2 = FUN_00a2317c(uVar1,param_1,"CLIENT libcurl 7.52.1\r\n%s\r\nQUIT\r\n");
                    /* catch() { ... } // from try @ 00a2e1f4 with catch @ 00a2e45c */
      goto joined_r0x00a2e460;
    }
                    /* try { // try from 00a2e220 to 00b2e22b has its CatchHandler @ 00a2e454 */
    pcVar11 = strchr(pcVar11,0x3a);
    if (pcVar11 == (char *)0x0) {
      pcVar12 = (char *)0x0;
LAB_00a2e26c:
      FUN_00a22d58(lVar10,"lookup word is missing\n");
      pcVar11 = "default";
    }
    else {
                    /* try { // try from 00a2e22c to 00b2e3d3 has its CatchHandler @ 00a2e46c */
      pcVar11 = pcVar11 + 1;
      pcVar3 = strchr(pcVar11,0x3a);
      pcVar12 = pcVar3;
      if (pcVar3 != (char *)0x0) {
        pcVar12 = pcVar3 + 1;
        *pcVar3 = '\0';
        pcVar3 = strchr(pcVar12,0x3a);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
      }
      if (*pcVar11 == '\0') goto LAB_00a2e26c;
    }
    if ((pcVar12 == (char *)0x0) || (*pcVar12 == '\0')) {
      pcVar12 = "!";
    }
    iVar2 = FUN_00a2eb18(lVar10,pcVar11,0,&local_58,&local_60,0);
    if (iVar2 != 0) {
      return 0x1b;
    }
    if (local_58 == (byte *)0x0) {
      return 0x1b;
    }
    lVar5 = (*(code *)PTR_malloc_01d1b740)(local_60 << 1 | 1);
    if (lVar5 != 0) {
      uVar6 = (uint)*local_58;
      if (*local_58 == 0) {
        lVar7 = 0;
      }
      else {
        iVar2 = 0;
        pbVar8 = local_58;
        do {
          pbVar8 = pbVar8 + 1;
          if ((uVar6 < 0x21) ||
             (((uVar6 - 0x22 < 0x3b &&
               ((1L << ((ulong)(uVar6 - 0x22) & 0x3f) & 0x400000000000021U) != 0)) ||
              (iVar9 = iVar2, uVar6 == 0x7f)))) {
            iVar9 = iVar2 + 1;
            *(undefined1 *)(lVar5 + iVar2) = 0x5c;
          }
          *(char *)(lVar5 + iVar9) = (char)uVar6;
          uVar6 = (uint)*pbVar8;
          iVar2 = iVar9 + 1;
        } while (uVar6 != 0);
        lVar7 = (long)iVar2;
      }
      *(undefined1 *)(lVar5 + lVar7) = 0;
      (*(code *)PTR_free_01d1b748)(local_58);
      if (lVar5 == 0) {
        return 0x1b;
      }
      iVar2 = FUN_00a2317c(uVar1,param_1,"CLIENT libcurl 7.52.1\r\nDEFINE %s %s\r\nQUIT\r\n",pcVar12
                           ,lVar5);
                    /* try { // try from 00a2e3d4 to 00b2e4c3 has its CatchHandler @ 00a2e194 */
      (*(code *)PTR_free_01d1b748)(lVar5);
      goto joined_r0x00a2e460;
    }
    goto LAB_00a2e35c;
  }
  pcVar11 = strchr(pcVar11,0x3a);
  if (pcVar11 == (char *)0x0) {
    pcVar3 = (char *)0x0;
    pcVar12 = (char *)0x0;
LAB_00a2e068:
    FUN_00a22d58(lVar10,"lookup word is missing\n");
    pcVar11 = "default";
    if (pcVar12 != (char *)0x0) goto LAB_00a2e048;
LAB_00a2e084:
    pcVar12 = "!";
    if (pcVar3 == (char *)0x0) goto LAB_00a2e090;
LAB_00a2e054:
    if (*pcVar3 == '\0') goto LAB_00a2e090;
  }
  else {
    pcVar11 = pcVar11 + 1;
    pcVar3 = strchr(pcVar11,0x3a);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar12 = (char *)0x0;
      if (*pcVar11 == '\0') {
        pcVar12 = (char *)0x0;
        goto LAB_00a2e068;
      }
    }
    else {
      pcVar12 = pcVar3 + 1;
      *pcVar3 = '\0';
      pcVar4 = strchr(pcVar12,0x3a);
      pcVar3 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        pcVar3 = pcVar4 + 1;
        *pcVar4 = '\0';
        pcVar4 = strchr(pcVar3,0x3a);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
      if (*pcVar11 == '\0') goto LAB_00a2e068;
    }
    if (pcVar12 == (char *)0x0) goto LAB_00a2e084;
LAB_00a2e048:
    if (*pcVar12 == '\0') goto LAB_00a2e084;
    if (pcVar3 != (char *)0x0) goto LAB_00a2e054;
LAB_00a2e090:
    pcVar3 = ".";
  }
                    /* try { // try from 00a2e0a4 to 00b2e193 has its CatchHandler @ 00a2de68 */
  iVar2 = FUN_00a2eb18(lVar10,pcVar11,0,&local_58,&local_60,0);
  if (iVar2 != 0) {
    return 0x1b;
  }
  if (local_58 == (byte *)0x0) {
    return 0x1b;
  }
  lVar5 = (*(code *)PTR_malloc_01d1b740)(local_60 << 1 | 1);
  if (lVar5 != 0) {
    uVar6 = (uint)*local_58;
    if (*local_58 == 0) {
      lVar7 = 0;
    }
    else {
      iVar2 = 0;
      pbVar8 = local_58;
      do {
        pbVar8 = pbVar8 + 1;
                    /* catch() { ... } // from try @ 00a2def4 with catch @ 00a2e124 */
                    /* catch() { ... } // from try @ 00a2dee8 with catch @ 00a2e128 */
                    /* catch() { ... } // from try @ 00a2dec8 with catch @ 00a2e12c */
        if (((uVar6 < 0x21) ||
            ((uVar6 - 0x22 < 0x3b &&
             ((1L << ((ulong)(uVar6 - 0x22) & 0x3f) & 0x400000000000021U) != 0)))) ||
           (iVar9 = iVar2, uVar6 == 0x7f)) {
          iVar9 = iVar2 + 1;
          *(undefined1 *)(lVar5 + iVar2) = 0x5c;
                    /* catch() { ... } // from try @ 00a2df00 with catch @ 00a2e13c */
        }
        *(char *)(lVar5 + iVar9) = (char)uVar6;
        uVar6 = (uint)*pbVar8;
        iVar2 = iVar9 + 1;
      } while (uVar6 != 0);
      lVar7 = (long)iVar2;
    }
    *(undefined1 *)(lVar5 + lVar7) = 0;
    (*(code *)PTR_free_01d1b748)(local_58);
    if (lVar5 == 0) {
      return 0x1b;
    }
                    /* try { // try from 00a2e194 to 00b2e1f3 has its CatchHandler @ 00a2e194
                       catch() { ... } // from try @ 00a2e194 with catch @ 00a2e194
                       catch() { ... } // from try @ 00a2e3d4 with catch @ 00a2e194 */
    iVar2 = FUN_00a2317c(uVar1,param_1,"CLIENT libcurl 7.52.1\r\nMATCH %s %s %s\r\nQUIT\r\n",pcVar12
                         ,pcVar3,lVar5);
    (*(code *)PTR_free_01d1b748)(lVar5);
joined_r0x00a2e460:
    if (iVar2 == 0) {
      FUN_00a335d8(param_1,0,0xffffffffffffffff,0,lVar10 + 0x98,0xffffffff,0);
      return 0;
    }
    FUN_00a23020(lVar10,"Failed sending DICT request");
    return iVar2;
  }
LAB_00a2e35c:
  (*(code *)PTR_free_01d1b748)(local_58);
  return 0x1b;
}

