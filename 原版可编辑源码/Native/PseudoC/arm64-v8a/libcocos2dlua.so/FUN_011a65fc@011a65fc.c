
void FUN_011a65fc(long param_1)

{
  long ****pppplVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long ****pppplVar5;
  __pid_t _Var6;
  int *piVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ***local_48;
  long ***local_40;
  int local_34;
  
  pppplVar8 = *(long *****)(*(long *)(param_1 + 8) + 0x170);
  pppplVar1 = (long ****)(*(long *)(param_1 + 8) + 0x170);
  local_48 = (long ***)&local_48;
  local_40 = (long ***)&local_48;
  if (pppplVar8 != pppplVar1) {
LAB_011a662c:
    do {
      pppplVar9 = pppplVar8;
      pppplVar8 = (long ****)*pppplVar9;
      do {
        _Var6 = waitpid(*(__pid_t *)(pppplVar9 + -1),&local_34,1);
        if (_Var6 != -1) {
          if (_Var6 == 0) goto LAB_011a6664;
          *(int *)(pppplVar9 + 2) = local_34;
          *pppplVar9[1] = (long **)*pppplVar9;
          (*pppplVar9)[1] = (long **)pppplVar9[1];
          *pppplVar9 = (long ***)&local_48;
          pppplVar9[1] = local_40;
          *local_40 = (long **)pppplVar9;
          local_40 = (long ***)pppplVar9;
          if (pppplVar8 == pppplVar1) goto LAB_011a66a8;
          goto LAB_011a662c;
        }
        piVar7 = (int *)__errno();
      } while (*piVar7 == 4);
      if (*piVar7 != 10) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_011a6664:
    } while (pppplVar8 != pppplVar1);
LAB_011a66a8:
    pppplVar1 = (long ****)local_48;
    pppplVar8 = (long ****)local_48;
    pppplVar9 = (long ****)local_40;
    while (pppplVar5 = pppplVar1, pppplVar5 != &local_48) {
      pppplVar1 = (long ****)*pppplVar5;
      *pppplVar5[1] = (long **)pppplVar1;
      (*pppplVar5)[1] = (long **)pppplVar5[1];
      uVar3 = *(uint *)(pppplVar5 + -3);
      *pppplVar5 = (long ***)pppplVar5;
      pppplVar5[1] = (long ***)pppplVar5;
      if (((uVar3 >> 2 & 1) != 0) &&
         (*(uint *)(pppplVar5 + -3) = uVar3 & 0xfffffffb, (uVar3 >> 3 & 1) != 0)) {
        *(int *)(pppplVar5[-0xd] + 1) = *(int *)(pppplVar5[-0xd] + 1) + -1;
      }
      if (pppplVar5[-2] != (long ***)0x0) {
        uVar2 = *(uint *)(pppplVar5 + 2);
        uVar4 = uVar2 >> 8 & 0xff;
        uVar3 = 0;
        if ((uVar2 + 1 & 0x7e) != 0) {
          uVar3 = uVar2 & 0x7f;
        }
        if ((uVar2 & 0x7f) != 0) {
          uVar4 = 0;
        }
        local_48 = (long ***)pppplVar8;
        local_40 = (long ***)pppplVar9;
        (*(code *)pppplVar5[-2])(pppplVar5 + -0xe,uVar4,uVar3);
        pppplVar8 = (long ****)local_48;
        pppplVar9 = (long ****)local_40;
      }
    }
  }
  return;
}

