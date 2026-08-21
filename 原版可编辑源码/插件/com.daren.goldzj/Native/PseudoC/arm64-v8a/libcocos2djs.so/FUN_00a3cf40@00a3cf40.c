
int FUN_00a3cf40(long *param_1,undefined1 *param_2)

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
  
                    /* try { // try from 00a3cf44 to 00b3cf5b has its CatchHandler @ 00a3d11c */
  lVar2 = tpidr_el0;
                    /* try { // try from 00a3cf64 to 00b3cf6f has its CatchHandler @ 00a3d118 */
  lVar7 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a3cf70 to 00b3cf7b has its CatchHandler @ 00a3d114 */
                    /* try { // try from 00a3cf7c to 00b3d043 has its CatchHandler @ 00a3d12c */
  *param_2 = 0;
  FUN_00a11300(param_1,0);
  param_1[0xce] = (long)param_1;
  param_1[0xcd] = 1800000;
  param_1[0xcf] = (long)FUN_00a3d5a0;
  param_1[0xd0] = (long)FUN_00a3de0c;
  FUN_00a41834(param_1 + 0xd3,&PTR_DAT_01c6de20);
  FUN_00a3e210(param_1 + 0xc3);
  pcVar5 = (char *)param_1[0x45];
  *(undefined1 *)(param_1 + 0xd6) = 1;
  if (pcVar5 != (char *)0x0) {
    do {
      cVar1 = *pcVar5;
      pcVar8 = pcVar5;
      if (cVar1 == '\0') goto LAB_00a3d074;
      while ((pcVar8 = pcVar8 + 1, pcVar3 = pcVar8, cVar1 != '=' && (cVar1 != '\0'))) {
        cVar1 = *pcVar8;
      }
      while ((cVar1 != '\0' && (cVar1 != ';'))) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      }
      iVar4 = FUN_00a33838(pcVar5,"AUTH=",5);
      if (iVar4 == 0) {
        iVar4 = 3;
      }
      else {
                    /* try { // try from 00a3d044 to 00b3d183 has its CatchHandler @ 00a3cef0 */
        iVar4 = FUN_00a41794(param_1 + 0xd3,pcVar8,(long)(pcVar3 + -1) - (long)pcVar8);
      }
      pcVar5 = pcVar3;
      if (pcVar3[-1] != ';') {
        pcVar5 = pcVar3 + -1;
      }
    } while ((iVar4 == 0) && (pcVar5 != (char *)0x0));
    if (iVar4 != 0) goto LAB_00a3d110;
  }
LAB_00a3d074:
  lVar6 = *param_1;
  pcVar5 = *(char **)(lVar6 + 0x8cc0);
  if (**(char **)(lVar6 + 0x8cc0) == '\0') {
    iVar4 = FUN_00a3f5a0(acStack_46c,0x401);
    lVar6 = *param_1;
    pcVar5 = acStack_46c;
    if (iVar4 != 0) {
      pcVar5 = "localhost";
    }
  }
  iVar4 = FUN_00a2eb18(lVar6,pcVar5,0,param_1 + 0xd2,0,1);
  if (iVar4 != 0) goto LAB_00a3d110;
  *(undefined4 *)(param_1 + 0xd1) = 1;
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar5 = (char *)((long)param_1 + 0x68c), *pcVar5 == '\0')) {
    iVar4 = FUN_00a17c8c(param_1,0,pcVar5);
    if (iVar4 != 0) goto LAB_00a3d110;
    if (*pcVar5 == '\0') {
      iVar4 = 0;
      goto LAB_00a3d110;
    }
  }
  iVar4 = FUN_00a3e038(param_1 + 0xc3,0);
  *param_2 = (int)param_1[0xd1] == 0;
LAB_00a3d110:
                    /* catch() { ... } // from try @ 00a3cf70 with catch @ 00a3d114 */
                    /* catch() { ... } // from try @ 00a3cf64 with catch @ 00a3d118 */
                    /* catch() { ... } // from try @ 00a3cf44 with catch @ 00a3d11c */
  if (*(long *)(lVar2 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00a3cf7c with catch @ 00a3d12c */
  return iVar4;
}

