
undefined8 FUN_00a404a8(undefined8 *param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  
  piVar1 = (int *)(param_1 + 0x9a);
  piVar2 = (int *)(param_1 + 0x96);
  piVar3 = piVar1;
                    /* try { // try from 00a404e0 to 00b404f7 has its CatchHandler @ 00a406c4 */
  if ((param_2 & 1) == 0) {
    piVar3 = piVar2;
  }
  uVar5 = FUN_00a33994(&DAT_018911cb,param_3,4);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  pbVar7 = (byte *)(param_3 + 4);
  uVar6 = (uint)*pbVar7;
  if (*pbVar7 != 0) {
    do {
      iVar4 = isspace(uVar6);
      if (iVar4 == 0) {
        uVar5 = FUN_00a45588(*param_1,pbVar7,piVar3);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        iVar4 = 2;
        goto LAB_00a40568;
      }
                    /* try { // try from 00a40500 to 00b4050b has its CatchHandler @ 00a406c0 */
      pbVar7 = pbVar7 + 1;
      uVar6 = (uint)*pbVar7;
    } while (uVar6 != 0);
  }
  iVar4 = *piVar3;
                    /* try { // try from 00a4050c to 00b40517 has its CatchHandler @ 00a406bc */
  if (iVar4 == 0) {
LAB_00a40548:
    iVar4 = 1;
LAB_00a40568:
    uVar5 = 0;
    *piVar3 = iVar4;
  }
  else {
    if (iVar4 == 3) {
      FUN_00a22d58(*param_1,"NTLM handshake rejected\n");
      FUN_00a45870(piVar2);
      FUN_00a45870(piVar1);
      FUN_00a407d8(param_1);
      *piVar3 = 0;
    }
    else {
                    /* try { // try from 00a40518 to 00b40647 has its CatchHandler @ 00a406d4 */
      if (iVar4 == 4) {
        FUN_00a22d58(*param_1,"NTLM auth restarted\n");
        FUN_00a45870(piVar2);
        FUN_00a45870(piVar1);
        FUN_00a407d8(param_1);
        goto LAB_00a40548;
      }
      FUN_00a22d58(*param_1,"NTLM handshake failure (internal error)\n");
    }
    uVar5 = 9;
  }
  return uVar5;
}

