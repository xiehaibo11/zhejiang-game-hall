
int FUN_00a4c098(long *param_1,ulong param_2,undefined8 param_3,char *param_4)

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
  
  lVar8 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x8b78;
    plVar11 = param_1 + 0x87;
    plVar5 = param_1 + 0x43;
                    /* try { // try from 00a4c0f0 to 00b4c13b has its CatchHandler @ 00a4c0f0
                       catch() { ... } // from try @ 00a4c0f0 with catch @ 00a4c0f0
                       catch() { ... } // from try @ 00a4c140 with catch @ 00a4c0f0 */
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
  (*(code *)PTR_free_01769a00)(*plVar11);
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
                    /* try { // try from 00a4c13c to 00b4c13f has its CatchHandler @ 00a4c174 */
  if (*(long *)(lVar8 + lVar6) == 0) {
    *(undefined1 *)(lVar7 + 0x18) = 0;
    return 0;
  }
                    /* try { // try from 00a4c140 to 00b4c187 has its CatchHandler @ 00a4c0f0 */
  if ((*(char *)(lVar7 + 0x1a) == '\0') || (pcVar10 = strchr(param_4,0x3f), pcVar10 == (char *)0x0))
  {
                    /* try { // try from 00a4c188 to 00b4c29f has its CatchHandler @ 00a4c188
                       catch() { ... } // from try @ 00a4c188 with catch @ 00a4c188
                       catch() { ... } // from try @ 00a4c320 with catch @ 00a4c188 */
    lVar4 = (*(code *)PTR_strdup_01769a10)(param_4);
  }
  else {
    lVar4 = FUN_00a24258(&DAT_013c93de,(long)pcVar10 - (long)param_4,param_4);
  }
  if (lVar4 != 0) {
    iVar3 = FUN_00a5b9c4(lVar8,pcVar2,pcVar9,param_3,lVar4,(long *)(lVar8 + lVar6),&local_68,
                         auStack_70);
    (*(code *)PTR_free_01769a00)(lVar4);
    if (iVar3 != 0) {
      return iVar3;
    }
    pcVar2 = "Proxy-";
    if ((param_2 & 1) == 0) {
      pcVar2 = pcVar1;
    }
    lVar8 = FUN_00a24258("%sAuthorization: Digest %s\r\n",pcVar2,local_68);
    *plVar11 = lVar8;
    (*(code *)PTR_free_01769a00)(local_68);
    if (*plVar11 != 0) {
      *(undefined1 *)(lVar7 + 0x18) = 1;
      return 0;
    }
  }
  return 0x1b;
}

