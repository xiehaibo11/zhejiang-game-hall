
undefined8 FUN_00a405fc(long *param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 local_50;
  long local_48;
  
  local_50 = 0;
  local_48 = 0;
  if ((param_2 & 1) == 0) {
    lVar4 = *param_1;
    plVar11 = param_1 + 0x87;
                    /* try { // try from 00a40648 to 00b4072b has its CatchHandler @ 00a4048c */
    plVar7 = param_1 + 0x43;
    plVar9 = param_1 + 0x44;
    param_1 = param_1 + 0x96;
    lVar6 = 0x8bf8;
  }
  else {
    lVar4 = *param_1;
    plVar11 = param_1 + 0x84;
    plVar7 = param_1 + 0x31;
    plVar9 = param_1 + 0x32;
    param_1 = param_1 + 0x9a;
    lVar6 = 0x8c18;
  }
  lVar4 = lVar4 + lVar6;
  pcVar8 = (char *)*plVar7;
  pcVar10 = (char *)*plVar9;
  *(undefined1 *)(lVar4 + 0x18) = 0;
  iVar3 = (int)*param_1;
  pcVar1 = "";
  pcVar2 = pcVar1;
  if (pcVar8 != (char *)0x0) {
    pcVar2 = pcVar8;
  }
  pcVar8 = pcVar1;
  if (pcVar10 != (char *)0x0) {
    pcVar8 = pcVar10;
  }
  if (iVar3 == 2) {
    uVar5 = FUN_00a458a8();
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (local_48 != 0) {
                    /* try { // try from 00a4072c to 00b4077f has its CatchHandler @ 00a4072c
                       catch() { ... } // from try @ 00a4072c with catch @ 00a4072c
                       catch() { ... } // from try @ 00a408f4 with catch @ 00a4072c */
      (*(code *)PTR_free_01d1b748)(*plVar11);
      pcVar2 = "Proxy-";
      if ((param_2 & 1) == 0) {
        pcVar2 = pcVar1;
      }
      lVar6 = FUN_00a0e870("%sAuthorization: NTLM %s\r\n",pcVar2,local_48);
      *plVar11 = lVar6;
      (*(code *)PTR_free_01d1b748)(local_48);
      if (*plVar11 == 0) {
        return 0x1b;
      }
                    /* try { // try from 00a40780 to 00b40797 has its CatchHandler @ 00a40970 */
      *(int *)param_1 = 3;
      *(undefined1 *)(lVar4 + 0x18) = 1;
    }
  }
  else {
    if (iVar3 == 3) {
      *(int *)param_1 = 4;
    }
    else if (iVar3 != 4) {
      uVar5 = FUN_00a4576c(pcVar2,pcVar8,param_1,&local_48,&local_50);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
                    /* catch() { ... } // from try @ 00a4050c with catch @ 00a406bc */
      if (local_48 == 0) {
        return 0;
      }
                    /* catch() { ... } // from try @ 00a40500 with catch @ 00a406c0 */
                    /* catch() { ... } // from try @ 00a404e0 with catch @ 00a406c4 */
      (*(code *)PTR_free_01d1b748)(*plVar11);
                    /* catch() { ... } // from try @ 00a40518 with catch @ 00a406d4 */
      pcVar2 = "Proxy-";
      if ((param_2 & 1) == 0) {
        pcVar2 = pcVar1;
      }
      lVar4 = FUN_00a0e870("%sAuthorization: NTLM %s\r\n",pcVar2,local_48);
      *plVar11 = lVar4;
      (*(code *)PTR_free_01d1b748)(local_48);
      if (*plVar11 != 0) {
        return 0;
      }
      return 0x1b;
    }
                    /* try { // try from 00a407a0 to 00b407ab has its CatchHandler @ 00a4096c */
    (*(code *)PTR_free_01d1b748)(*plVar11);
                    /* try { // try from 00a407ac to 00b407b7 has its CatchHandler @ 00a40968 */
    *plVar11 = 0;
    *(undefined1 *)(lVar4 + 0x18) = 1;
  }
                    /* try { // try from 00a407b8 to 00b408f3 has its CatchHandler @ 00a40980 */
  return 0;
}

