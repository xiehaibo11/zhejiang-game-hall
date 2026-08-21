
void FUN_00a4d838(undefined4 *param_1,ulong param_2)

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
                    /* try { // try from 00a4d860 to 00b4d867 has its CatchHandler @ 00a4dae8 */
                    /* try { // try from 00a4d868 to 00b4d87b has its CatchHandler @ 00a4dae0 */
  lVar11 = **(long **)(param_1 + 4);
                    /* try { // try from 00a4d880 to 00b4d88b has its CatchHandler @ 00a4dadc */
  switch(*param_1) {
  case 0:
    cVar2 = *(char *)(lVar11 + 0x613);
                    /* try { // try from 00a4d88c to 00b4d89f has its CatchHandler @ 00a4dad8 */
    pcVar1 = "octet";
    if (cVar2 != '\0') {
      pcVar1 = "netascii";
    }
    break;
  case 1:
    goto switchD_00a4d884_caseD_1;
  case 2:
switchD_00a4d884_caseD_2:
    uVar5 = FUN_00a4e024(param_1,param_2);
    goto LAB_00a4db3c;
  case 3:
                    /* try { // try from 00a4d948 to 00b4d953 has its CatchHandler @ 00a4daac */
                    /* try { // try from 00a4d954 to 00b4d967 has its CatchHandler @ 00a4daa0 */
    FUN_00a38740(lVar11,"%s\n","TFTP finished");
    goto LAB_00a4d960;
  default:
                    /* try { // try from 00a4d928 to 00b4d92f has its CatchHandler @ 00a4dab8 */
                    /* try { // try from 00a4d930 to 00b4d943 has its CatchHandler @ 00a4dab0 */
    FUN_00a38a08(lVar11,"%s","Internal state machine error");
    uVar5 = 0x47;
    goto LAB_00a4db3c;
  }
  switch(param_2 & 0xffffffff) {
  case 0:
  case 7:
                    /* try { // try from 00a4d8c4 to 00b4d8cb has its CatchHandler @ 00a4dad0 */
    iVar12 = param_1[7];
                    /* try { // try from 00a4d8cc to 00b4d8df has its CatchHandler @ 00a4dac8 */
    param_1[7] = iVar12 + 1;
    if ((int)param_1[9] <= iVar12) {
      uVar5 = 0;
      param_1[2] = 0xffffff9e;
      *param_1 = 3;
      goto LAB_00a4db3c;
    }
    cVar3 = *(char *)(lVar11 + 0x621);
                    /* try { // try from 00a4d8e4 to 00b4d8ef has its CatchHandler @ 00a4dac4 */
    **(undefined1 **)(param_1 + 0x5a) = 0;
    if (cVar3 == '\0') {
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 1;
    }
    else {
                    /* try { // try from 00a4d8f0 to 00b4d903 has its CatchHandler @ 00a4dac0 */
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 2;
      *(long *)(**(long **)(param_1 + 4) + 0x208) = *(long *)(param_1 + 0x5a) + 4;
      if (*(long *)(lVar11 + 0x8cf8) != -1) {
        FUN_00a30ed8(lVar11);
      }
    }
    uVar5 = FUN_00a45500(lVar11,*(long *)(**(long **)(param_1 + 4) + 0x8cc0) + 1,0,&local_90,0,0);
    if ((int)uVar5 != 0) goto LAB_00a4db3c;
                    /* catch() { ... } // from try @ 00a4d9b8 with catch @ 00a4da88 */
                    /* catch() { ... } // from try @ 00a4d9ac with catch @ 00a4da8c */
                    /* catch() { ... } // from try @ 00a4d994 with catch @ 00a4da90 */
                    /* catch() { ... } // from try @ 00a4d988 with catch @ 00a4da98 */
                    /* catch() { ... } // from try @ 00a4d954 with catch @ 00a4daa0 */
                    /* catch() { ... } // from try @ 00a4d948 with catch @ 00a4daac */
    FUN_00a241ac(*(long *)(param_1 + 0x5a) + 2,(long)(int)param_1[0x55],&DAT_013c748d,local_90,0,
                 pcVar1,0);
                    /* catch() { ... } // from try @ 00a4d930 with catch @ 00a4dab0 */
    sVar6 = strlen(local_90);
                    /* catch() { ... } // from try @ 00a4d928 with catch @ 00a4dab8 */
                    /* catch() { ... } // from try @ 00a4d8f0 with catch @ 00a4dac0 */
                    /* catch() { ... } // from try @ 00a4d8e4 with catch @ 00a4dac4 */
                    /* catch() { ... } // from try @ 00a4d8cc with catch @ 00a4dac8 */
    lVar9 = 9;
    if (cVar2 != '\0') {
      lVar9 = 0xc;
    }
    sVar6 = sVar6 + lVar9;
                    /* catch() { ... } // from try @ 00a4d8c4 with catch @ 00a4dad0 */
    if (*(char *)(lVar11 + 0x380) == '\0') {
                    /* catch() { ... } // from try @ 00a4d88c with catch @ 00a4dad8 */
                    /* catch() { ... } // from try @ 00a4d880 with catch @ 00a4dadc */
                    /* catch() { ... } // from try @ 00a4d868 with catch @ 00a4dae0 */
                    /* catch() { ... } // from try @ 00a4d860 with catch @ 00a4dae8 */
      if ((*(char *)(lVar11 + 0x621) == '\0') || (*(long *)(lVar11 + 0x8cf8) == -1)) {
        local_88[0] = '0';
        local_88[1] = '\0';
                    /* catch() { ... } // from try @ 00a4d788 with catch @ 00a4db64 */
                    /* catch() { ... } // from try @ 00a4d780 with catch @ 00a4db68 */
      }
      else {
                    /* catch() { ... } // from try @ 00a4d828 with catch @ 00a4daf0 */
        FUN_00a241ac(local_88,0x40,"%ld");
      }
                    /* catch() { ... } // from try @ 00a4d73c with catch @ 00a4db6c */
      iVar12 = param_1[0x55];
                    /* catch() { ... } // from try @ 00a4d730 with catch @ 00a4db70 */
                    /* catch() { ... } // from try @ 00a4d718 with catch @ 00a4db74 */
                    /* catch() { ... } // from try @ 00a4d70c with catch @ 00a4db78 */
      if ((ulong)(long)iVar12 < sVar6 + 6) {
                    /* catch() { ... } // from try @ 00a4d6d8 with catch @ 00a4db7c */
        lVar9 = 0;
                    /* catch() { ... } // from try @ 00a4d6cc with catch @ 00a4db80 */
      }
      else {
                    /* catch() { ... } // from try @ 00a4d6b4 with catch @ 00a4db84 */
        lVar9 = *(long *)(param_1 + 0x5a);
                    /* catch() { ... } // from try @ 00a4d6ac with catch @ 00a4db88 */
                    /* catch() { ... } // from try @ 00a4d674 with catch @ 00a4db8c */
        *(undefined2 *)((undefined4 *)(lVar9 + sVar6) + 1) = 0x65;
        *(undefined4 *)(lVar9 + sVar6) = 0x7a697374;
        iVar12 = param_1[0x55];
                    /* catch() { ... } // from try @ 00a4d668 with catch @ 00a4dba4 */
        lVar9 = 6;
      }
      lVar9 = lVar9 + sVar6;
      sVar6 = strlen(local_88);
                    /* catch() { ... } // from try @ 00a4d650 with catch @ 00a4dbbc */
      if ((ulong)(long)iVar12 < lVar9 + sVar6 + 1) {
        lVar10 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 00a4d644 with catch @ 00a4dbcc */
                    /* catch() { ... } // from try @ 00a4d56c with catch @ 00a4dbd0 */
        strcpy((char *)(*(long *)(param_1 + 0x5a) + lVar9),local_88);
        sVar6 = strlen(local_88);
        lVar10 = sVar6 + 1;
      }
                    /* catch() { ... } // from try @ 00a4da00 with catch @ 00a4dbec */
      lVar10 = lVar10 + lVar9;
      FUN_00a241ac(local_88,0x40,"%d",param_1[0x56]);
      iVar12 = param_1[0x55];
      if ((ulong)(long)iVar12 < lVar10 + 8U) {
        lVar9 = 0;
      }
      else {
                    /* try { // try from 00a4dc1c to 00b4dd23 has its CatchHandler @ 00a4dc1c
                       catch() { ... } // from try @ 00a4dc1c with catch @ 00a4dc1c
                       catch() { ... } // from try @ 00a4dd30 with catch @ 00a4dc1c
                       catch() { ... } // from try @ 00a4ded8 with catch @ 00a4dc1c */
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
      FUN_00a241ac(local_88,0x40,"%d",param_1[8]);
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
                    /* try { // try from 00a4dd24 to 00b4dd2f has its CatchHandler @ 00a4dfa8 */
                    /* try { // try from 00a4dd30 to 00b4dda7 has its CatchHandler @ 00a4dc1c */
    sVar7 = sendto(param_1[6],*(void **)(param_1 + 0x5a),sVar6,0,
                   *(sockaddr **)(*(long *)(*(long *)(param_1 + 4) + 0x60) + 0x20),
                   *(socklen_t *)(*(long *)(*(long *)(param_1 + 4) + 0x60) + 0x10));
    if (sVar7 != sVar6) {
      uVar5 = *(undefined8 *)(param_1 + 4);
      puVar8 = (undefined4 *)__errno();
      uVar5 = FUN_00a2afbc(uVar5,*puVar8);
      FUN_00a38a08(lVar11,"%s",uVar5);
    }
    (*(code *)PTR_free_01769a00)(local_90);
    break;
  default:
    FUN_00a38a08(lVar11,"tftp_send_first: internal error");
    break;
  case 3:
                    /* try { // try from 00a4d988 to 00b4d993 has its CatchHandler @ 00a4da98 */
    FUN_00a38740(lVar11,"%s\n","Connected for receive");
                    /* try { // try from 00a4d994 to 00b4d9a7 has its CatchHandler @ 00a4da90 */
    *param_1 = 1;
    uVar5 = FUN_00a4d6a4(param_1);
    if ((int)uVar5 != 0) goto LAB_00a4db3c;
    param_2 = 3;
                    /* try { // try from 00a4d9ac to 00b4d9b7 has its CatchHandler @ 00a4da8c */
    goto switchD_00a4d884_caseD_1;
  case 4:
                    /* try { // try from 00a4d9b8 to 00b4d9cb has its CatchHandler @ 00a4da88 */
    FUN_00a38740(lVar11,"%s\n","Connected for transmit");
    *param_1 = 2;
    uVar5 = FUN_00a4d6a4(param_1);
    if ((int)uVar5 != 0) goto LAB_00a4db3c;
    param_2 = 4;
    goto switchD_00a4d884_caseD_2;
  case 5:
    uVar5 = 0;
    *param_1 = 3;
    goto LAB_00a4db3c;
  case 6:
    if (*(char *)(lVar11 + 0x621) != '\0') {
                    /* try { // try from 00a4da00 to 00b4da23 has its CatchHandler @ 00a4dbec */
      FUN_00a38740(lVar11,"%s\n","Connected for transmit");
      *param_1 = 2;
      uVar5 = FUN_00a4d6a4(param_1);
                    /* try { // try from 00a4da24 to 00b4dc1b has its CatchHandler @ 00a4d4e8 */
      if ((int)uVar5 != 0) goto LAB_00a4db3c;
      param_2 = 6;
      goto switchD_00a4d884_caseD_2;
    }
                    /* catch() { ... } // from try @ 00a4d81c with catch @ 00a4db08 */
    FUN_00a38740(lVar11,"%s\n","Connected for receive");
    *param_1 = 1;
    uVar5 = FUN_00a4d6a4(param_1);
    if ((int)uVar5 != 0) goto LAB_00a4db3c;
    param_2 = 6;
switchD_00a4d884_caseD_1:
                    /* catch() { ... } // from try @ 00a4d804 with catch @ 00a4db34 */
    uVar5 = FUN_00a4dd84(param_1,param_2);
    goto LAB_00a4db3c;
  }
LAB_00a4d960:
  uVar5 = 0;
LAB_00a4db3c:
                    /* catch() { ... } // from try @ 00a4d7fc with catch @ 00a4db3c */
                    /* catch() { ... } // from try @ 00a4d5a0 with catch @ 00a4db44 */
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00a4d7ac with catch @ 00a4db54 */
                    /* catch() { ... } // from try @ 00a4d7a0 with catch @ 00a4db60 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

