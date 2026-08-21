
int FUN_00a640bc(long *param_1,int param_2,ulong param_3)

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
    if ((param_3 & 1) != 0) goto switchD_00a6411c_caseD_1;
    iVar3 = 0;
    break;
  default:
switchD_00a6411c_caseD_1:
    *(undefined1 *)((long)param_1 + 0x6a9) = 0;
    *(undefined1 *)((long)param_1 + 0x6ab) = 1;
    FUN_00a26ce8(param_1,1);
    iVar3 = param_2;
  }
                    /* try { // try from 00a64154 to 00b641a3 has its CatchHandler @ 00a64154
                       catch() { ... } // from try @ 00a64154 with catch @ 00a64154
                       catch() { ... } // from try @ 00a641e4 with catch @ 00a64154
                       catch() { ... } // from try @ 00a64228 with catch @ 00a64154 */
  (*(code *)PTR_free_01769a00)(param_1[0xd6]);
  if (*(char *)(lVar8 + 0x888) != '\0') {
    if ((*(code **)(lVar8 + 0x898) != (code *)0x0) && (param_1[0xd4] != 0)) {
      (**(code **)(lVar8 + 0x898))(*(undefined8 *)(lVar8 + 0x8d60));
    }
    param_1[0xdc] = -1;
  }
                    /* try { // try from 00a641a4 to 00b641e3 has its CatchHandler @ 00a64268 */
  if ((iVar3 == 0) && (iVar3 = FUN_00a45500(lVar8,uVar11,0,&local_88,0,0), iVar3 == 0)) {
    if ((char *)param_1[0xd4] == (char *)0x0) {
      sVar5 = 0;
    }
    else {
      sVar5 = strlen((char *)param_1[0xd4]);
    }
    pcVar7 = local_88;
    sVar6 = strlen(local_88);
    if (*(char *)((long)param_1 + 0x6ab) == '\0') {
      if ((sVar6 - sVar5 == 0) || (*(int *)(lVar8 + 0x5f8) == 2)) {
        lVar4 = (*(code *)PTR_strdup_01769a10)(&DAT_013c996e);
        param_1[0xd6] = lVar4;
        (*(code *)PTR_free_01769a00)(local_88);
LAB_00a6461c:
        pcVar7 = (char *)param_1[0xd6];
      }
      else {
        param_1[0xd6] = (long)pcVar7;
        if (sVar5 != 0) {
          pcVar7[sVar6 - sVar5] = '\0';
          goto LAB_00a6461c;
        }
      }
      if (pcVar7 != (char *)0x0) {
        FUN_00a38740(lVar8,"Remembering we are in dir \"%s\"\n",pcVar7);
      }
    }
    else {
      param_1[0xd6] = 0;
      (*(code *)PTR_free_01769a00)(pcVar7);
    }
    bVar12 = false;
    iVar3 = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x6a9) = 0;
    bVar12 = true;
    FUN_00a26ce8(param_1,1);
    param_1[0xd6] = 0;
  }
  lVar4 = param_1[0xd2];
  if (lVar4 != 0) {
                    /* try { // try from 00a641e4 to 00b64213 has its CatchHandler @ 00a64154 */
    if (0 < (int)param_1[0xd3]) {
      lVar13 = 0;
      do {
        lVar9 = lVar13 * 8;
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar4 + lVar9));
        lVar13 = lVar13 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar9) = 0;
                    /* try { // try from 00a64214 to 00b64227 has its CatchHandler @ 00a64268 */
        lVar4 = param_1[0xd2];
      } while (lVar13 < (int)param_1[0xd3]);
    }
    (*(code *)PTR_free_01769a00)();
                    /* try { // try from 00a64228 to 00b64283 has its CatchHandler @ 00a64154 */
    param_1[0xd2] = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
  }
  (*(code *)PTR_free_01769a00)(param_1[0xd4]);
  param_1[0xd4] = 0;
  (*(code *)PTR_free_01769a00)(param_1[0xdd]);
  param_1[0xdd] = 0;
  if (*(int *)((long)param_1 + 0x264) != -1) {
                    /* catch() { ... } // from try @ 00a641a4 with catch @ 00a64268
                       catch() { ... } // from try @ 00a64214 with catch @ 00a64268 */
                    /* try { // try from 00a64284 to 00b642d3 has its CatchHandler @ 00a64284
                       catch() { ... } // from try @ 00a64284 with catch @ 00a64284
                       catch() { ... } // from try @ 00a64314 with catch @ 00a64284
                       catch() { ... } // from try @ 00a64358 with catch @ 00a64284 */
    if ((((!bVar12) && ((char)param_1[0xd5] != '\0')) && (0 < *(long *)(lVar8 + 0x88))) &&
       (iVar3 = FUN_00a54d8c(param_1 + 0xc3,"%s",&DAT_013cbbe3), iVar3 != 0)) {
      uVar11 = FUN_00a2af4c(iVar3);
      FUN_00a38a08(lVar8,"Failure sending ABOR command: %s",uVar11);
      *(undefined1 *)((long)param_1 + 0x6a9) = 0;
      FUN_00a26ce8(param_1,1);
    }
                    /* try { // try from 00a642d4 to 00b64313 has its CatchHandler @ 00a64398 */
    if ((char)param_1[0x58] != '\0') {
      thunk_FUN_00a5ce24(param_1,1);
    }
    if (*(int *)((long)param_1 + 0x264) != -1) {
      FUN_00a25eac(param_1);
      *(undefined4 *)((long)param_1 + 0x264) = 0xffffffff;
    }
    *(undefined1 *)((long)param_1 + 0x3c6) = 0;
    *(undefined4 *)((long)param_1 + 0x714) = 0;
  }
  if (iVar3 != 0) goto LAB_00a6445c;
                    /* catch() { ... } // from try @ 00a642d4 with catch @ 00a64398
                       catch() { ... } // from try @ 00a64344 with catch @ 00a64398 */
  if (((*(int *)(puVar10 + 3) == 0) && (*(char *)((long)param_1 + 0x6a9) != '\0')) &&
     (((char)param_1[199] != '\0' && ((param_3 & 1) == 0)))) {
    lVar4 = param_1[0xcd];
    param_1[0xcd] = 60000;
    auVar14 = FUN_00a2e828();
    *(undefined1 (*) [16])(param_1 + 0xcb) = auVar14;
    iVar3 = FUN_00a64ee8(&local_78,param_1,&local_7c);
    param_1[0xcd] = lVar4;
    if ((iVar3 == 0x1c) && (local_78 == 0)) {
      FUN_00a38a08(lVar8,"control connection looks dead");
      *(undefined1 *)((long)param_1 + 0x6a9) = 0;
      FUN_00a26ce8(param_1,1);
      return 0x1c;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((char)param_1[0xd5] == '\0') {
      if ((local_7c != 0xe2) && (local_7c != 0xfa)) {
        FUN_00a38a08(lVar8,"server did not report OK, got %d");
        iVar3 = 0x12;
        goto LAB_00a6445c;
      }
    }
    else if (0 < *(long *)(lVar8 + 0x88)) {
      FUN_00a38740(lVar8,"partial download completed, closing connection\n");
      FUN_00a26ce8(param_1,1);
      return 0;
    }
  }
                    /* try { // try from 00a64314 to 00b64343 has its CatchHandler @ 00a64284 */
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined1 *)(param_1 + 0xd5) = 0;
    return 0;
  }
  if (*(char *)(lVar8 + 0x621) == '\0') {
    lVar4 = *(long *)(lVar8 + 0x78);
    if ((((lVar4 != -1) && (lVar13 = *(long *)*puVar10, lVar4 != lVar13)) &&
        (*(long *)(lVar8 + 0x8cb0) + lVar4 != lVar13)) && (*(long *)(lVar8 + 0x88) != lVar13)) {
      FUN_00a38a08(lVar8,"Received only partial file: %ld bytes");
      iVar3 = 0x12;
      goto LAB_00a6445c;
    }
    if ((char)param_1[0xd5] == '\0') {
      iVar3 = 0;
      if ((*(long *)*puVar10 == 0) && (0 < lVar4)) {
        FUN_00a38a08(lVar8,"No data was received!");
        iVar3 = 0x13;
      }
      goto LAB_00a6445c;
    }
  }
  else {
                    /* try { // try from 00a64344 to 00b64357 has its CatchHandler @ 00a64398 */
                    /* try { // try from 00a64358 to 00b643b3 has its CatchHandler @ 00a64284 */
    if (((*(long *)(lVar8 + 0x8cf8) != -1) && (*(long *)(lVar8 + 0x8cf8) != *(long *)*puVar10)) &&
       ((*(char *)(lVar8 + 0x3d2) == '\0' && (*(int *)(puVar10 + 3) == 0)))) {
      FUN_00a38a08(lVar8,"Uploaded unaligned file size (%ld out of %ld bytes)");
      iVar3 = 0x12;
      goto LAB_00a6445c;
    }
  }
  iVar3 = 0;
LAB_00a6445c:
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
      iVar3 = FUN_00a54d8c(param_1 + 0xc3,"%s",pcVar1);
      if (iVar3 != 0) {
        return iVar3;
      }
      auVar14 = FUN_00a2e828();
      *(undefined1 (*) [16])(param_1 + 0xcb) = auVar14;
      iVar3 = FUN_00a64ee8(auStack_68,param_1,&local_6c);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (399 < local_6c && cVar2 != '*') {
        FUN_00a38a08(*param_1,"QUOT string not accepted: %s",pcVar1);
        return 0x15;
      }
    }
    puVar10 = (undefined8 *)puVar10[1];
    if (puVar10 == (undefined8 *)0x0) {
      return 0;
    }
  } while( true );
}

