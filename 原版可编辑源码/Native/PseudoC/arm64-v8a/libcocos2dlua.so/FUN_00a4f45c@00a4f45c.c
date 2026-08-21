
/* WARNING: Type propagation algorithm not settling */

int FUN_00a4f45c(long *param_1,char *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  char cVar11;
  char *pcVar12;
  char cVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  *param_2 = '\0';
  lVar15 = *param_1;
  lVar9 = 0;
  lVar16 = *(long *)(lVar15 + 0x218);
  pcVar7 = *(char **)(lVar15 + 0x8cc0);
  do {
    switch(pcVar7[lVar9]) {
    case '!':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
    case '=':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '_':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
    case '~':
      lVar9 = lVar9 + 1;
      break;
    default:
      goto switchD_00a4f4c4_caseD_22;
    }
  } while( true );
switchD_00a4f5b0_caseD_22:
  iVar3 = FUN_00a45500(lVar15,pcVar7,(long)pcVar6 - (long)pcVar7,&local_70,&local_78,1);
  if (iVar3 != 0) {
    (*(code *)PTR_free_01769a00)(local_68);
    return iVar3;
  }
  iVar3 = FUN_00a4a0f8(local_68,"UIDVALIDITY");
  if ((iVar3 == 0) || (*(long *)(lVar16 + 0x10) != 0)) {
    iVar3 = FUN_00a4a0f8(local_68,"UID");
    if ((iVar3 == 0) || (*(long *)(lVar16 + 0x18) != 0)) {
      iVar3 = FUN_00a4a0f8(local_68,"SECTION");
      if ((iVar3 == 0) || (*(long *)(lVar16 + 0x20) != 0)) {
        iVar3 = FUN_00a4a0f8(local_68,"PARTIAL");
        if ((iVar3 == 0) || (*(long *)(lVar16 + 0x28) != 0)) {
                    /* catch() { ... } // from try @ 00a4f8a8 with catch @ 00a4f920 */
          (*(code *)PTR_free_01769a00)(local_68);
          (*(code *)PTR_free_01769a00)(local_70);
          return 3;
        }
        if ((local_78 != 0) && (*(char *)(local_70 + local_78 + -1) == '/')) {
          *(undefined1 *)(local_70 + local_78 + -1) = 0;
        }
        *(long *)(lVar16 + 0x28) = local_70;
      }
      else {
        if ((local_78 != 0) && (*(char *)(local_70 + local_78 + -1) == '/')) {
                    /* try { // try from 00a4f6dc to 00b4f6e7 has its CatchHandler @ 00a4f6f8 */
          *(undefined1 *)(local_70 + local_78 + -1) = 0;
        }
        *(long *)(lVar16 + 0x20) = local_70;
      }
    }
    else {
      if ((local_78 != 0) && (*(char *)(local_70 + local_78 + -1) == '/')) {
        *(undefined1 *)(local_70 + local_78 + -1) = 0;
      }
      *(long *)(lVar16 + 0x18) = local_70;
    }
  }
  else {
    if ((local_78 != 0) && (*(char *)(local_70 + local_78 + -1) == '/')) {
      *(undefined1 *)(local_70 + local_78 + -1) = 0;
    }
    *(long *)(lVar16 + 0x10) = local_70;
  }
  local_70 = 0;
  (*(code *)PTR_free_01769a00)(local_68);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4f6dc with catch @ 00a4f6f8
                        */
  (*(code *)PTR_free_01769a00)(local_70);
  cVar11 = *pcVar6;
  goto joined_r0x00a4f51c;
switchD_00a4f75c_caseD_22:
  iVar3 = FUN_00a45500(lVar15,pcVar6,(long)pcVar7 - (long)pcVar6,lVar16 + 0x30,0,1);
  if (iVar3 != 0) {
    return iVar3;
  }
  cVar11 = *pcVar7;
  goto LAB_00a4f784;
switchD_00a4f4c4_caseD_22:
  pcVar6 = pcVar7 + lVar9;
  if (lVar9 == 0) {
    *(undefined8 *)(lVar16 + 8) = 0;
  }
  else {
    pcVar12 = pcVar6;
    if ((pcVar7 < pcVar6) && (pcVar12 = pcVar7 + lVar9 + -1, pcVar7[lVar9 + -1] != '/')) {
      pcVar12 = pcVar6;
    }
    iVar3 = FUN_00a45500(lVar15,pcVar7,(long)pcVar12 - (long)pcVar7,lVar16 + 8,0,1);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  cVar11 = *pcVar6;
joined_r0x00a4f51c:
  if (cVar11 == ';') {
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar6;
    do {
      pcVar12 = pcVar7;
      pcVar7 = pcVar12 + 1;
      cVar11 = *pcVar12;
      if (cVar11 == '=') break;
    } while (cVar11 != '\0');
    if (cVar11 == '\0') {
      return 3;
    }
    iVar3 = FUN_00a45500(lVar15,pcVar6,(long)pcVar12 - (long)pcVar6,&local_68,0,1);
    pcVar6 = pcVar7;
    if (iVar3 != 0) {
      return iVar3;
    }
    do {
      switch(*pcVar6) {
      case '!':
      case '$':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
      case '*':
      case '+':
      case ',':
      case '-':
      case '.':
      case '/':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ':':
      case '=':
      case '@':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
      case 'G':
      case 'H':
      case 'I':
      case 'J':
      case 'K':
      case 'L':
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '_':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
      case '~':
        pcVar6 = pcVar6 + 1;
        break;
      default:
        goto switchD_00a4f5b0_caseD_22;
      }
    } while( true );
  }
  if (((*(long *)(lVar16 + 8) != 0) && (cVar11 == '?')) && (*(long *)(lVar16 + 0x18) == 0)) {
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar6;
                    /* try { // try from 00a4f734 to 00b4f73f has its CatchHandler @ 00a4f750 */
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4f734 with catch @ 00a4f750
                        */
      switch(*pcVar7) {
      case '!':
      case '$':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
      case '*':
      case '+':
      case ',':
      case '-':
      case '.':
      case '/':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ':':
      case '=':
      case '@':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
      case 'G':
      case 'H':
      case 'I':
      case 'J':
      case 'K':
      case 'L':
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '_':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
      case '~':
        pcVar7 = pcVar7 + 1;
        break;
      default:
        goto switchD_00a4f75c_caseD_22;
      }
    } while( true );
  }
LAB_00a4f784:
  if (cVar11 != '\0') {
    return 3;
  }
  lVar9 = *param_1;
                    /* try { // try from 00a4f78c to 00b4f797 has its CatchHandler @ 00a4f7b0 */
  if (*(long *)(lVar9 + 0x6a0) != 0) {
    lVar15 = *(long *)(lVar9 + 0x218);
    iVar3 = FUN_00a45500(lVar9,*(long *)(lVar9 + 0x6a0),0,(long *)(lVar15 + 0x38),0,1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4f78c with catch @ 00a4f7b0
                        */
    if (iVar3 != 0) {
      return iVar3;
    }
    pcVar7 = (char *)(*(long *)(lVar15 + 0x38) + -1);
    do {
      pcVar7 = pcVar7 + 1;
      cVar11 = *pcVar7;
      if (cVar11 == ' ') break;
    } while (cVar11 != '\0');
    if (cVar11 != '\0') {
      uVar4 = (*(code *)PTR_strdup_01769a10)(pcVar7);
      *(undefined8 *)(lVar15 + 0x40) = uVar4;
                    /* try { // try from 00a4f7ec to 00b4f7f7 has its CatchHandler @ 00a4f810 */
      *pcVar7 = '\0';
      if (*(long *)(lVar15 + 0x40) == 0) {
        return 0x1b;
      }
    }
  }
  lVar9 = *param_1;
  *(undefined8 *)(lVar9 + 0x78) = 0xffffffffffffffff;
  FUN_00a3112c(lVar9,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4f7ec with catch @ 00a4f810
                        */
  FUN_00a31094(lVar9,0);
                    /* catch() { ... } // from try @ 00a4f874 with catch @ 00a4f824
                       catch() { ... } // from try @ 00a4f8bc with catch @ 00a4f824 */
  FUN_00a30ed8(lVar9,0xffffffffffffffff);
  FUN_00a30eac(lVar9,0xffffffffffffffff);
  lVar9 = *param_1;
  puVar14 = *(undefined4 **)(lVar9 + 0x218);
  if (*(char *)(lVar9 + 0x620) != '\0') {
    *puVar14 = 1;
  }
  *param_2 = '\0';
  pcVar7 = *(char **)(puVar14 + 2);
  if ((((pcVar7 == (char *)0x0) || ((char *)param_1[0xd8] == (char *)0x0)) ||
      (iVar3 = strcmp(pcVar7,(char *)param_1[0xd8]), iVar3 != 0)) ||
     (((*(char **)(puVar14 + 4) != (char *)0x0 && ((char *)param_1[0xd9] != (char *)0x0)) &&
      (iVar3 = strcmp(*(char **)(puVar14 + 4),(char *)param_1[0xd9]), iVar3 != 0)))) {
                    /* try { // try from 00a4f86c to 00b4f873 has its CatchHandler @ 00a4f904 */
    bVar2 = false;
                    /* try { // try from 00a4f874 to 00b4f8a7 has its CatchHandler @ 00a4f824 */
    if (*(char *)(lVar9 + 0x621) != '\0') goto LAB_00a4f878;
LAB_00a4fa34:
    if (*(long *)(puVar14 + 0xe) == 0) {
      if (!bVar2) {
        if (pcVar7 != (char *)0x0) {
          if ((*(long *)(puVar14 + 6) != 0) || (*(long *)(puVar14 + 0xc) != 0)) goto LAB_00a4fb58;
LAB_00a4fe04:
          lVar9 = 0;
          lVar15 = 0;
          pcVar6 = pcVar7;
          do {
            for (; cVar11 = *pcVar6, cVar11 == '\"'; pcVar6 = pcVar6 + 1) {
              lVar15 = lVar15 + 1;
            }
            if (cVar11 == '\\') {
              lVar9 = lVar9 + 1;
            }
            else if (cVar11 == '\0') {
              if (lVar15 == 0 && lVar9 == 0) goto LAB_00a4fe5c;
              sVar5 = strlen(pcVar7);
              lVar9 = lVar15 + lVar9 + sVar5;
              pcVar12 = (char *)(*(code *)PTR_malloc_017699f8)(lVar9 + 1);
                    /* try { // try from 00a4fecc to 00b4fee3 has its CatchHandler @ 00a4ff58 */
              pcVar6 = pcVar12;
              if (pcVar12 == (char *)0x0) {
                return 0x1b;
              }
              do {
                cVar11 = *pcVar7;
                if ((cVar11 == '\"') || (cVar11 == '\\')) {
                  pcVar10 = pcVar6 + 1;
                  *pcVar6 = '\\';
                  cVar11 = *pcVar7;
                }
                else {
                  pcVar10 = pcVar6;
                  if (cVar11 == '\0') {
                    pcVar12[lVar9] = '\0';
                    goto LAB_00a4fe6c;
                  }
                }
                *pcVar10 = cVar11;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar10 + 1;
              } while( true );
            }
            pcVar6 = pcVar6 + 1;
          } while( true );
        }
LAB_00a4fe4c:
                    /* try { // try from 00a4fe4c to 00b4fe63 has its CatchHandler @ 00a4ff5c */
        pcVar7 = "";
LAB_00a4fe5c:
        pcVar12 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar7);
        if (pcVar12 == (char *)0x0) {
          return 0x1b;
        }
LAB_00a4fe6c:
        iVar3 = FUN_00a51878(param_1,&DAT_013c86e6,pcVar12);
        (*(code *)PTR_free_01769a00)(pcVar12);
        goto joined_r0x00a4fe98;
      }
      lVar9 = *(long *)(puVar14 + 6);
      if (lVar9 == 0) {
        if (*(long *)(puVar14 + 0xc) == 0) {
          if (pcVar7 != (char *)0x0) goto LAB_00a4fe04;
          goto LAB_00a4fe4c;
        }
                    /* try { // try from 00a4fd18 to 00b4fd2f has its CatchHandler @ 00a4ff98 */
        iVar3 = FUN_00a51878(param_1,"SEARCH %s");
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar8 = 0xd;
      }
      else {
        puVar1 = *(undefined1 **)(puVar14 + 8);
        if (*(undefined1 **)(puVar14 + 8) == (undefined1 *)0x0) {
          puVar1 = &DAT_013c996e;
        }
        if (*(long *)(puVar14 + 10) == 0) {
                    /* try { // try from 00a4fd3c to 00b4fd7b has its CatchHandler @ 00a4ff78 */
          iVar3 = FUN_00a51878(param_1,"FETCH %s BODY[%s]",lVar9,puVar1);
        }
        else {
          iVar3 = FUN_00a51878(param_1,"FETCH %s BODY[%s]<%s>",lVar9,puVar1);
        }
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar8 = 9;
      }
    }
    else if ((bool)(pcVar7 == (char *)0x0 | bVar2)) {
      puVar1 = &DAT_013c996e;
      if (*(undefined1 **)(puVar14 + 0x10) != (undefined1 *)0x0) {
        puVar1 = *(undefined1 **)(puVar14 + 0x10);
      }
      iVar3 = FUN_00a51878(param_1,"%s%s",*(long *)(puVar14 + 0xe),puVar1);
joined_r0x00a4fe98:
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar8 = 7;
    }
    else {
LAB_00a4fb58:
      (*(code *)PTR_free_01769a00)(param_1[0xd8]);
      param_1[0xd8] = 0;
      (*(code *)PTR_free_01769a00)(param_1[0xd9]);
      param_1[0xd9] = 0;
      pcVar7 = *(char **)(puVar14 + 2);
      if (pcVar7 == (char *)0x0) {
        lVar9 = *param_1;
        pcVar7 = "Cannot SELECT without a mailbox.";
LAB_00a4f9e4:
        FUN_00a38a08(lVar9,pcVar7);
        return 3;
      }
      lVar15 = 0;
      lVar9 = 0;
      bVar2 = false;
      pcVar6 = pcVar7;
      while( true ) {
        while( true ) {
          for (; cVar11 = *pcVar6, cVar11 == '\"'; pcVar6 = pcVar6 + 1) {
            lVar9 = lVar9 + 1;
          }
          if (cVar11 != '\\') break;
          lVar15 = lVar15 + 1;
          pcVar6 = pcVar6 + 1;
        }
        if (cVar11 == '\0') break;
        if (bVar2) {
          bVar2 = true;
          pcVar6 = pcVar6 + 1;
        }
        else {
          cVar13 = '(';
          pcVar12 = "(){ %*]";
          do {
            pcVar12 = pcVar12 + 1;
            bVar2 = cVar11 == cVar13;
            cVar13 = *pcVar12;
            if (bVar2) break;
          } while (cVar13 != '\0');
          pcVar6 = pcVar6 + 1;
        }
      }
      if (bVar2 || (lVar9 != 0 || lVar15 != 0)) {
        sVar5 = strlen(pcVar7);
        lVar16 = 2;
        if (!bVar2) {
          lVar16 = 0;
        }
        lVar9 = lVar9 + lVar15 + lVar16 + sVar5;
        pcVar6 = (char *)(*(code *)PTR_malloc_017699f8)(lVar9 + 1);
        if (pcVar6 == (char *)0x0) {
          return 0x1b;
        }
        pcVar12 = pcVar6;
        if (bVar2) {
          pcVar12 = pcVar6 + 1;
          *pcVar6 = '\"';
          pcVar6[lVar9 + -1] = '\"';
        }
        do {
          cVar11 = *pcVar7;
          if ((cVar11 == '\"') || (cVar11 == '\\')) {
            pcVar10 = pcVar12 + 1;
            *pcVar12 = '\\';
            cVar11 = *pcVar7;
          }
          else {
            pcVar10 = pcVar12;
            if (cVar11 == '\0') {
              pcVar6[lVar9] = '\0';
              goto LAB_00a4fce0;
            }
          }
          *pcVar10 = cVar11;
          pcVar7 = pcVar7 + 1;
          pcVar12 = pcVar10 + 1;
        } while( true );
      }
                    /* try { // try from 00a4fcc0 to 00b4fd17 has its CatchHandler @ 00a4fcc0
                       catch() { ... } // from try @ 00a4fcc0 with catch @ 00a4fcc0
                       catch() { ... } // from try @ 00a4fee4 with catch @ 00a4fcc0 */
      pcVar6 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar7);
      if (pcVar6 == (char *)0x0) {
        return 0x1b;
      }
LAB_00a4fce0:
      iVar3 = FUN_00a51878(param_1,"SELECT %s",pcVar6);
      (*(code *)PTR_free_01769a00)(pcVar6);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar8 = 8;
    }
  }
  else {
    bVar2 = true;
    if (*(char *)(lVar9 + 0x621) == '\0') goto LAB_00a4fa34;
LAB_00a4f878:
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "Cannot APPEND without a mailbox.";
      goto LAB_00a4f9e4;
    }
    if (*(long *)(lVar9 + 0x8cf8) < 0) {
      FUN_00a38a08(lVar9,"Cannot APPEND with unknown input file size\n");
      return 0x19;
    }
    lVar15 = 0;
    lVar9 = 0;
    bVar2 = false;
    pcVar6 = pcVar7;
    while( true ) {
      while( true ) {
                    /* try { // try from 00a4f8bc to 00b4f93b has its CatchHandler @ 00a4f824 */
        for (; cVar11 = *pcVar6, cVar11 == '\"'; pcVar6 = pcVar6 + 1) {
          lVar9 = lVar9 + 1;
        }
        if (cVar11 != '\\') break;
        lVar15 = lVar15 + 1;
        pcVar6 = pcVar6 + 1;
      }
      if (cVar11 == '\0') break;
      if (bVar2) {
        bVar2 = true;
        pcVar6 = pcVar6 + 1;
      }
      else {
        cVar13 = '(';
        pcVar12 = "(){ %*]";
        do {
          pcVar12 = pcVar12 + 1;
          bVar2 = cVar11 == cVar13;
          cVar13 = *pcVar12;
          if (bVar2) break;
        } while (cVar13 != '\0');
        pcVar6 = pcVar6 + 1;
                    /* try { // try from 00a4f8a8 to 00b4f8bb has its CatchHandler @ 00a4f920 */
      }
    }
    if (bVar2 || (lVar9 != 0 || lVar15 != 0)) {
      sVar5 = strlen(pcVar7);
      lVar16 = 2;
      if (!bVar2) {
        lVar16 = 0;
      }
      lVar9 = lVar9 + lVar15 + lVar16 + sVar5;
      pcVar6 = (char *)(*(code *)PTR_malloc_017699f8)(lVar9 + 1);
      if (pcVar6 == (char *)0x0) {
        return 0x1b;
      }
      pcVar12 = pcVar6;
      if (bVar2) {
        pcVar12 = pcVar6 + 1;
        *pcVar6 = '\"';
        pcVar6[lVar9 + -1] = '\"';
      }
      do {
        cVar11 = *pcVar7;
        if ((cVar11 == '\"') || (cVar11 == '\\')) {
          pcVar10 = pcVar12 + 1;
          *pcVar12 = '\\';
          cVar11 = *pcVar7;
        }
        else {
          pcVar10 = pcVar12;
          if (cVar11 == '\0') {
            pcVar6[lVar9] = '\0';
            goto LAB_00a4fb00;
          }
        }
        *pcVar10 = cVar11;
        pcVar7 = pcVar7 + 1;
        pcVar12 = pcVar10 + 1;
      } while( true );
    }
    pcVar6 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar7);
    if (pcVar6 == (char *)0x0) {
      return 0x1b;
    }
LAB_00a4fb00:
    iVar3 = FUN_00a51878(param_1,"APPEND %s (\\Seen) {%ld}",pcVar6,
                         *(undefined8 *)(*param_1 + 0x8cf8));
    (*(code *)PTR_free_01769a00)(pcVar6);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar8 = 0xb;
  }
  *(undefined4 *)(param_1 + 0xd1) = uVar8;
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar7 = (char *)((long)param_1 + 0x68c), *pcVar7 == '\0')) {
                    /* try { // try from 00a4fde0 to 00b4fe23 has its CatchHandler @ 00a4ff6c */
    iVar3 = FUN_00a2d674(param_1,0,pcVar7);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*pcVar7 == '\0') {
      if (*param_2 == '\0') {
        return 0;
      }
      goto LAB_00a4fd9c;
    }
  }
  iVar3 = FUN_00a54a20(param_1 + 0xc3,0);
  bVar2 = (int)param_1[0xd1] == 0;
  *param_2 = bVar2;
  if (iVar3 != 0) {
    return iVar3;
  }
  if (!bVar2) {
    return 0;
  }
LAB_00a4fd9c:
                    /* try { // try from 00a4fda0 to 00b4fdb7 has its CatchHandler @ 00a4ff74 */
  if (**(int **)(*param_1 + 0x218) != 0) {
                    /* try { // try from 00a4fdc4 to 00b4fddb has its CatchHandler @ 00a4ff70 */
    FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  return 0;
}

