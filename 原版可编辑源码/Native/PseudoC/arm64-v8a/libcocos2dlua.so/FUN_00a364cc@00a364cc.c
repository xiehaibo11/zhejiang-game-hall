
undefined8
FUN_00a364cc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long local_58;
  undefined8 local_48;
  
                    /* try { // try from 00a364d4 to 00b364eb has its CatchHandler @ 00a365b4 */
                    /* try { // try from 00a364f0 to 00b3651b has its CatchHandler @ 00a365b0 */
  if (0x1f < *(long *)(param_2 + 8) - 1U) goto switchD_00a36518_caseD_3;
  lVar10 = *param_1;
  switch(*(long *)(param_2 + 8)) {
  case 1:
                    /* try { // try from 00a3651c to 00b36543 has its CatchHandler @ 00a36484 */
    if ((param_5 & 1) == 0) {
      if ((char)param_1[0x78] != '\0') {
        for (plVar12 = *(long **)(*param_1 + 0x3b8); plVar12 != (long *)0x0;
            plVar12 = (long *)plVar12[1]) {
          iVar6 = FUN_00a4a220(*plVar12,"Authorization:",0xe);
          if (iVar6 != 0) goto LAB_00a36664;
                    /* try { // try from 00a36628 to 00b36683 has its CatchHandler @ 00a3685c */
        }
        goto LAB_00a36698;
      }
    }
    else if (*(char *)((long)param_1 + 0x3c1) != '\0') {
      if ((*(char *)((long)param_1 + 0x3bd) == '\0') || (*(char *)(lVar10 + 0x3d0) == '\0')) {
        plVar12 = *(long **)(lVar10 + 0x3b8);
      }
      else {
        plVar12 = *(long **)(lVar10 + 0x3c0);
      }
      for (; plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
        iVar6 = FUN_00a4a220(*plVar12,"Proxy-authorization:",0x14);
        if (iVar6 != 0) goto LAB_00a36664;
      }
LAB_00a36698:
      local_48 = 0;
                    /* try { // try from 00a3669c to 00b366af has its CatchHandler @ 00a36854 */
      local_58 = 0;
      bVar5 = (param_5 & 1) == 0;
      lVar11 = *param_1;
      plVar12 = param_1 + 0x32;
      plVar4 = param_1 + 0x31;
      if (bVar5) {
        plVar12 = param_1 + 0x44;
        plVar4 = param_1 + 0x43;
      }
                    /* try { // try from 00a366c4 to 00b366cf has its CatchHandler @ 00a3685c */
      pcVar9 = (char *)(lVar11 + 0xb08);
      plVar3 = param_1 + 0x84;
                    /* try { // try from 00a366e0 to 00b3673b has its CatchHandler @ 00a3686c */
      if (bVar5) {
        plVar3 = param_1 + 0x87;
      }
      FUN_00a241ac(pcVar9,0x4001,"%s:%s",*plVar4,*plVar12);
      sVar8 = strlen(pcVar9);
      uVar7 = FUN_00a2f7a0(lVar11,pcVar9,sVar8,&local_58,&local_48);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (local_58 == 0) {
        return 9;
      }
      (*(code *)PTR_free_01769a00)(*plVar3);
                    /* try { // try from 00a3673c to 00b3676f has its CatchHandler @ 00a365d0 */
      pcVar9 = "Proxy-";
      if ((param_5 & 1) == 0) {
        pcVar9 = "";
      }
      lVar11 = FUN_00a24258("%sAuthorization: Basic %s\r\n",pcVar9,local_58);
      *plVar3 = lVar11;
      (*(code *)PTR_free_01769a00)(local_58);
      if (*plVar3 == 0) {
        return 0x1b;
      }
                    /* try { // try from 00a36770 to 00b36783 has its CatchHandler @ 00a3685c */
      pcVar9 = "Basic";
      *(undefined1 *)(param_2 + 0x18) = 1;
      break;
    }
LAB_00a3666c:
    *(undefined1 *)(param_2 + 0x18) = 1;
switchD_00a36518_caseD_3:
    *(undefined1 *)(param_2 + 0x19) = 0;
    return 0;
  case 2:
    uVar7 = FUN_00a4c098(param_1,param_5 & 1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    pcVar9 = "Digest";
    break;
  default:
    goto switchD_00a36518_caseD_3;
  case 8:
    uVar7 = FUN_00a56fe4(param_1,param_5 & 1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    pcVar9 = "NTLM";
    break;
  case 0x20:
    uVar7 = FUN_00a572dc(param_1,param_5 & 1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
                    /* try { // try from 00a36594 to 00b3659b has its CatchHandler @ 00a365b0 */
    pcVar9 = "NTLM_WB";
  }
  bVar5 = (param_5 & 1) == 0;
                    /* try { // try from 00a3659c to 00b365cf has its CatchHandler @ 00a36484 */
  plVar12 = param_1 + 0x31;
  if (bVar5) {
    plVar12 = param_1 + 0x43;
  }
                    /* catch() { ... } // from try @ 00a364f0 with catch @ 00a365b0
                       catch() { ... } // from try @ 00a36594 with catch @ 00a365b0 */
                    /* catch() { ... } // from try @ 00a364d4 with catch @ 00a365b4
                       catch() { ... } // from try @ 00a36544 with catch @ 00a365b4 */
  pcVar1 = "Proxy";
  if (bVar5) {
    pcVar1 = "Server";
  }
  puVar2 = &DAT_013c996e;
                    /* try { // try from 00a365d0 to 00b36627 has its CatchHandler @ 00a365d0
                       catch() { ... } // from try @ 00a365d0 with catch @ 00a365d0
                       catch() { ... } // from try @ 00a3673c with catch @ 00a365d0
                       catch() { ... } // from try @ 00a36840 with catch @ 00a365d0 */
  if ((undefined1 *)*plVar12 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*plVar12;
  }
  FUN_00a38740(lVar10,"%s auth using %s with user \'%s\'\n",pcVar1,pcVar9,puVar2);
  *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x18) ^ 1;
                    /* try { // try from 00a3668c to 00b3669b has its CatchHandler @ 00a36858 */
  return 0;
LAB_00a36664:
  if (*plVar12 == 0) goto LAB_00a36698;
  goto LAB_00a3666c;
}

