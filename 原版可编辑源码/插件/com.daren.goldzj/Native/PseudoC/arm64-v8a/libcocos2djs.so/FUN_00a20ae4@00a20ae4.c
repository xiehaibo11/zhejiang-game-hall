
undefined8
FUN_00a20ae4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

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
  
  if (0x1f < *(long *)(param_2 + 8) - 1U) goto switchD_00a20b30_caseD_3;
  lVar10 = *param_1;
  switch(*(long *)(param_2 + 8)) {
  case 1:
    if ((param_5 & 1) == 0) {
      if ((char)param_1[0x78] != '\0') {
        for (plVar12 = *(long **)(*param_1 + 0x3b8); plVar12 != (long *)0x0;
            plVar12 = (long *)plVar12[1]) {
          iVar6 = FUN_00a33838(*plVar12,"Authorization:",0xe);
          if (iVar6 != 0) goto LAB_00a20c7c;
        }
        goto LAB_00a20cb0;
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
        iVar6 = FUN_00a33838(*plVar12,"Proxy-authorization:",0x14);
        if (iVar6 != 0) goto LAB_00a20c7c;
      }
LAB_00a20cb0:
      local_48 = 0;
                    /* try { // try from 00a20cb4 to 00b20cbb has its CatchHandler @ 00a20dbc */
      local_58 = 0;
                    /* try { // try from 00a20cbc to 00b20d4b has its CatchHandler @ 00a20bac */
      bVar5 = (param_5 & 1) == 0;
      lVar11 = *param_1;
      plVar12 = param_1 + 0x32;
      plVar4 = param_1 + 0x31;
      if (bVar5) {
        plVar12 = param_1 + 0x44;
        plVar4 = param_1 + 0x43;
      }
      pcVar9 = (char *)(lVar11 + 0xb08);
      plVar3 = param_1 + 0x84;
      if (bVar5) {
        plVar3 = param_1 + 0x87;
      }
      FUN_00a0e7c4(pcVar9,0x4001,"%s:%s",*plVar4,*plVar12);
      sVar8 = strlen(pcVar9);
      uVar7 = FUN_00a19db8(lVar11,pcVar9,sVar8,&local_58,&local_48);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (local_58 == 0) {
        return 9;
      }
      (*(code *)PTR_free_01d1b748)(*plVar3);
                    /* try { // try from 00a20d4c to 00b20d63 has its CatchHandler @ 00a20da0 */
      pcVar9 = "Proxy-";
      if ((param_5 & 1) == 0) {
        pcVar9 = "";
      }
                    /* try { // try from 00a20d64 to 00b20dbf has its CatchHandler @ 00a20bac */
      lVar11 = FUN_00a0e870("%sAuthorization: Basic %s\r\n",pcVar9,local_58);
      *plVar3 = lVar11;
      (*(code *)PTR_free_01d1b748)(local_58);
      if (*plVar3 == 0) {
        return 0x1b;
      }
      pcVar9 = "Basic";
      *(undefined1 *)(param_2 + 0x18) = 1;
      break;
    }
LAB_00a20c84:
    *(undefined1 *)(param_2 + 0x18) = 1;
switchD_00a20b30_caseD_3:
    *(undefined1 *)(param_2 + 0x19) = 0;
    return 0;
  case 2:
    uVar7 = FUN_00a356b0(param_1,param_5 & 1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    pcVar9 = "Digest";
    break;
  default:
    goto switchD_00a20b30_caseD_3;
  case 8:
    uVar7 = FUN_00a405fc(param_1,param_5 & 1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    pcVar9 = "NTLM";
    break;
  case 0x20:
    uVar7 = FUN_00a408f4(param_1,param_5 & 1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a20ad0 with catch @ 00a20ba8
                        */
                    /* try { // try from 00a20bac to 00b20cb3 has its CatchHandler @ 00a20bac
                       catch(type#1 @ 00000000) { ... } // from try @ 00a20bac with catch @ 00a20bac
                       catch(type#1 @ 00000000) { ... } // from try @ 00a20cbc with catch @ 00a20bac
                       catch(type#1 @ 00000000) { ... } // from try @ 00a20d64 with catch @ 00a20bac
                        */
    pcVar9 = "NTLM_WB";
  }
  bVar5 = (param_5 & 1) == 0;
  plVar12 = param_1 + 0x31;
  if (bVar5) {
    plVar12 = param_1 + 0x43;
  }
  pcVar1 = "Proxy";
  if (bVar5) {
    pcVar1 = "Server";
  }
  puVar2 = &DAT_0189703a;
  if ((undefined1 *)*plVar12 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*plVar12;
  }
  FUN_00a22d58(lVar10,"%s auth using %s with user \'%s\'\n",pcVar1,pcVar9,puVar2);
  *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x18) ^ 1;
  return 0;
LAB_00a20c7c:
  if (*plVar12 == 0) goto LAB_00a20cb0;
  goto LAB_00a20c84;
}

