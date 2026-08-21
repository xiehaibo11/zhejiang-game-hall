
int FUN_00a4d6d4(long *param_1,int param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  undefined1 auVar14 [16];
  char *local_88;
  int local_7c;
  long local_78;
  int local_6c;
  undefined1 auStack_68 [8];
  
  lVar8 = *param_1;
  puVar10 = *(undefined8 **)(lVar8 + 0x218);
  local_88 = (char *)0x0;
  if (puVar10 == (undefined8 *)0x0) {
    return 0;
  }
  uVar11 = *(undefined8 *)(lVar8 + 0x8cc0);
                    /* try { // try from 00a4d730 to 00b4d813 has its CatchHandler @ 00a4d550 */
  switch(param_2) {
  case 0:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x17:
  case 0x19:
  case 0x1e:
  case 0x24:
  case 0x3f:
  case 0x4e:
    if ((param_3 & 1) != 0) goto switchD_00a4d734_caseD_1;
    iVar3 = 0;
    break;
  default:
switchD_00a4d734_caseD_1:
    *(undefined1 *)((long)param_1 + 0x6a9) = 0;
    *(undefined1 *)((long)param_1 + 0x6ab) = 1;
    FUN_00a11300(param_1,1);
    iVar3 = param_2;
  }
  (*(code *)PTR_free_01d1b748)(param_1[0xd6]);
  if (*(char *)(lVar8 + 0x888) != '\0') {
    if ((*(code **)(lVar8 + 0x898) != (code *)0x0) && (param_1[0xd4] != 0)) {
      (**(code **)(lVar8 + 0x898))(*(undefined8 *)(lVar8 + 0x8d60));
    }
    param_1[0xdc] = -1;
  }
                    /* catch() { ... } // from try @ 00a4d5d0 with catch @ 00a4d7a4 */
                    /* catch() { ... } // from try @ 00a4d5c4 with catch @ 00a4d7a8 */
                    /* catch() { ... } // from try @ 00a4d5a4 with catch @ 00a4d7ac */
                    /* catch() { ... } // from try @ 00a4d5dc with catch @ 00a4d7bc */
  if ((iVar3 == 0) && (iVar3 = FUN_00a2eb18(lVar8,uVar11,0,&local_88,0,0), iVar3 == 0)) {
    if ((char *)param_1[0xd4] == (char *)0x0) {
      sVar5 = 0;
    }
    else {
      sVar5 = strlen((char *)param_1[0xd4]);
    }
    pcVar7 = local_88;
    sVar6 = strlen(local_88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4d9ec with catch @ 00a4db48
                        */
    if (*(char *)((long)param_1 + 0x6ab) == '\0') {
      if ((sVar6 - sVar5 == 0) || (*(int *)(lVar8 + 0x5f8) == 2)) {
        lVar4 = (*(code *)PTR_strdup_01d1b758)(&DAT_0189703a);
        param_1[0xd6] = lVar4;
                    /* try { // try from 00a4dbb4 to 00b4dc07 has its CatchHandler @ 00a4dbb4
                       catch() { ... } // from try @ 00a4dbb4 with catch @ 00a4dbb4
                       catch() { ... } // from try @ 00a4dd94 with catch @ 00a4dbb4 */
        (*(code *)PTR_free_01d1b748)(local_88);
LAB_00a4dc34:
                    /* try { // try from 00a4dc34 to 00b4dc3f has its CatchHandler @ 00a4de08 */
        pcVar7 = (char *)param_1[0xd6];
      }
      else {
                    /* try { // try from 00a4dc28 to 00b4dc33 has its CatchHandler @ 00a4de0c */
        param_1[0xd6] = (long)pcVar7;
        if (sVar5 != 0) {
          pcVar7[sVar6 - sVar5] = '\0';
          goto LAB_00a4dc34;
        }
      }
      if (pcVar7 != (char *)0x0) {
                    /* try { // try from 00a4dc40 to 00b4dd93 has its CatchHandler @ 00a4de20 */
        FUN_00a22d58(lVar8,"Remembering we are in dir \"%s\"\n",pcVar7);
      }
    }
    else {
      param_1[0xd6] = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4d8a0 with catch @ 00a4db5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4da1c with catch @ 00a4db5c
                        */
      (*(code *)PTR_free_01d1b748)(pcVar7);
    }
    bVar12 = false;
    iVar3 = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x6a9) = 0;
    bVar12 = true;
    FUN_00a11300(param_1,1);
    param_1[0xd6] = 0;
  }
  lVar4 = param_1[0xd2];
  if (lVar4 != 0) {
    if (0 < (int)param_1[0xd3]) {
      lVar13 = 0;
      do {
        lVar9 = lVar13 * 8;
                    /* try { // try from 00a4d814 to 00b4d867 has its CatchHandler @ 00a4d814
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4d814 with catch @ 00a4d814
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4da58 with catch @ 00a4d814
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4dae8 with catch @ 00a4d814
                        */
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar4 + lVar9));
        lVar13 = lVar13 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar9) = 0;
        lVar4 = param_1[0xd2];
      } while (lVar13 < (int)param_1[0xd3]);
    }
    (*(code *)PTR_free_01d1b748)();
    param_1[0xd2] = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
  }
  (*(code *)PTR_free_01d1b748)(param_1[0xd4]);
  param_1[0xd4] = 0;
                    /* try { // try from 00a4d868 to 00b4d87f has its CatchHandler @ 00a4db20 */
  (*(code *)PTR_free_01d1b748)(param_1[0xdd]);
  param_1[0xdd] = 0;
  if (*(int *)((long)param_1 + 0x264) != -1) {
                    /* try { // try from 00a4d888 to 00b4d893 has its CatchHandler @ 00a4db1c */
                    /* try { // try from 00a4d894 to 00b4d89f has its CatchHandler @ 00a4db18 */
                    /* try { // try from 00a4d8a0 to 00b4d92b has its CatchHandler @ 00a4db5c */
    if ((((!bVar12) && ((char)param_1[0xd5] != '\0')) && (0 < *(long *)(lVar8 + 0x88))) &&
       (iVar3 = FUN_00a3e3a4(param_1 + 0xc3,"%s",&DAT_0189929f), iVar3 != 0)) {
      uVar11 = FUN_00a15564(iVar3);
      FUN_00a23020(lVar8,"Failure sending ABOR command: %s",uVar11);
      *(undefined1 *)((long)param_1 + 0x6a9) = 0;
      FUN_00a11300(param_1,1);
    }
    if ((char)param_1[0x58] != '\0') {
      thunk_FUN_00a4643c(param_1,1);
    }
    if (*(int *)((long)param_1 + 0x264) != -1) {
      FUN_00a104c4(param_1);
      *(undefined4 *)((long)param_1 + 0x264) = 0xffffffff;
    }
    *(undefined1 *)((long)param_1 + 0x3c6) = 0;
    *(undefined4 *)((long)param_1 + 0x714) = 0;
  }
  if (iVar3 != 0) goto LAB_00a4da74;
  if (((*(int *)(puVar10 + 3) == 0) && (*(char *)((long)param_1 + 0x6a9) != '\0')) &&
     (((char)param_1[199] != '\0' && ((param_3 & 1) == 0)))) {
    lVar4 = param_1[0xcd];
    param_1[0xcd] = 60000;
    auVar14 = FUN_00a18e40();
    *(undefined1 (*) [16])(param_1 + 0xcb) = auVar14;
    iVar3 = FUN_00a4e500(&local_78,param_1,&local_7c);
                    /* try { // try from 00a4d9ec to 00b4d9ef has its CatchHandler @ 00a4db48 */
    param_1[0xcd] = lVar4;
    if ((iVar3 == 0x1c) && (local_78 == 0)) {
      FUN_00a23020(lVar8,"control connection looks dead");
                    /* try { // try from 00a4da1c to 00b4da57 has its CatchHandler @ 00a4db5c */
      *(undefined1 *)((long)param_1 + 0x6a9) = 0;
      FUN_00a11300(param_1,1);
      return 0x1c;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((char)param_1[0xd5] == '\0') {
      if ((local_7c != 0xe2) && (local_7c != 0xfa)) {
        FUN_00a23020(lVar8,"server did not report OK, got %d");
        iVar3 = 0x12;
        goto LAB_00a4da74;
      }
    }
    else if (0 < *(long *)(lVar8 + 0x88)) {
      FUN_00a22d58(lVar8,"partial download completed, closing connection\n");
      FUN_00a11300(param_1,1);
      return 0;
    }
  }
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined1 *)(param_1 + 0xd5) = 0;
    return 0;
  }
                    /* try { // try from 00a4d94c to 00b4d953 has its CatchHandler @ 00a4dacc */
  if (*(char *)(lVar8 + 0x621) == '\0') {
    lVar4 = *(long *)(lVar8 + 0x78);
                    /* try { // try from 00a4da58 to 00b4dae3 has its CatchHandler @ 00a4d814 */
    if ((((lVar4 != -1) && (lVar13 = *(long *)*puVar10, lVar4 != lVar13)) &&
        (*(long *)(lVar8 + 0x8cb0) + lVar4 != lVar13)) && (*(long *)(lVar8 + 0x88) != lVar13)) {
      FUN_00a23020(lVar8,"Received only partial file: %ld bytes");
      iVar3 = 0x12;
      goto LAB_00a4da74;
    }
    if ((char)param_1[0xd5] == '\0') {
      iVar3 = 0;
                    /* try { // try from 00a4dc08 to 00b4dc1f has its CatchHandler @ 00a4de10 */
      if ((*(long *)*puVar10 == 0) && (0 < lVar4)) {
        FUN_00a23020(lVar8,"No data was received!");
        iVar3 = 0x13;
      }
      goto LAB_00a4da74;
    }
  }
  else {
                    /* try { // try from 00a4d964 to 00b4d967 has its CatchHandler @ 00a4db30 */
                    /* try { // try from 00a4d974 to 00b4d9d7 has its CatchHandler @ 00a4dad0 */
    if (((*(long *)(lVar8 + 0x8cf8) != -1) && (*(long *)(lVar8 + 0x8cf8) != *(long *)*puVar10)) &&
       ((*(char *)(lVar8 + 0x3d2) == '\0' && (*(int *)(puVar10 + 3) == 0)))) {
      FUN_00a23020(lVar8,"Uploaded unaligned file size (%ld out of %ld bytes)");
      iVar3 = 0x12;
      goto LAB_00a4da74;
    }
  }
  iVar3 = 0;
LAB_00a4da74:
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  if (iVar3 != 0 || param_2 != 0) {
    return iVar3;
  }
  if ((param_3 & 1) != 0) {
    return iVar3;
  }
  puVar10 = *(undefined8 **)(lVar8 + 0x3e0);
  if (puVar10 == (undefined8 *)0x0) {
    return iVar3;
  }
  do {
    pcVar7 = (char *)*puVar10;
    if (pcVar7 != (char *)0x0) {
      cVar2 = *pcVar7;
      pcVar1 = pcVar7 + 1;
      if (cVar2 != '*') {
        pcVar1 = pcVar7;
      }
      iVar3 = FUN_00a3e3a4(param_1 + 0xc3,"%s",pcVar1);
      if (iVar3 != 0) {
        return iVar3;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4d94c with catch @ 00a4dacc
                        */
      auVar14 = FUN_00a18e40();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4d974 with catch @ 00a4dad0
                        */
      *(undefined1 (*) [16])(param_1 + 0xcb) = auVar14;
                    /* try { // try from 00a4dae4 to 00b4dae7 has its CatchHandler @ 00a4db14 */
      iVar3 = FUN_00a4e500(auStack_68,param_1,&local_6c);
                    /* try { // try from 00a4dae8 to 00b4dbb3 has its CatchHandler @ 00a4d814 */
      if (iVar3 != 0) {
        return iVar3;
      }
      if (399 < local_6c && cVar2 != '*') {
        FUN_00a23020(*param_1,"QUOT string not accepted: %s",pcVar1);
        return 0x15;
      }
    }
    puVar10 = (undefined8 *)puVar10[1];
    if (puVar10 == (undefined8 *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4dae4 with catch @ 00a4db14
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4d894 with catch @ 00a4db18
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4d888 with catch @ 00a4db1c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4d868 with catch @ 00a4db20
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4d964 with catch @ 00a4db30
                        */
      return 0;
    }
  } while( true );
}

