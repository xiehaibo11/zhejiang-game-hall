
undefined8 FUN_00a69578(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 0x8d50);
  lVar7 = param_2[0xd];
  lVar6 = *plVar9;
  lVar8 = *(long *)(param_1 + 0x8d48);
  *param_2 = lVar7 + *(long *)(lVar6 + 0x28);
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x38) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x38);
  }
  param_2[10] = lVar1;
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x48) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x48);
  }
  param_2[8] = lVar1;
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x50) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x50);
  }
  param_2[0xb] = lVar1;
  param_2[7] = lVar7 + *(long *)(lVar6 + 0x40);
                    /* try { // try from 00a695fc to 00b69647 has its CatchHandler @ 00a695fc
                       catch() { ... } // from try @ 00a695fc with catch @ 00a695fc
                       catch() { ... } // from try @ 00a6964c with catch @ 00a695fc */
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x30) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x30);
  }
  param_2[9] = lVar1;
  pcVar2 = *(code **)(param_1 + 0x8a0);
  if (*(code **)(param_1 + 0x8a0) == (code *)0x0) {
    pcVar2 = FUN_00a6a824;
  }
  iVar3 = (*pcVar2)(*(undefined8 *)(param_1 + 0x8a8),*(undefined8 *)(param_1 + 0x8d40));
                    /* try { // try from 00a69648 to 00b6964b has its CatchHandler @ 00a69680 */
                    /* try { // try from 00a6964c to 00b69693 has its CatchHandler @ 00a695fc */
  if ((iVar3 == 0) &&
     ((((int)param_2[1] != 2 || ((char *)param_2[0xb] == (char *)0x0)) ||
      (pcVar4 = strstr((char *)param_2[0xb]," -> "), pcVar4 == (char *)0x0)))) {
    iVar3 = FUN_00a4a9ac(lVar8,*(undefined8 *)(lVar8 + 8),param_2);
    if (iVar3 == 0) {
      FUN_00a68734(0,param_2);
      uVar5 = 0x1b;
      goto LAB_00a69684;
    }
  }
  else {
    FUN_00a68734(0,param_2);
  }
                    /* catch() { ... } // from try @ 00a69648 with catch @ 00a69680 */
  uVar5 = 0;
LAB_00a69684:
  *(undefined8 *)(*plVar9 + 0x10) = 0;
                    /* try { // try from 00a69694 to 00b69d93 has its CatchHandler @ 00a69694
                       catch() { ... } // from try @ 00a69694 with catch @ 00a69694
                       catch() { ... } // from try @ 00a69e14 with catch @ 00a69694 */
  return uVar5;
}

