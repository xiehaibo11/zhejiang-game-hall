
int FUN_00a639ec(long *param_1,char *param_2)

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
LAB_00a63a50:
    iVar4 = 2;
    piVar1 = (int *)(lVar11 + 0x8d30);
    switch(*piVar1) {
    case 0:
      goto switchD_00a63a68_caseD_0;
    case 1:
      puVar10 = *(undefined8 **)(lVar11 + 0x8d50);
      *(undefined8 *)(lVar11 + 0x2b0) = puVar10[1];
      *(undefined8 *)(lVar11 + 0x240) = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *piVar1 = 2;
                    /* try { // try from 00a63a90 to 00b63a97 has its CatchHandler @ 00a63b8c */
      iVar4 = FUN_00a687cc(*puVar10);
      if (iVar4 != 0) {
                    /* try { // try from 00a63a98 to 00b63abb has its CatchHandler @ 00a63a28 */
        iVar4 = 3;
        break;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a63af0 with catch @ 00a63b88
                       catch(type#1 @ 00000000) { ... } // from try @ 00a63b18 with catch @ 00a63b88
                       catch(type#1 @ 00000000) { ... } // from try @ 00a63b40 with catch @ 00a63b88
                        */
      if (*(long *)(*(long *)(lVar11 + 0x8d48) + 0x18) != 0) goto LAB_00a63b8c;
      *piVar1 = 3;
      iVar4 = 0x4e;
      goto LAB_00a63e08;
    case 2:
      plVar6 = (long *)(lVar11 + 0x8d48);
      puVar10 = (undefined8 *)**(undefined8 **)*plVar6;
                    /* try { // try from 00a63abc to 00b63ac7 has its CatchHandler @ 00a63b8c */
      lVar8 = FUN_00a24258("%s%s",*(undefined8 *)(lVar11 + 0x8d38),*puVar10);
                    /* try { // try from 00a63ac8 to 00b63aef has its CatchHandler @ 00a63a28 */
      if (lVar8 == 0) {
        iVar4 = 0x1b;
        goto LAB_00a63e08;
      }
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(*param_1 + 0x8cb8));
      lVar9 = *param_1;
                    /* try { // try from 00a63af0 to 00b63af7 has its CatchHandler @ 00a63b88 */
                    /* try { // try from 00a63af8 to 00b63b17 has its CatchHandler @ 00a63a28 */
      *(long *)(lVar9 + 0x8cb8) = lVar8;
      *(long *)(lVar9 + 0x8cc0) = lVar8;
      FUN_00a38740(lVar9,"Wildcard - START of \"%s\"\n",*puVar10);
      if (*(code **)(*param_1 + 0x890) == (code *)0x0) {
LAB_00a63b3c:
                    /* try { // try from 00a63b40 to 00b63b4b has its CatchHandler @ 00a63b88 */
        if (*(int *)(puVar10 + 1) == 0) {
          if ((*(byte *)(puVar10 + 0xc) >> 6 & 1) != 0) {
            param_1[0xdc] = puVar10[5];
          }
          iVar4 = FUN_00a68058(param_1);
          if (iVar4 != 0) goto LAB_00a63e08;
          FUN_00a4aa5c((undefined8 *)*plVar6,*(undefined8 *)*plVar6,0);
          if (*(long *)(*plVar6 + 0x18) != 0) goto switchD_00a63a68_default;
          iVar4 = 0;
          iVar7 = 3;
          goto LAB_00a63e04;
        }
      }
      else {
                    /* try { // try from 00a63b18 to 00b63b1f has its CatchHandler @ 00a63b88 */
                    /* try { // try from 00a63b20 to 00b63b3f has its CatchHandler @ 00a63a28 */
        lVar11 = (**(code **)(*param_1 + 0x890))
                           (puVar10,*(undefined8 *)(lVar11 + 0x8d60),*(undefined4 *)(*plVar6 + 0x18)
                           );
        if (lVar11 != 2) {
          if (lVar11 != 1) goto LAB_00a63b3c;
          iVar4 = 0x58;
          goto LAB_00a63e08;
        }
        FUN_00a38740(*param_1,"Wildcard - \"%s\" skipped by user\n",*puVar10);
      }
      iVar4 = 4;
      break;
    case 3:
      if (*(undefined8 **)(lVar11 + 0x8d50) == (undefined8 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00a687cc(**(undefined8 **)(lVar11 + 0x8d50));
      }
      iVar7 = 5;
      if (iVar4 == 0) {
        iVar7 = 6;
      }
      goto LAB_00a63e04;
    case 4:
                    /* try { // try from 00a63b4c to 00b63b8f has its CatchHandler @ 00a63a28 */
      if (*(code **)(lVar11 + 0x898) != (code *)0x0) {
        (**(code **)(lVar11 + 0x898))(*(undefined8 *)(lVar11 + 0x8d60));
      }
      FUN_00a4aa5c(*(undefined8 **)(lVar11 + 0x8d48),**(undefined8 **)(lVar11 + 0x8d48),0);
      if (*(long *)(*(long *)(lVar11 + 0x8d48) + 0x18) == 0) {
        iVar4 = 3;
      }
      break;
    default:
switchD_00a63a68_default:
      iVar4 = 0;
      goto LAB_00a63e08;
    }
    *piVar1 = iVar4;
    lVar11 = *param_1;
    goto LAB_00a63a50;
  }
  iVar4 = FUN_00a68058(param_1);
  if (iVar4 != 0) {
    return iVar4;
  }
  lVar11 = *param_1;
  goto LAB_00a63e30;
LAB_00a63b8c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a63a90 with catch @ 00a63b8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a63abc with catch @ 00a63b8c
                        */
  lVar11 = *param_1;
  goto LAB_00a63a50;
switchD_00a63a68_caseD_0:
  __s = *(char **)(lVar11 + 0x8cc0);
  pcVar5 = strrchr(__s,0x2f);
  if (pcVar5 != (char *)0x0) {
    __s = pcVar5 + 1;
    if (*__s != '\0') {
      lVar8 = (*(code *)PTR_strdup_01769a10)(__s);
      *(long *)(lVar11 + 0x8d40) = lVar8;
      goto joined_r0x00a63cb4;
    }
LAB_00a63d74:
    *(undefined4 *)(lVar11 + 0x8d30) = 3;
    iVar4 = FUN_00a68058(param_1);
    goto LAB_00a63dec;
  }
  if (*__s == '\0') goto LAB_00a63d74;
  lVar8 = (*(code *)PTR_strdup_01769a10)(__s);
  *(long *)(lVar11 + 0x8d40) = lVar8;
joined_r0x00a63cb4:
  if (lVar8 == 0) {
LAB_00a63de8:
    iVar4 = 0x1b;
  }
  else {
    *__s = '\0';
    plVar6 = (long *)(*(code *)PTR_calloc_01769a18)(1,0x18);
    if (plVar6 == (long *)0x0) {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + 0x8d40));
      *(undefined8 *)(lVar11 + 0x8d40) = 0;
      goto LAB_00a63de8;
    }
    lVar8 = FUN_00a68780();
    *plVar6 = lVar8;
    if (lVar8 == 0) {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + 0x8d40));
      *(undefined8 *)(lVar11 + 0x8d40) = 0;
      (*(code *)PTR_free_01769a00)(plVar6);
      goto LAB_00a63de8;
    }
    plVar2 = (long *)(lVar11 + 0x8d50);
    puVar10 = (undefined8 *)(lVar11 + 0x8d58);
    *plVar2 = (long)plVar6;
    *puVar10 = FUN_00a686b4;
    if (*(int *)(*param_1 + 0x5f8) == 2) {
      *(undefined4 *)(*param_1 + 0x5f8) = 1;
    }
    iVar4 = FUN_00a68058(param_1);
    if (iVar4 == 0) {
      lVar8 = (*(code *)PTR_strdup_01769a10)(*(undefined8 *)(*param_1 + 0x8cc0));
      *(long *)(lVar11 + 0x8d38) = lVar8;
      if (lVar8 == 0) {
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + 0x8d40));
        *(undefined8 *)(lVar11 + 0x8d40) = 0;
        (*(code *)*puVar10)(*plVar2);
        *plVar2 = 0;
        *(undefined8 *)(lVar11 + 0x8d58) = 0;
        goto LAB_00a63de8;
      }
      lVar11 = *param_1;
      plVar6[1] = *(long *)(lVar11 + 0x2b0);
      *(code **)(lVar11 + 0x2b0) = FUN_00a687d4;
      plVar6[2] = *(long *)(lVar11 + 0x240);
      *(long **)(lVar11 + 0x240) = param_1;
      FUN_00a38740(lVar11,"Wildcard - Parsing started\n");
      iVar4 = 0;
    }
    else {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + 0x8d40));
      *(undefined8 *)(lVar11 + 0x8d40) = 0;
      (*(code *)*puVar10)(*plVar2);
      *plVar2 = 0;
      *(undefined8 *)(lVar11 + 0x8d58) = 0;
    }
  }
LAB_00a63dec:
  if (*piVar1 != 3) {
    iVar7 = 5;
    if (iVar4 == 0) {
      iVar7 = 1;
    }
LAB_00a63e04:
    *piVar1 = iVar7;
  }
LAB_00a63e08:
  lVar11 = *param_1;
  if ((*(uint *)(lVar11 + 0x8d30) | 2) == 6) {
    return 0;
  }
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_00a63e30:
  *(undefined8 *)(lVar11 + 0x78) = 0xffffffffffffffff;
  FUN_00a3112c(lVar11,0);
  FUN_00a31094(lVar11,0);
  FUN_00a30ed8(lVar11,0xffffffffffffffff);
  FUN_00a30eac(lVar11,0xffffffffffffffff);
  *(undefined1 *)((long)param_1 + 0x6a9) = 1;
  if (*(char *)(*param_1 + 0x620) != '\0') {
    *(undefined4 *)(*(long *)(*param_1 + 0x218) + 0x18) = 1;
  }
  *param_2 = '\0';
  iVar4 = FUN_00a668f0(param_1,1,0xc);
  if (iVar4 == 0) {
    iVar4 = FUN_00a54a20(param_1 + 0xc3,0);
    *param_2 = (int)param_1[0xd9] == 0;
    cVar3 = *(char *)((long)param_1 + 0x3c6);
    FUN_00a38740(*param_1,"ftp_perform ends with SECONDARY: %d\n",cVar3);
    if (iVar4 == 0) {
      if (*param_2 == '\0') {
        return 0;
      }
      lVar11 = *(long *)(*param_1 + 0x218);
      if ((cVar3 != '\0') && (iVar4 = FUN_00a64688(param_1,auStack_64), iVar4 != 0)) {
        if (*(int *)((long)param_1 + 0x264) != -1) {
          FUN_00a25eac(param_1);
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
        FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      }
      *(undefined1 *)((long)param_1 + 0x6a9) = 1;
      return 0;
    }
  }
  lVar11 = param_1[0xd2];
  if (lVar11 != 0) {
    if (0 < (int)param_1[0xd3]) {
      lVar8 = 0;
      do {
        lVar9 = lVar8 * 8;
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + lVar9));
        lVar8 = lVar8 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar9) = 0;
        lVar11 = param_1[0xd2];
      } while (lVar8 < (int)param_1[0xd3]);
    }
    (*(code *)PTR_free_01769a00)();
    param_1[0xd2] = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
  }
  (*(code *)PTR_free_01769a00)(param_1[0xd4]);
  param_1[0xd4] = 0;
  (*(code *)PTR_free_01769a00)(param_1[0xdd]);
  param_1[0xdd] = 0;
  return iVar4;
}

