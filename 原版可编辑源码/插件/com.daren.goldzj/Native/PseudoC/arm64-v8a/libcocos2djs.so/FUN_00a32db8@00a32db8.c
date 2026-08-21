
void FUN_00a32db8(long param_1,char *param_2,int param_3)

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
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a32df0 to 00b32ed3 has its CatchHandler @ 00a32c38 */
  if (param_3 == 3) {
    if ((*(long *)(param_1 + 0x280) != -1) &&
       (*(long *)(param_1 + 0x280) <= *(long *)(param_1 + 0x278))) {
      FUN_00a23020(param_1,"Maximum (%ld) redirects followed");
      uVar4 = 0x2f;
      goto LAB_00a334a4;
    }
    *(undefined1 *)(param_1 + 0x8b18) = 1;
    *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x278) + 1;
    if (*(char *)(param_1 + 0x61f) != '\0') {
      if (*(char *)(param_1 + 0x920) != '\0') {
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x918));
        *(undefined8 *)(param_1 + 0x918) = 0;
                    /* catch() { ... } // from try @ 00a32cb8 with catch @ 00a32e64 */
        *(undefined1 *)(param_1 + 0x920) = 0;
      }
                    /* catch() { ... } // from try @ 00a32cac with catch @ 00a32e68 */
                    /* catch() { ... } // from try @ 00a32c8c with catch @ 00a32e6c */
      lVar5 = (*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(param_1 + 0x908));
                    /* catch() { ... } // from try @ 00a32cc4 with catch @ 00a32e7c */
      *(long *)(param_1 + 0x918) = lVar5;
      if (lVar5 == 0) goto LAB_00a33044;
      *(undefined1 *)(param_1 + 0x920) = 1;
    }
  }
  iVar3 = sscanf(param_2,"%15[^?&/:]://%c",auStack_78,auStack_7c);
  if (iVar3 == 2) {
    lVar5 = 0;
    bVar11 = true;
    pcVar7 = param_2;
LAB_00a32ec4:
    for (; cVar9 = *pcVar7, cVar9 == ' '; pcVar7 = pcVar7 + 1) {
      if (!bVar11) {
        bVar11 = false;
        lVar10 = lVar5;
        goto LAB_00a32ebc;
      }
      lVar5 = lVar5 + 3;
      bVar11 = true;
    }
                    /* try { // try from 00a32ed4 to 00b32f27 has its CatchHandler @ 00a32ed4
                       catch() { ... } // from try @ 00a32ed4 with catch @ 00a32ed4
                       catch() { ... } // from try @ 00a33090 with catch @ 00a32ed4 */
    if (cVar9 == '?') {
      bVar11 = false;
    }
    else if (cVar9 == '\0') goto LAB_00a32f74;
    lVar10 = lVar5 + 2;
    if (-1 < cVar9) {
      lVar10 = lVar5;
    }
LAB_00a32ebc:
    lVar5 = lVar10 + 1;
    pcVar7 = pcVar7 + 1;
    goto LAB_00a32ec4;
  }
  pcVar6 = (char *)(*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(param_1 + 0x908));
                    /* try { // try from 00a32f28 to 00b32f3f has its CatchHandler @ 00a3310c */
  if (pcVar6 != (char *)0x0) {
    pcVar7 = strstr(pcVar6,"//");
    cVar9 = *param_2;
                    /* try { // try from 00a32f48 to 00b32f53 has its CatchHandler @ 00a33108 */
    pcVar12 = pcVar6;
    if (pcVar7 != (char *)0x0) {
      pcVar12 = pcVar7 + 2;
    }
                    /* try { // try from 00a32f54 to 00b32f5f has its CatchHandler @ 00a33104 */
    pcVar13 = param_2;
    if (cVar9 == '/') {
                    /* try { // try from 00a32f60 to 00b3308f has its CatchHandler @ 00a3311c */
      if (param_2[1] == '/') {
        *pcVar12 = '\0';
        pcVar13 = param_2 + 2;
      }
      else {
                    /* catch() { ... } // from try @ 00a32f28 with catch @ 00a3310c */
        pcVar8 = strchr(pcVar12,0x2f);
                    /* catch() { ... } // from try @ 00a32f60 with catch @ 00a3311c */
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
                    /* try { // try from 00a33090 to 00b33173 has its CatchHandler @ 00a32ed4 */
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
                    /* catch() { ... } // from try @ 00a32f54 with catch @ 00a33104 */
          } while (*pcVar13 == '.');
        }
        else {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0;
      }
                    /* try { // try from 00a33174 to 00b331c7 has its CatchHandler @ 00a33174
                       catch() { ... } // from try @ 00a33174 with catch @ 00a33174
                       catch() { ... } // from try @ 00a3332c with catch @ 00a33174 */
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
LAB_00a331c4:
                    /* try { // try from 00a331c8 to 00b331df has its CatchHandler @ 00a333a8 */
    while (cVar9 = *pcVar7, cVar9 == ' ') {
      if (bVar11) {
        lVar5 = lVar5 + 3;
                    /* try { // try from 00a331e8 to 00b331f3 has its CatchHandler @ 00a333a4 */
        bVar11 = true;
        pcVar7 = pcVar7 + 1;
      }
      else {
        bVar11 = false;
                    /* try { // try from 00a33200 to 00b3332b has its CatchHandler @ 00a333b8 */
        lVar5 = lVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    if (cVar9 == '?') {
                    /* try { // try from 00a331f4 to 00b331ff has its CatchHandler @ 00a333a0 */
      bVar11 = false;
    }
    else if (cVar9 == '\0') goto LAB_00a3320c;
    lVar10 = lVar5 + 2;
    if (-1 < cVar9) {
      lVar10 = lVar5;
    }
    lVar5 = lVar10 + 1;
    pcVar7 = pcVar7 + 1;
    goto LAB_00a331c4;
  }
  goto LAB_00a33044;
LAB_00a3320c:
  __n = strlen(pcVar6);
  pcVar7 = (char *)(*(code *)PTR_malloc_01d1b740)(lVar5 + __n + 1 + 1);
  if (pcVar7 == (char *)0x0) {
    (*(code *)PTR_free_01d1b748)(pcVar6);
    uVar4 = 0x1b;
    goto LAB_00a334a4;
  }
  memcpy(pcVar7,pcVar6,__n);
  cVar9 = *pcVar13;
  if (cVar9 != '/') {
    if (pcVar12 == (char *)0x0) {
      if (cVar9 != '?') goto LAB_00a33270;
    }
    else if ((cVar9 != '?') && (*pcVar12 != '\0')) {
LAB_00a33270:
      pcVar7[__n] = '/';
      __n = __n + 1;
    }
  }
  bVar11 = true;
  pcVar12 = pcVar7 + __n;
LAB_00a332ac:
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
LAB_00a33294:
    *pcVar12 = cVar9;
    pcVar13 = pcVar13 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (cVar9 != '\0') {
    if (-1 < cVar9) goto LAB_00a33294;
    FUN_00a0e7c4(pcVar12,4,"%%%02x");
    pcVar13 = pcVar13 + 1;
    pcVar12 = pcVar12 + 3;
    goto LAB_00a332ac;
  }
  *pcVar12 = '\0';
                    /* try { // try from 00a3332c to 00b3340f has its CatchHandler @ 00a33174 */
  (*(code *)PTR_free_01d1b748)(pcVar6);
  (*(code *)PTR_free_01d1b748)(param_2);
  bVar11 = false;
LAB_00a33348:
  if (param_3 == 1) {
    uVar4 = 0;
    *(char **)(param_1 + 0x8db8) = pcVar7;
    goto LAB_00a334a4;
  }
  if (bVar11) {
    *(undefined1 *)(param_1 + 0x8b70) = 0;
  }
  if (*(char *)(param_1 + 0x910) != '\0') {
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x908));
    *(undefined8 *)(param_1 + 0x908) = 0;
    *(undefined1 *)(param_1 + 0x910) = 0;
  }
                    /* catch() { ... } // from try @ 00a331f4 with catch @ 00a333a0 */
                    /* catch() { ... } // from try @ 00a331e8 with catch @ 00a333a4 */
                    /* catch() { ... } // from try @ 00a331c8 with catch @ 00a333a8 */
  *(char **)(param_1 + 0x908) = pcVar7;
  *(undefined1 *)(param_1 + 0x910) = 1;
  FUN_00a22d58(param_1,"Issue another request to this URL: \'%s\'\n",pcVar7);
                    /* catch() { ... } // from try @ 00a33200 with catch @ 00a333b8 */
  iVar3 = *(int *)(param_1 + 0x8d68);
  if (iVar3 == 0x12f) {
                    /* try { // try from 00a33410 to 00b33453 has its CatchHandler @ 00a33410
                       catch() { ... } // from try @ 00a33410 with catch @ 00a33410
                       catch() { ... } // from try @ 00a3346c with catch @ 00a33410 */
    if ((*(int *)(param_1 + 0x430) != 1) && ((*(byte *)(param_1 + 0x288) >> 2 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x430) = 1;
      pcVar7 = "HEAD";
      if (*(char *)(param_1 + 0x620) == '\0') {
        pcVar7 = "GET";
      }
                    /* try { // try from 00a33454 to 00b3346b has its CatchHandler @ 00a3349c */
      FUN_00a22d58(param_1,"Disables POST, goes with %s\n",pcVar7);
    }
  }
  else if (iVar3 == 0x12e) {
    if ((*(uint *)(param_1 + 0x430) & 0xfffffffe) == 2) {
                    /* try { // try from 00a3346c to 00b334af has its CatchHandler @ 00a33410 */
      bVar1 = *(byte *)(param_1 + 0x288) >> 1;
      goto joined_r0x00a33470;
    }
  }
  else if ((iVar3 == 0x12d) && ((*(uint *)(param_1 + 0x430) & 0xfffffffe) == 2)) {
    bVar1 = *(byte *)(param_1 + 0x288);
joined_r0x00a33470:
    if ((bVar1 & 1) == 0) {
      FUN_00a22d58(param_1,"Switch from POST to GET\n");
      *(undefined4 *)(param_1 + 0x430) = 1;
    }
  }
  FUN_00a1b51c(param_1,10);
                    /* catch() { ... } // from try @ 00a33454 with catch @ 00a3349c */
  FUN_00a1b49c(param_1);
  uVar4 = 0;
  goto LAB_00a334a4;
LAB_00a32f74:
  pcVar7 = (char *)(*(code *)PTR_malloc_01d1b740)(lVar5 + 1);
  if (pcVar7 != (char *)0x0) {
    bVar11 = true;
    pcVar12 = pcVar7;
    pcVar6 = param_2;
LAB_00a32fd4:
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
LAB_00a32fbc:
      *pcVar12 = cVar9;
      pcVar6 = pcVar6 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if (cVar9 != '\0') {
      if (-1 < cVar9) goto LAB_00a32fbc;
      FUN_00a0e7c4(pcVar12,4,"%%%02x");
      pcVar6 = pcVar6 + 1;
      pcVar12 = pcVar12 + 3;
      goto LAB_00a32fd4;
    }
    *pcVar12 = '\0';
    (*(code *)PTR_free_01d1b748)(param_2);
    bVar11 = true;
    goto LAB_00a33348;
  }
LAB_00a33044:
  uVar4 = 0x1b;
LAB_00a334a4:
                    /* catch() { ... } // from try @ 00a3350c with catch @ 00a334b0 */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

