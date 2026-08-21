
void FUN_00a36e50(undefined4 *param_1,ulong param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  size_t sVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  char *local_90;
  char local_88 [64];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar11 = **(long **)(param_1 + 4);
  switch(*param_1) {
  case 0:
    cVar2 = *(char *)(lVar11 + 0x613);
    pcVar1 = "octet";
    if (cVar2 != '\0') {
      pcVar1 = "netascii";
    }
    break;
  case 1:
    goto switchD_00a36e9c_caseD_1;
  case 2:
switchD_00a36e9c_caseD_2:
                    /* try { // try from 00a37044 to 00b3704f has its CatchHandler @ 00a37b58 */
    uVar5 = FUN_00a3763c(param_1,param_2);
    goto LAB_00a37154;
  case 3:
                    /* catch() { ... } // from try @ 00a36cf8 with catch @ 00a36f60 */
    FUN_00a22d58(lVar11,"%s\n","TFTP finished");
    goto LAB_00a36f78;
  default:
                    /* catch() { ... } // from try @ 00a36cec with catch @ 00a36f48 */
                    /* catch() { ... } // from try @ 00a36ce0 with catch @ 00a36f4c */
                    /* catch() { ... } // from try @ 00a36cc0 with catch @ 00a36f50 */
    FUN_00a23020(lVar11,"%s","Internal state machine error");
    uVar5 = 0x47;
    goto LAB_00a37154;
  }
                    /* try { // try from 00a36ed0 to 00b36fb7 has its CatchHandler @ 00a36c68 */
  switch(param_2 & 0xffffffff) {
  case 0:
  case 7:
    iVar12 = param_1[7];
    param_1[7] = iVar12 + 1;
    if ((int)param_1[9] <= iVar12) {
                    /* try { // try from 00a37050 to 00b37b4f has its CatchHandler @ 00a37b70 */
      uVar5 = 0;
      param_1[2] = 0xffffff9e;
      *param_1 = 3;
      goto LAB_00a37154;
    }
    cVar3 = *(char *)(lVar11 + 0x621);
    **(undefined1 **)(param_1 + 0x5a) = 0;
    if (cVar3 == '\0') {
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 1;
    }
    else {
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 2;
      *(long *)(**(long **)(param_1 + 4) + 0x208) = *(long *)(param_1 + 0x5a) + 4;
      if (*(long *)(lVar11 + 0x8cf8) != -1) {
        FUN_00a1b4f0(lVar11);
      }
    }
    uVar5 = FUN_00a2eb18(lVar11,*(long *)(**(long **)(param_1 + 4) + 0x8cc0) + 1,0,&local_90,0,0);
    if ((int)uVar5 != 0) goto LAB_00a37154;
    FUN_00a0e7c4(*(long *)(param_1 + 0x5a) + 2,(long)(int)param_1[0x55],&DAT_01894b59,local_90,0,
                 pcVar1,0);
    sVar6 = strlen(local_90);
    lVar9 = 9;
    if (cVar2 != '\0') {
      lVar9 = 0xc;
    }
    sVar6 = sVar6 + lVar9;
    if (*(char *)(lVar11 + 0x380) == '\0') {
      if ((*(char *)(lVar11 + 0x621) == '\0') || (*(long *)(lVar11 + 0x8cf8) == -1)) {
        local_88[0] = '0';
        local_88[1] = '\0';
      }
      else {
        FUN_00a0e7c4(local_88,0x40,"%ld");
      }
      iVar12 = param_1[0x55];
      if ((ulong)(long)iVar12 < sVar6 + 6) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(param_1 + 0x5a);
        *(undefined2 *)((undefined4 *)(lVar9 + sVar6) + 1) = 0x65;
        *(undefined4 *)(lVar9 + sVar6) = 0x7a697374;
        iVar12 = param_1[0x55];
        lVar9 = 6;
      }
      lVar9 = lVar9 + sVar6;
      sVar6 = strlen(local_88);
      if ((ulong)(long)iVar12 < lVar9 + sVar6 + 1) {
        lVar10 = 0;
      }
      else {
        strcpy((char *)(*(long *)(param_1 + 0x5a) + lVar9),local_88);
        sVar6 = strlen(local_88);
        lVar10 = sVar6 + 1;
      }
      lVar10 = lVar10 + lVar9;
      FUN_00a0e7c4(local_88,0x40,"%d",param_1[0x56]);
      iVar12 = param_1[0x55];
      if ((ulong)(long)iVar12 < lVar10 + 8U) {
        lVar9 = 0;
      }
      else {
        *(undefined8 *)(*(long *)(param_1 + 0x5a) + lVar10) = 0x657a69736b6c62;
        iVar12 = param_1[0x55];
        lVar9 = 8;
      }
      lVar9 = lVar9 + lVar10;
      sVar6 = strlen(local_88);
      if ((ulong)(long)iVar12 < lVar9 + sVar6 + 1) {
        lVar10 = 0;
      }
      else {
        strcpy((char *)(*(long *)(param_1 + 0x5a) + lVar9),local_88);
        sVar6 = strlen(local_88);
        lVar10 = sVar6 + 1;
      }
      lVar10 = lVar10 + lVar9;
      FUN_00a0e7c4(local_88,0x40,"%d",param_1[8]);
      iVar12 = param_1[0x55];
      if ((ulong)(long)iVar12 < lVar10 + 8U) {
        lVar9 = 0;
      }
      else {
        *(undefined8 *)(*(long *)(param_1 + 0x5a) + lVar10) = 0x74756f656d6974;
        iVar12 = param_1[0x55];
        lVar9 = 8;
      }
      lVar9 = lVar9 + lVar10;
      sVar6 = strlen(local_88);
      if ((ulong)(long)iVar12 < lVar9 + sVar6 + 1) {
        lVar10 = 0;
      }
      else {
        strcpy((char *)(*(long *)(param_1 + 0x5a) + lVar9),local_88);
        sVar6 = strlen(local_88);
        lVar10 = sVar6 + 1;
      }
      sVar6 = lVar10 + lVar9;
    }
    sVar7 = sendto(param_1[6],*(void **)(param_1 + 0x5a),sVar6,0,
                   *(sockaddr **)(*(long *)(*(long *)(param_1 + 4) + 0x60) + 0x20),
                   *(socklen_t *)(*(long *)(*(long *)(param_1 + 4) + 0x60) + 0x10));
    if (sVar7 != sVar6) {
      uVar5 = *(undefined8 *)(param_1 + 4);
      puVar8 = (undefined4 *)__errno();
      uVar5 = FUN_00a155d4(uVar5,*puVar8);
      FUN_00a23020(lVar11,"%s",uVar5);
    }
    (*(code *)PTR_free_01d1b748)(local_90);
    break;
  default:
    FUN_00a23020(lVar11,"tftp_send_first: internal error");
    break;
  case 3:
    FUN_00a22d58(lVar11,"%s\n","Connected for receive");
    *param_1 = 1;
                    /* try { // try from 00a36fb8 to 00b37017 has its CatchHandler @ 00a36fb8
                       catch() { ... } // from try @ 00a36fb8 with catch @ 00a36fb8
                       catch() { ... } // from try @ 00a37b50 with catch @ 00a36fb8 */
    uVar5 = FUN_00a36cbc(param_1);
    if ((int)uVar5 != 0) goto LAB_00a37154;
    param_2 = 3;
    goto switchD_00a36e9c_caseD_1;
  case 4:
    FUN_00a22d58(lVar11,"%s\n","Connected for transmit");
    *param_1 = 2;
    uVar5 = FUN_00a36cbc(param_1);
    if ((int)uVar5 != 0) goto LAB_00a37154;
    param_2 = 4;
    goto switchD_00a36e9c_caseD_2;
  case 5:
    uVar5 = 0;
    *param_1 = 3;
    goto LAB_00a37154;
  case 6:
    if (*(char *)(lVar11 + 0x621) != '\0') {
                    /* try { // try from 00a37018 to 00b3702f has its CatchHandler @ 00a37b60 */
      FUN_00a22d58(lVar11,"%s\n","Connected for transmit");
      *param_1 = 2;
                    /* try { // try from 00a37038 to 00b37043 has its CatchHandler @ 00a37b5c */
      uVar5 = FUN_00a36cbc(param_1);
      if ((int)uVar5 != 0) goto LAB_00a37154;
      param_2 = 6;
      goto switchD_00a36e9c_caseD_2;
    }
    FUN_00a22d58(lVar11,"%s\n","Connected for receive");
    *param_1 = 1;
    uVar5 = FUN_00a36cbc(param_1);
    if ((int)uVar5 != 0) goto LAB_00a37154;
    param_2 = 6;
switchD_00a36e9c_caseD_1:
    uVar5 = FUN_00a3739c(param_1,param_2);
    goto LAB_00a37154;
  }
LAB_00a36f78:
  uVar5 = 0;
LAB_00a37154:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

