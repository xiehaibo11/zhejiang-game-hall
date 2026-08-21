
void FUN_00a497a0(long param_1,char *param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  size_t __n;
  char cVar9;
  long lVar10;
  bool bVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [16];
  long local_68;
  
                    /* try { // try from 00a497a0 to 00b497b3 has its CatchHandler @ 00a49838 */
                    /* try { // try from 00a497b8 to 00b497eb has its CatchHandler @ 00a4983c */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_3 == 3) {
                    /* try { // try from 00a497ec to 00b49887 has its CatchHandler @ 00a493cc */
    if ((*(long *)(param_1 + 0x280) != -1) &&
       (*(long *)(param_1 + 0x280) <= *(long *)(param_1 + 0x278))) {
      FUN_00a38a08(param_1,"Maximum (%ld) redirects followed");
      uVar4 = 0x2f;
      goto LAB_00a49e8c;
    }
    *(undefined1 *)(param_1 + 0x8b18) = 1;
    *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x278) + 1;
    if (*(char *)(param_1 + 0x61f) != '\0') {
      if (*(char *)(param_1 + 0x920) != '\0') {
                    /* catch() { ... } // from try @ 00a497a0 with catch @ 00a49838 */
                    /* catch() { ... } // from try @ 00a497b8 with catch @ 00a4983c */
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x918));
        *(undefined8 *)(param_1 + 0x918) = 0;
        *(undefined1 *)(param_1 + 0x920) = 0;
      }
      lVar5 = (*(code *)PTR_strdup_01769a10)(*(undefined8 *)(param_1 + 0x908));
      *(long *)(param_1 + 0x918) = lVar5;
      if (lVar5 == 0) goto LAB_00a49a2c;
                    /* catch() { ... } // from try @ 00a4976c with catch @ 00a4986c */
      *(undefined1 *)(param_1 + 0x920) = 1;
    }
  }
  iVar3 = sscanf(param_2,"%15[^?&/:]://%c",auStack_78,auStack_7c);
  if (iVar3 == 2) {
    lVar5 = 0;
    bVar11 = true;
    pcVar7 = param_2;
LAB_00a498ac:
    for (; cVar9 = *pcVar7, cVar9 == ' '; pcVar7 = pcVar7 + 1) {
      if (!bVar11) {
        bVar11 = false;
        lVar10 = lVar5;
        goto LAB_00a498a4;
      }
      lVar5 = lVar5 + 3;
      bVar11 = true;
    }
    if (cVar9 == '?') {
      bVar11 = false;
    }
    else if (cVar9 == '\0') goto LAB_00a4995c;
    lVar10 = lVar5 + 2;
    if (-1 < cVar9) {
      lVar10 = lVar5;
    }
LAB_00a498a4:
    lVar5 = lVar10 + 1;
    pcVar7 = pcVar7 + 1;
    goto LAB_00a498ac;
  }
  pcVar6 = (char *)(*(code *)PTR_strdup_01769a10)(*(undefined8 *)(param_1 + 0x908));
  if (pcVar6 != (char *)0x0) {
    pcVar7 = strstr(pcVar6,"//");
    cVar9 = *param_2;
    pcVar12 = pcVar6;
    if (pcVar7 != (char *)0x0) {
      pcVar12 = pcVar7 + 2;
    }
    pcVar13 = param_2;
    if (cVar9 == '/') {
      if (param_2[1] == '/') {
        *pcVar12 = '\0';
        pcVar13 = param_2 + 2;
      }
      else {
        pcVar8 = strchr(pcVar12,0x2f);
        pcVar7 = strchr(pcVar12,0x3f);
        if (pcVar8 == (char *)0x0) {
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
          }
        }
        else {
          if (pcVar7 == (char *)0x0 || pcVar8 <= pcVar7) {
            pcVar7 = pcVar8;
          }
          *pcVar7 = '\0';
        }
      }
    }
    else {
      pcVar7 = strchr(pcVar12,0x3f);
      if (pcVar7 != (char *)0x0) {
        *pcVar7 = '\0';
        cVar9 = *param_2;
      }
      if ((cVar9 != '?') && (pcVar7 = strrchr(pcVar12,0x2f), pcVar7 != (char *)0x0)) {
        *pcVar7 = '\0';
        cVar9 = *param_2;
      }
      pcVar7 = strchr(pcVar12,0x2f);
      pcVar12 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        pcVar12 = pcVar7 + 1;
      }
      if (cVar9 == '.') {
        pcVar13 = param_2 + 2;
        if (param_2[1] != '/') {
          pcVar13 = param_2;
        }
        if (*pcVar13 == '.') {
          iVar3 = 0;
          do {
            if ((pcVar13[1] != '.') || (pcVar13[2] != '/')) break;
            pcVar13 = pcVar13 + 3;
            iVar3 = iVar3 + 1;
          } while (*pcVar13 == '.');
        }
        else {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0;
      }
      if (pcVar7 == (char *)0x0) {
        pcVar12 = (char *)0x0;
      }
      else if (iVar3 == 0) {
        pcVar12 = pcVar7 + 1;
      }
      else {
        do {
          pcVar7 = strrchr(pcVar12,0x2f);
          if (pcVar7 == (char *)0x0) {
            *pcVar12 = '\0';
            break;
          }
          iVar3 = iVar3 + -1;
          *pcVar7 = '\0';
        } while (iVar3 != 0);
      }
    }
    lVar5 = 0;
    bVar11 = true;
    pcVar7 = pcVar13;
LAB_00a49bac:
    while (cVar9 = *pcVar7, cVar9 == ' ') {
      if (bVar11) {
        lVar5 = lVar5 + 3;
        bVar11 = true;
        pcVar7 = pcVar7 + 1;
      }
      else {
        bVar11 = false;
        lVar5 = lVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    if (cVar9 == '?') {
      bVar11 = false;
    }
    else if (cVar9 == '\0') goto LAB_00a49bf4;
    lVar10 = lVar5 + 2;
    if (-1 < cVar9) {
      lVar10 = lVar5;
    }
    lVar5 = lVar10 + 1;
    pcVar7 = pcVar7 + 1;
    goto LAB_00a49bac;
  }
  goto LAB_00a49a2c;
LAB_00a49bf4:
  __n = strlen(pcVar6);
  pcVar7 = (char *)(*(code *)PTR_malloc_017699f8)(lVar5 + __n + 1 + 1);
  if (pcVar7 == (char *)0x0) {
    (*(code *)PTR_free_01769a00)(pcVar6);
    uVar4 = 0x1b;
    goto LAB_00a49e8c;
  }
  memcpy(pcVar7,pcVar6,__n);
  cVar9 = *pcVar13;
  if (cVar9 != '/') {
    if (pcVar12 == (char *)0x0) {
      if (cVar9 != '?') goto LAB_00a49c58;
    }
    else if ((cVar9 != '?') && (*pcVar12 != '\0')) {
LAB_00a49c58:
      pcVar7[__n] = '/';
      __n = __n + 1;
    }
  }
  bVar11 = true;
  pcVar12 = pcVar7 + __n;
LAB_00a49c94:
  while( true ) {
    while (cVar9 = *pcVar13, cVar9 == ' ') {
      if (bVar11) {
        pcVar12[0] = '%';
        pcVar12[1] = '2';
        pcVar12[2] = '0';
        bVar11 = true;
        pcVar13 = pcVar13 + 1;
        pcVar12 = pcVar12 + 3;
      }
      else {
        bVar11 = false;
        *pcVar12 = '+';
        pcVar13 = pcVar13 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    if (cVar9 != '?') break;
    bVar11 = false;
    cVar9 = '?';
LAB_00a49c7c:
    *pcVar12 = cVar9;
    pcVar13 = pcVar13 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (cVar9 != '\0') {
    if (-1 < cVar9) goto LAB_00a49c7c;
    FUN_00a241ac(pcVar12,4,&DAT_013c6a4d);
    pcVar13 = pcVar13 + 1;
    pcVar12 = pcVar12 + 3;
    goto LAB_00a49c94;
  }
  *pcVar12 = '\0';
  (*(code *)PTR_free_01769a00)(pcVar6);
  (*(code *)PTR_free_01769a00)(param_2);
  bVar11 = false;
LAB_00a49d30:
  if (param_3 == 1) {
    uVar4 = 0;
    *(char **)(param_1 + 0x8db8) = pcVar7;
    goto LAB_00a49e8c;
  }
  if (bVar11) {
    *(undefined1 *)(param_1 + 0x8b70) = 0;
  }
  if (*(char *)(param_1 + 0x910) != '\0') {
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x908));
    *(undefined8 *)(param_1 + 0x908) = 0;
    *(undefined1 *)(param_1 + 0x910) = 0;
  }
  *(char **)(param_1 + 0x908) = pcVar7;
  *(undefined1 *)(param_1 + 0x910) = 1;
  FUN_00a38740(param_1,"Issue another request to this URL: \'%s\'\n",pcVar7);
  iVar3 = *(int *)(param_1 + 0x8d68);
  if (iVar3 == 0x12f) {
                    /* try { // try from 00a49e04 to 00b49e4f has its CatchHandler @ 00a49e04
                       catch() { ... } // from try @ 00a49e04 with catch @ 00a49e04
                       catch() { ... } // from try @ 00a49e54 with catch @ 00a49e04 */
    if ((*(int *)(param_1 + 0x430) != 1) && ((*(byte *)(param_1 + 0x288) >> 2 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x430) = 1;
      pcVar7 = "HEAD";
      if (*(char *)(param_1 + 0x620) == '\0') {
        pcVar7 = "GET";
      }
      FUN_00a38740(param_1,"Disables POST, goes with %s\n",pcVar7);
    }
  }
  else if (iVar3 == 0x12e) {
                    /* try { // try from 00a49e50 to 00b49e53 has its CatchHandler @ 00a49e88 */
    if ((*(uint *)(param_1 + 0x430) & 0xfffffffe) == 2) {
                    /* try { // try from 00a49e54 to 00b49e9b has its CatchHandler @ 00a49e04 */
      bVar1 = *(byte *)(param_1 + 0x288) >> 1;
      goto joined_r0x00a49e58;
    }
  }
  else if ((iVar3 == 0x12d) && ((*(uint *)(param_1 + 0x430) & 0xfffffffe) == 2)) {
    bVar1 = *(byte *)(param_1 + 0x288);
joined_r0x00a49e58:
    if ((bVar1 & 1) == 0) {
      FUN_00a38740(param_1,"Switch from POST to GET\n");
      *(undefined4 *)(param_1 + 0x430) = 1;
    }
  }
  FUN_00a30f04(param_1,10);
  FUN_00a30e84(param_1);
                    /* catch() { ... } // from try @ 00a49e50 with catch @ 00a49e88 */
  uVar4 = 0;
  goto LAB_00a49e8c;
LAB_00a4995c:
  pcVar7 = (char *)(*(code *)PTR_malloc_017699f8)(lVar5 + 1);
  if (pcVar7 != (char *)0x0) {
    bVar11 = true;
    pcVar12 = pcVar7;
    pcVar6 = param_2;
LAB_00a499bc:
    while( true ) {
      while (cVar9 = *pcVar6, cVar9 == ' ') {
        if (bVar11) {
          pcVar12[0] = '%';
          pcVar12[1] = '2';
          pcVar12[2] = '0';
          bVar11 = true;
          pcVar6 = pcVar6 + 1;
          pcVar12 = pcVar12 + 3;
        }
        else {
          bVar11 = false;
          *pcVar12 = '+';
          pcVar6 = pcVar6 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      if (cVar9 != '?') break;
      bVar11 = false;
      cVar9 = '?';
LAB_00a499a4:
      *pcVar12 = cVar9;
      pcVar6 = pcVar6 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if (cVar9 != '\0') {
      if (-1 < cVar9) goto LAB_00a499a4;
      FUN_00a241ac(pcVar12,4,&DAT_013c6a4d);
      pcVar6 = pcVar6 + 1;
      pcVar12 = pcVar12 + 3;
      goto LAB_00a499bc;
    }
    *pcVar12 = '\0';
    (*(code *)PTR_free_01769a00)(param_2);
    bVar11 = true;
    goto LAB_00a49d30;
  }
LAB_00a49a2c:
  uVar4 = 0x1b;
LAB_00a49e8c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
                    /* try { // try from 00a49e9c to 00b49fcb has its CatchHandler @ 00a49e9c
                       catch() { ... } // from try @ 00a49e9c with catch @ 00a49e9c
                       catch() { ... } // from try @ 00a4a04c with catch @ 00a49e9c */
  return;
}

