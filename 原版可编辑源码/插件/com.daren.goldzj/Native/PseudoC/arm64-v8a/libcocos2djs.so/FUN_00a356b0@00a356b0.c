
int FUN_00a356b0(long *param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
                    /* try { // try from 00a356b4 to 00b356cb has its CatchHandler @ 00a35a14 */
  lVar8 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x8b78;
    plVar11 = param_1 + 0x87;
                    /* try { // try from 00a35704 to 00b3576f has its CatchHandler @ 00a3597c */
    plVar5 = param_1 + 0x43;
    param_1 = param_1 + 0x44;
    lVar7 = 0x8bf8;
  }
  else {
    lVar6 = 0x8bb8;
    plVar11 = param_1 + 0x84;
    plVar5 = param_1 + 0x31;
    param_1 = param_1 + 0x32;
    lVar7 = 0x8c18;
  }
  pcVar9 = (char *)*plVar5;
  pcVar10 = (char *)*param_1;
  lVar7 = lVar8 + lVar7;
  (*(code *)PTR_free_01d1b748)(*plVar11);
  *plVar11 = 0;
  pcVar1 = "";
  pcVar2 = pcVar1;
  if (pcVar9 != (char *)0x0) {
    pcVar2 = pcVar9;
  }
  pcVar9 = pcVar1;
  if (pcVar10 != (char *)0x0) {
    pcVar9 = pcVar10;
  }
  if (*(long *)(lVar8 + lVar6) == 0) {
    *(undefined1 *)(lVar7 + 0x18) = 0;
    return 0;
  }
  if ((*(char *)(lVar7 + 0x1a) == '\0') || (pcVar10 = strchr(param_4,0x3f), pcVar10 == (char *)0x0))
  {
    lVar4 = (*(code *)PTR_strdup_01d1b758)(param_4);
  }
  else {
                    /* try { // try from 00a35780 to 00b357e7 has its CatchHandler @ 00a35a14 */
    lVar4 = FUN_00a0e870(&DAT_01896aae,(long)pcVar10 - (long)param_4,param_4);
  }
  if (lVar4 != 0) {
    iVar3 = FUN_00a44fdc(lVar8,pcVar2,pcVar9,param_3,lVar4,(long *)(lVar8 + lVar6),&local_68,
                         auStack_70);
    (*(code *)PTR_free_01d1b748)(lVar4);
    if (iVar3 != 0) {
      return iVar3;
    }
                    /* try { // try from 00a357ec to 00b3582f has its CatchHandler @ 00a3597c */
    pcVar2 = "Proxy-";
    if ((param_2 & 1) == 0) {
      pcVar2 = pcVar1;
    }
    lVar8 = FUN_00a0e870("%sAuthorization: Digest %s\r\n",pcVar2,local_68);
    *plVar11 = lVar8;
    (*(code *)PTR_free_01d1b748)(local_68);
    if (*plVar11 != 0) {
      *(undefined1 *)(lVar7 + 0x18) = 1;
      return 0;
    }
  }
  return 0x1b;
}

