
int FUN_00a53928(long *param_1,undefined1 *param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char acStack_46c [1036];
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  *param_2 = 0;
  FUN_00a26ce8(param_1,0);
  param_1[0xce] = (long)param_1;
  param_1[0xcd] = 1800000;
  param_1[0xcf] = (long)FUN_00a53f88;
  param_1[0xd0] = (long)FUN_00a547f4;
  FUN_00a5821c(param_1 + 0xd3,&PTR_s_smtp_012c585a_7_016a45f0);
  FUN_00a54bf8(param_1 + 0xc3);
  pcVar5 = (char *)param_1[0x45];
  *(undefined1 *)(param_1 + 0xd6) = 1;
  if (pcVar5 != (char *)0x0) {
    do {
      cVar1 = *pcVar5;
      pcVar8 = pcVar5;
      if (cVar1 == '\0') goto LAB_00a53a5c;
      while ((pcVar8 = pcVar8 + 1, pcVar3 = pcVar8, cVar1 != '=' && (cVar1 != '\0'))) {
        cVar1 = *pcVar8;
      }
      while ((cVar1 != '\0' && (cVar1 != ';'))) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      }
      iVar4 = FUN_00a4a220(pcVar5,"AUTH=",5);
      if (iVar4 == 0) {
        iVar4 = 3;
      }
      else {
        iVar4 = FUN_00a5817c(param_1 + 0xd3,pcVar8,(long)(pcVar3 + -1) - (long)pcVar8);
      }
      pcVar5 = pcVar3;
      if (pcVar3[-1] != ';') {
        pcVar5 = pcVar3 + -1;
      }
    } while ((iVar4 == 0) && (pcVar5 != (char *)0x0));
    if (iVar4 != 0) goto LAB_00a53af8;
  }
LAB_00a53a5c:
  lVar6 = *param_1;
  pcVar5 = *(char **)(lVar6 + 0x8cc0);
  if (**(char **)(lVar6 + 0x8cc0) == '\0') {
    iVar4 = FUN_00a55f88(acStack_46c,0x401);
    lVar6 = *param_1;
    pcVar5 = acStack_46c;
    if (iVar4 != 0) {
      pcVar5 = "localhost";
    }
  }
  iVar4 = FUN_00a45500(lVar6,pcVar5,0,param_1 + 0xd2,0,1);
  if (iVar4 != 0) goto LAB_00a53af8;
  *(undefined4 *)(param_1 + 0xd1) = 1;
                    /* try { // try from 00a53ac8 to 00b53afb has its CatchHandler @ 00a53bc8 */
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar5 = (char *)((long)param_1 + 0x68c), *pcVar5 == '\0')) {
    iVar4 = FUN_00a2d674(param_1,0,pcVar5);
    if (iVar4 != 0) goto LAB_00a53af8;
                    /* try { // try from 00a53b48 to 00b53be3 has its CatchHandler @ 00a539fc */
    if (*pcVar5 == '\0') {
      iVar4 = 0;
      goto LAB_00a53af8;
    }
  }
  iVar4 = FUN_00a54a20(param_1 + 0xc3,0);
  *param_2 = (int)param_1[0xd1] == 0;
LAB_00a53af8:
                    /* try { // try from 00a53afc to 00b53b0f has its CatchHandler @ 00a53b94 */
  if (*(long *)(lVar2 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a53b14 to 00b53b47 has its CatchHandler @ 00a53b98 */
  return iVar4;
}

