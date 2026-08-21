
int FUN_00a4d004(long *param_1,char *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  long *plVar6;
  int iVar7;
  char *__s;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auStack_64 [4];
  
  *param_2 = '\0';
  lVar11 = *param_1;
  *(undefined1 *)((long)param_1 + 0x6ac) = 0;
  if (*(char *)(lVar11 + 0x888) != '\0') {
LAB_00a4d068:
    iVar4 = 2;
    piVar1 = (int *)(lVar11 + 0x8d30);
                    /* try { // try from 00a4d06c to 00b4d077 has its CatchHandler @ 00a4d240 */
                    /* try { // try from 00a4d078 to 00b4d1cb has its CatchHandler @ 00a4d258 */
    switch(*piVar1) {
    case 0:
      goto switchD_00a4d080_caseD_0;
    case 1:
      puVar10 = *(undefined8 **)(lVar11 + 0x8d50);
      *(undefined8 *)(lVar11 + 0x2b0) = puVar10[1];
      *(undefined8 *)(lVar11 + 0x240) = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *piVar1 = 2;
      iVar4 = FUN_00a51de4(*puVar10);
      if (iVar4 != 0) {
        iVar4 = 3;
        break;
      }
      if (*(long *)(*(long *)(lVar11 + 0x8d48) + 0x18) != 0) goto code_r0x00a4d1a4;
      *piVar1 = 3;
      iVar4 = 0x4e;
      goto LAB_00a4d420;
    case 2:
      plVar6 = (long *)(lVar11 + 0x8d48);
      puVar10 = (undefined8 *)**(undefined8 **)*plVar6;
      lVar8 = FUN_00a0e870("%s%s",*(undefined8 *)(lVar11 + 0x8d38),*puVar10);
      if (lVar8 == 0) {
        iVar4 = 0x1b;
                    /* catch() { ... } // from try @ 00a4d078 with catch @ 00a4d258 */
        goto LAB_00a4d420;
      }
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(*param_1 + 0x8cb8));
      lVar9 = *param_1;
      *(long *)(lVar9 + 0x8cb8) = lVar8;
      *(long *)(lVar9 + 0x8cc0) = lVar8;
      FUN_00a22d58(lVar9,"Wildcard - START of \"%s\"\n",*puVar10);
      if (*(code **)(*param_1 + 0x890) == (code *)0x0) {
LAB_00a4d154:
        if (*(int *)(puVar10 + 1) == 0) {
          if ((*(byte *)(puVar10 + 0xc) >> 6 & 1) != 0) {
            param_1[0xdc] = puVar10[5];
          }
          iVar4 = FUN_00a51670(param_1);
          if (iVar4 != 0) goto LAB_00a4d420;
          FUN_00a34074((undefined8 *)*plVar6,*(undefined8 *)*plVar6,0);
          if (*(long *)(*plVar6 + 0x18) != 0) goto switchD_00a4d080_default;
          iVar4 = 0;
          iVar7 = 3;
          goto LAB_00a4d41c;
        }
      }
      else {
        lVar11 = (**(code **)(*param_1 + 0x890))
                           (puVar10,*(undefined8 *)(lVar11 + 0x8d60),*(undefined4 *)(*plVar6 + 0x18)
                           );
        if (lVar11 != 2) {
          if (lVar11 != 1) goto LAB_00a4d154;
          iVar4 = 0x58;
          goto LAB_00a4d420;
        }
        FUN_00a22d58(*param_1,"Wildcard - \"%s\" skipped by user\n",*puVar10);
      }
      iVar4 = 4;
      break;
    case 3:
                    /* catch() { ... } // from try @ 00a4d06c with catch @ 00a4d240 */
      if (*(undefined8 **)(lVar11 + 0x8d50) == (undefined8 *)0x0) {
        iVar4 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 00a4d060 with catch @ 00a4d244 */
                    /* catch() { ... } // from try @ 00a4d040 with catch @ 00a4d248 */
        iVar4 = FUN_00a51de4(**(undefined8 **)(lVar11 + 0x8d50));
      }
      iVar7 = 5;
      if (iVar4 == 0) {
        iVar7 = 6;
      }
      goto LAB_00a4d41c;
    case 4:
      if (*(code **)(lVar11 + 0x898) != (code *)0x0) {
        (**(code **)(lVar11 + 0x898))(*(undefined8 *)(lVar11 + 0x8d60));
      }
      FUN_00a34074(*(undefined8 **)(lVar11 + 0x8d48),**(undefined8 **)(lVar11 + 0x8d48),0);
      if (*(long *)(*(long *)(lVar11 + 0x8d48) + 0x18) == 0) {
        iVar4 = 3;
      }
      break;
    default:
switchD_00a4d080_default:
      iVar4 = 0;
      goto LAB_00a4d420;
    }
                    /* try { // try from 00a4d060 to 00b4d06b has its CatchHandler @ 00a4d244 */
    *piVar1 = iVar4;
    lVar11 = *param_1;
    goto LAB_00a4d068;
  }
                    /* try { // try from 00a4d1cc to 00b4d2af has its CatchHandler @ 00a4cfec */
  iVar4 = FUN_00a51670(param_1);
  if (iVar4 != 0) {
    return iVar4;
  }
  lVar11 = *param_1;
  goto LAB_00a4d448;
code_r0x00a4d1a4:
  lVar11 = *param_1;
  goto LAB_00a4d068;
switchD_00a4d080_caseD_0:
  __s = *(char **)(lVar11 + 0x8cc0);
  pcVar5 = strrchr(__s,0x2f);
  if (pcVar5 != (char *)0x0) {
    __s = pcVar5 + 1;
    if (*__s != '\0') {
      lVar8 = (*(code *)PTR_strdup_01d1b758)(__s);
      *(long *)(lVar11 + 0x8d40) = lVar8;
      goto joined_r0x00a4d2cc;
    }
LAB_00a4d38c:
    *(undefined4 *)(lVar11 + 0x8d30) = 3;
    iVar4 = FUN_00a51670(param_1);
    goto LAB_00a4d404;
  }
  if (*__s == '\0') goto LAB_00a4d38c;
                    /* try { // try from 00a4d2b0 to 00b4d303 has its CatchHandler @ 00a4d2b0
                       catch() { ... } // from try @ 00a4d2b0 with catch @ 00a4d2b0
                       catch() { ... } // from try @ 00a4d46c with catch @ 00a4d2b0 */
  lVar8 = (*(code *)PTR_strdup_01d1b758)(__s);
  *(long *)(lVar11 + 0x8d40) = lVar8;
joined_r0x00a4d2cc:
  if (lVar8 == 0) {
LAB_00a4d400:
    iVar4 = 0x1b;
  }
  else {
    *__s = '\0';
    plVar6 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x18);
    if (plVar6 == (long *)0x0) {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + 0x8d40));
      *(undefined8 *)(lVar11 + 0x8d40) = 0;
      goto LAB_00a4d400;
    }
    lVar8 = FUN_00a51d98();
    *plVar6 = lVar8;
    if (lVar8 == 0) {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + 0x8d40));
      *(undefined8 *)(lVar11 + 0x8d40) = 0;
      (*(code *)PTR_free_01d1b748)(plVar6);
      goto LAB_00a4d400;
    }
                    /* try { // try from 00a4d304 to 00b4d31b has its CatchHandler @ 00a4d4e8 */
    plVar2 = (long *)(lVar11 + 0x8d50);
    puVar10 = (undefined8 *)(lVar11 + 0x8d58);
    *plVar2 = (long)plVar6;
    *puVar10 = FUN_00a51ccc;
                    /* try { // try from 00a4d324 to 00b4d32f has its CatchHandler @ 00a4d4e4 */
    if (*(int *)(*param_1 + 0x5f8) == 2) {
                    /* try { // try from 00a4d330 to 00b4d33b has its CatchHandler @ 00a4d4e0 */
      *(undefined4 *)(*param_1 + 0x5f8) = 1;
    }
                    /* try { // try from 00a4d33c to 00b4d46b has its CatchHandler @ 00a4d4f8 */
    iVar4 = FUN_00a51670(param_1);
    if (iVar4 == 0) {
      lVar8 = (*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(*param_1 + 0x8cc0));
      *(long *)(lVar11 + 0x8d38) = lVar8;
      if (lVar8 == 0) {
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + 0x8d40));
        *(undefined8 *)(lVar11 + 0x8d40) = 0;
        (*(code *)*puVar10)(*plVar2);
        *plVar2 = 0;
        *(undefined8 *)(lVar11 + 0x8d58) = 0;
        goto LAB_00a4d400;
      }
      lVar11 = *param_1;
      plVar6[1] = *(long *)(lVar11 + 0x2b0);
      *(code **)(lVar11 + 0x2b0) = FUN_00a51dec;
      plVar6[2] = *(long *)(lVar11 + 0x240);
      *(long **)(lVar11 + 0x240) = param_1;
      FUN_00a22d58(lVar11,"Wildcard - Parsing started\n");
      iVar4 = 0;
    }
    else {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + 0x8d40));
      *(undefined8 *)(lVar11 + 0x8d40) = 0;
      (*(code *)*puVar10)(*plVar2);
      *plVar2 = 0;
      *(undefined8 *)(lVar11 + 0x8d58) = 0;
    }
  }
LAB_00a4d404:
  if (*piVar1 != 3) {
    iVar7 = 5;
    if (iVar4 == 0) {
      iVar7 = 1;
    }
LAB_00a4d41c:
    *piVar1 = iVar7;
  }
LAB_00a4d420:
  lVar11 = *param_1;
  if ((*(uint *)(lVar11 + 0x8d30) | 2) == 6) {
    return 0;
  }
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_00a4d448:
  *(undefined8 *)(lVar11 + 0x78) = 0xffffffffffffffff;
  FUN_00a1b744(lVar11,0);
  FUN_00a1b6ac(lVar11,0);
                    /* try { // try from 00a4d46c to 00b4d54f has its CatchHandler @ 00a4d2b0 */
  FUN_00a1b4f0(lVar11,0xffffffffffffffff);
  FUN_00a1b4c4(lVar11,0xffffffffffffffff);
  *(undefined1 *)((long)param_1 + 0x6a9) = 1;
  if (*(char *)(*param_1 + 0x620) != '\0') {
    *(undefined4 *)(*(long *)(*param_1 + 0x218) + 0x18) = 1;
  }
  *param_2 = '\0';
  iVar4 = FUN_00a4ff08(param_1,1,0xc);
  if (iVar4 == 0) {
    iVar4 = FUN_00a3e038(param_1 + 0xc3,0);
    *param_2 = (int)param_1[0xd9] == 0;
                    /* catch() { ... } // from try @ 00a4d330 with catch @ 00a4d4e0 */
    cVar3 = *(char *)((long)param_1 + 0x3c6);
                    /* catch() { ... } // from try @ 00a4d324 with catch @ 00a4d4e4 */
                    /* catch() { ... } // from try @ 00a4d304 with catch @ 00a4d4e8 */
    FUN_00a22d58(*param_1,"ftp_perform ends with SECONDARY: %d\n",cVar3);
    if (iVar4 == 0) {
                    /* try { // try from 00a4d5a4 to 00b4d5bb has its CatchHandler @ 00a4d7ac */
      if (*param_2 == '\0') {
        return 0;
      }
      lVar11 = *(long *)(*param_1 + 0x218);
                    /* try { // try from 00a4d5c4 to 00b4d5cf has its CatchHandler @ 00a4d7a8 */
      if ((cVar3 != '\0') && (iVar4 = FUN_00a4dca0(param_1,auStack_64), iVar4 != 0)) {
                    /* try { // try from 00a4d5d0 to 00b4d5db has its CatchHandler @ 00a4d7a4 */
        if (*(int *)((long)param_1 + 0x264) != -1) {
          FUN_00a104c4(param_1);
                    /* try { // try from 00a4d5dc to 00b4d72f has its CatchHandler @ 00a4d7bc */
          *(undefined4 *)((long)param_1 + 0x264) = 0xffffffff;
        }
        *(undefined1 *)((long)param_1 + 0x3c6) = 0;
        *(undefined4 *)((long)param_1 + 0x714) = 0;
        return iVar4;
      }
      if (*(int *)(lVar11 + 0x18) == 0) {
        if (cVar3 == '\0') {
          *(undefined1 *)((long)param_1 + 0x3c4) = 1;
        }
      }
      else {
        FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      }
      *(undefined1 *)((long)param_1 + 0x6a9) = 1;
      return 0;
    }
  }
                    /* catch() { ... } // from try @ 00a4d33c with catch @ 00a4d4f8 */
  lVar11 = param_1[0xd2];
  if (lVar11 != 0) {
    if (0 < (int)param_1[0xd3]) {
      lVar8 = 0;
      do {
        lVar9 = lVar8 * 8;
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + lVar9));
        lVar8 = lVar8 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar9) = 0;
        lVar11 = param_1[0xd2];
      } while (lVar8 < (int)param_1[0xd3]);
    }
    (*(code *)PTR_free_01d1b748)();
    param_1[0xd2] = 0;
                    /* try { // try from 00a4d550 to 00b4d5a3 has its CatchHandler @ 00a4d550
                       catch() { ... } // from try @ 00a4d550 with catch @ 00a4d550
                       catch() { ... } // from try @ 00a4d730 with catch @ 00a4d550 */
    *(undefined4 *)(param_1 + 0xd3) = 0;
  }
  (*(code *)PTR_free_01d1b748)(param_1[0xd4]);
  param_1[0xd4] = 0;
  (*(code *)PTR_free_01d1b748)(param_1[0xdd]);
  param_1[0xdd] = 0;
  return iVar4;
}

