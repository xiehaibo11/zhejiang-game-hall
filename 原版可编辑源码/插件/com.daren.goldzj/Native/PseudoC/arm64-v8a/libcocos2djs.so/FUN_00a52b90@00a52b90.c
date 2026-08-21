
undefined8 FUN_00a52b90(long param_1,long *param_2)

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
                    /* try { // try from 00a52bc0 to 00b52bd7 has its CatchHandler @ 00a52d40 */
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
                    /* try { // try from 00a52bec to 00b52bff has its CatchHandler @ 00a52d3c */
  param_2[8] = lVar1;
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x50) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x50);
  }
                    /* try { // try from 00a52c00 to 00b52c0f has its CatchHandler @ 00a52d10 */
  param_2[0xb] = lVar1;
  param_2[7] = lVar7 + *(long *)(lVar6 + 0x40);
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x30) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x30);
  }
  param_2[9] = lVar1;
                    /* try { // try from 00a52c28 to 00b52c2f has its CatchHandler @ 00a52cf4 */
                    /* try { // try from 00a52c30 to 00b52c3f has its CatchHandler @ 00a52d24 */
  pcVar2 = *(code **)(param_1 + 0x8a0);
                    /* try { // try from 00a52c40 to 00b52c47 has its CatchHandler @ 00a52d0c */
  if (*(code **)(param_1 + 0x8a0) == (code *)0x0) {
    pcVar2 = FUN_00a53e3c;
  }
                    /* try { // try from 00a52c48 to 00b52c77 has its CatchHandler @ 00a52d14 */
  iVar3 = (*pcVar2)(*(undefined8 *)(param_1 + 0x8a8),*(undefined8 *)(param_1 + 0x8d40));
                    /* try { // try from 00a52c78 to 00b52d8f has its CatchHandler @ 00a52b70 */
  if ((iVar3 == 0) &&
     ((((int)param_2[1] != 2 || ((char *)param_2[0xb] == (char *)0x0)) ||
      (pcVar4 = strstr((char *)param_2[0xb]," -> "), pcVar4 == (char *)0x0)))) {
    iVar3 = FUN_00a33fc4(lVar8,*(undefined8 *)(lVar8 + 8),param_2);
    if (iVar3 == 0) {
      FUN_00a51d4c(0,param_2);
      uVar5 = 0x1b;
      goto LAB_00a52c9c;
    }
  }
  else {
    FUN_00a51d4c(0,param_2);
  }
  uVar5 = 0;
LAB_00a52c9c:
  *(undefined8 *)(*plVar9 + 0x10) = 0;
  return uVar5;
}

