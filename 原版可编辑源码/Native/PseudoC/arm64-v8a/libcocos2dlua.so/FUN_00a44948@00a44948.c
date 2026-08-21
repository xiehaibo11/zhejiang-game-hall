
int FUN_00a44948(long *param_1,undefined1 *param_2)

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
  iVar2 = FUN_00a4a220(pcVar11,"/MATCH:",7);
  if (((iVar2 == 0) && (iVar2 = FUN_00a4a220(pcVar11,&DAT_013c5a99,3), iVar2 == 0)) &&
     (iVar2 = FUN_00a4a220(pcVar11,"/FIND:",6), iVar2 == 0)) {
    iVar2 = FUN_00a4a220(pcVar11,"/DEFINE:",8);
    if (((iVar2 == 0) && (iVar2 = FUN_00a4a220(pcVar11,&DAT_013c5b0f,3), iVar2 == 0)) &&
       (iVar2 = FUN_00a4a220(pcVar11,"/LOOKUP:",8), iVar2 == 0)) {
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
      iVar2 = FUN_00a38b64(uVar1,param_1,"CLIENT libcurl 7.52.1\r\n%s\r\nQUIT\r\n");
      goto joined_r0x00a44e48;
    }
    pcVar11 = strchr(pcVar11,0x3a);
    if (pcVar11 == (char *)0x0) {
      pcVar12 = (char *)0x0;
LAB_00a44c54:
      FUN_00a38740(lVar10,"lookup word is missing\n");
      pcVar11 = "default";
    }
    else {
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
      if (*pcVar11 == '\0') goto LAB_00a44c54;
    }
    if ((pcVar12 == (char *)0x0) || (*pcVar12 == '\0')) {
      pcVar12 = "!";
    }
    iVar2 = FUN_00a45500(lVar10,pcVar11,0,&local_58,&local_60,0);
    if (iVar2 != 0) {
      return 0x1b;
    }
    if (local_58 == (byte *)0x0) {
      return 0x1b;
    }
    lVar5 = (*(code *)PTR_malloc_017699f8)(local_60 << 1 | 1);
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
                    /* try { // try from 00a44d34 to 00b44d7f has its CatchHandler @ 00a44d34
                       catch() { ... } // from try @ 00a44d34 with catch @ 00a44d34
                       catch() { ... } // from try @ 00a44d84 with catch @ 00a44d34 */
        } while (uVar6 != 0);
        lVar7 = (long)iVar2;
      }
                    /* try { // try from 00a44d80 to 00b44d83 has its CatchHandler @ 00a44db8 */
      *(undefined1 *)(lVar5 + lVar7) = 0;
                    /* try { // try from 00a44d84 to 00b44dcb has its CatchHandler @ 00a44d34 */
      (*(code *)PTR_free_01769a00)(local_58);
      if (lVar5 == 0) {
        return 0x1b;
      }
      iVar2 = FUN_00a38b64(uVar1,param_1,"CLIENT libcurl 7.52.1\r\nDEFINE %s %s\r\nQUIT\r\n",pcVar12
                           ,lVar5);
                    /* catch() { ... } // from try @ 00a44d80 with catch @ 00a44db8 */
      (*(code *)PTR_free_01769a00)(lVar5);
      goto joined_r0x00a44e48;
    }
    goto LAB_00a44d44;
  }
  pcVar11 = strchr(pcVar11,0x3a);
  if (pcVar11 == (char *)0x0) {
    pcVar3 = (char *)0x0;
    pcVar12 = (char *)0x0;
LAB_00a44a50:
    FUN_00a38740(lVar10,"lookup word is missing\n");
    pcVar11 = "default";
    if (pcVar12 != (char *)0x0) goto LAB_00a44a30;
LAB_00a44a6c:
                    /* try { // try from 00a44a70 to 00b44a83 has its CatchHandler @ 00a44b08 */
    pcVar12 = "!";
    if (pcVar3 == (char *)0x0) goto LAB_00a44a78;
LAB_00a44a3c:
                    /* try { // try from 00a44a3c to 00b44a6f has its CatchHandler @ 00a44b3c */
    if (*pcVar3 == '\0') goto LAB_00a44a78;
  }
  else {
    pcVar11 = pcVar11 + 1;
    pcVar3 = strchr(pcVar11,0x3a);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar12 = (char *)0x0;
      if (*pcVar11 == '\0') {
        pcVar12 = (char *)0x0;
        goto LAB_00a44a50;
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
      if (*pcVar11 == '\0') goto LAB_00a44a50;
    }
    if (pcVar12 == (char *)0x0) goto LAB_00a44a6c;
LAB_00a44a30:
    if (*pcVar12 == '\0') goto LAB_00a44a6c;
    if (pcVar3 != (char *)0x0) goto LAB_00a44a3c;
LAB_00a44a78:
    pcVar3 = ".";
  }
                    /* try { // try from 00a44a88 to 00b44abb has its CatchHandler @ 00a44b0c */
  iVar2 = FUN_00a45500(lVar10,pcVar11,0,&local_58,&local_60,0);
  if (iVar2 != 0) {
    return 0x1b;
  }
  if (local_58 == (byte *)0x0) {
    return 0x1b;
  }
                    /* try { // try from 00a44abc to 00b44b57 has its CatchHandler @ 00a4493c */
  lVar5 = (*(code *)PTR_malloc_017699f8)(local_60 << 1 | 1);
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
                    /* catch() { ... } // from try @ 00a44a70 with catch @ 00a44b08 */
                    /* catch() { ... } // from try @ 00a44a88 with catch @ 00a44b0c */
        if (((uVar6 < 0x21) ||
            ((uVar6 - 0x22 < 0x3b &&
             ((1L << ((ulong)(uVar6 - 0x22) & 0x3f) & 0x400000000000021U) != 0)))) ||
           (iVar9 = iVar2, uVar6 == 0x7f)) {
          iVar9 = iVar2 + 1;
          *(undefined1 *)(lVar5 + iVar2) = 0x5c;
        }
        *(char *)(lVar5 + iVar9) = (char)uVar6;
        uVar6 = (uint)*pbVar8;
        iVar2 = iVar9 + 1;
      } while (uVar6 != 0);
                    /* catch() { ... } // from try @ 00a44a3c with catch @ 00a44b3c */
      lVar7 = (long)iVar2;
    }
    *(undefined1 *)(lVar5 + lVar7) = 0;
    (*(code *)PTR_free_01769a00)(local_58);
    if (lVar5 == 0) {
      return 0x1b;
    }
    iVar2 = FUN_00a38b64(uVar1,param_1,"CLIENT libcurl 7.52.1\r\nMATCH %s %s %s\r\nQUIT\r\n",pcVar12
                         ,pcVar3,lVar5);
    (*(code *)PTR_free_01769a00)(lVar5);
joined_r0x00a44e48:
    if (iVar2 == 0) {
                    /* try { // try from 00a44dcc to 00b44eb3 has its CatchHandler @ 00a44dcc
                       catch() { ... } // from try @ 00a44dcc with catch @ 00a44dcc
                       catch() { ... } // from try @ 00a44f34 with catch @ 00a44dcc */
      FUN_00a49fc0(param_1,0,0xffffffffffffffff,0,lVar10 + 0x98,0xffffffff,0);
      return 0;
    }
    FUN_00a38a08(lVar10,"Failed sending DICT request");
    return iVar2;
  }
LAB_00a44d44:
  (*(code *)PTR_free_01769a00)(local_58);
  return 0x1b;
}

