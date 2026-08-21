
ulong FUN_00a52180(long param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  
                    /* try { // try from 00a52190 to 00b521db has its CatchHandler @ 00a52190
                       catch() { ... } // from try @ 00a52190 with catch @ 00a52190
                       catch() { ... } // from try @ 00a521f8 with catch @ 00a52190 */
  *param_2 = 0;
  FUN_00a26ce8(param_1,0);
                    /* try { // try from 00a521dc to 00b521f7 has its CatchHandler @ 00a52274 */
  *(long *)(param_1 + 0x670) = param_1;
  *(undefined8 *)(param_1 + 0x668) = 1800000;
  *(code **)(param_1 + 0x678) = FUN_00a52748;
  *(code **)(param_1 + 0x680) = FUN_00a52df4;
  *(undefined4 *)(param_1 + 0x6c4) = 0xffffffff;
                    /* try { // try from 00a521f8 to 00b522ab has its CatchHandler @ 00a52190 */
  FUN_00a5821c(param_1 + 0x6a0,&PTR_s_pop_013e86d0_0xa_016a43c0);
  FUN_00a54bf8(param_1 + 0x618);
  pcVar6 = *(char **)(param_1 + 0x228);
  *(undefined1 *)(param_1 + 0x6b8) = 1;
  if (pcVar6 == (char *)0x0) {
LAB_00a522e0:
    uVar8 = 0;
  }
  else {
    do {
      cVar2 = *pcVar6;
      pcVar9 = pcVar6;
      if (cVar2 == '\0') goto LAB_00a522e0;
      while ((pcVar9 = pcVar9 + 1, pcVar3 = pcVar9, cVar2 != '=' && (cVar2 != '\0'))) {
        cVar2 = *pcVar9;
      }
      while ((cVar2 != '\0' && (cVar2 != ';'))) {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      }
                    /* catch() { ... } // from try @ 00a521dc with catch @ 00a52274 */
      iVar4 = FUN_00a4a220(pcVar6,"AUTH=",5);
      if (iVar4 == 0) {
        uVar8 = 3;
      }
      else {
        lVar10 = (long)(pcVar3 + -1) - (long)pcVar9;
        uVar5 = FUN_00a5817c(param_1 + 0x6a0,pcVar9,lVar10);
        uVar8 = (ulong)uVar5;
                    /* try { // try from 00a522ac to 00b522ef has its CatchHandler @ 00a522ac
                       catch() { ... } // from try @ 00a522ac with catch @ 00a522ac
                       catch() { ... } // from try @ 00a52304 with catch @ 00a522ac */
        if ((uVar5 != 0) && (iVar4 = FUN_00a4a220(pcVar9,"+APOP",lVar10), iVar4 != 0)) {
          uVar8 = 0;
          *(undefined4 *)(param_1 + 0x6c4) = 2;
          *(undefined4 *)(param_1 + 0x6b0) = 0;
        }
      }
      pcVar6 = pcVar3;
      if (pcVar3[-1] != ';') {
        pcVar6 = pcVar3 + -1;
      }
    } while (((int)uVar8 == 0) && (pcVar6 != (char *)0x0));
  }
  if (*(int *)(param_1 + 0x6c4) != 2) {
                    /* try { // try from 00a522f0 to 00b52303 has its CatchHandler @ 00a52378 */
    uVar7 = 4;
    if (*(int *)(param_1 + 0x6b0) == -0x21) {
      uVar7 = 0xffffffff;
    }
                    /* try { // try from 00a52304 to 00b523b3 has its CatchHandler @ 00a522ac */
    uVar1 = 0;
    if (*(int *)(param_1 + 0x6b0) != 0) {
      uVar1 = uVar7;
    }
    *(undefined4 *)(param_1 + 0x6c4) = uVar1;
  }
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  *(undefined4 *)(param_1 + 0x688) = 1;
  if (((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) != 0) &&
     (pcVar6 = (char *)(param_1 + 0x68c), *pcVar6 == '\0')) {
    uVar5 = FUN_00a2d674(param_1,0,pcVar6);
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
    if (*pcVar6 == '\0') {
      return 0;
    }
  }
  uVar8 = FUN_00a54a20(param_1 + 0x618,0);
  *param_2 = *(int *)(param_1 + 0x688) == 0;
                    /* catch() { ... } // from try @ 00a522f0 with catch @ 00a52378 */
  return uVar8;
}

