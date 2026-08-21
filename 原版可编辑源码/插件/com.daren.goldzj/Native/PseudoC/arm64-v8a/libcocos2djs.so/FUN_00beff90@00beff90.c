
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00beff90(long param_1)

{
  long ****pppplVar1;
  uint uVar2;
  uint uVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long lVar6;
  __pid_t _Var7;
  int *piVar8;
  uint uVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  int local_1c;
  long ***local_18;
  long ***local_10;
  long local_8;
  
  pppplVar1 = (long ****)(*(long *)(param_1 + 8) + 0x170);
  pppplVar11 = *(long *****)(*(long *)(param_1 + 8) + 0x170);
  local_8 = ___stack_chk_guard;
  local_18 = (long ***)&local_18;
  local_10 = (long ***)&local_18;
  if (pppplVar1 != pppplVar11) {
    do {
      pppplVar12 = (long ****)*pppplVar11;
      do {
        _Var7 = waitpid(*(__pid_t *)(pppplVar11 + -1),&local_1c,1);
        if (_Var7 != -1) {
          if (_Var7 != 0) {
            *(int *)(pppplVar11 + 2) = local_1c;
            *pppplVar11[1] = (long **)*pppplVar11;
            (*pppplVar11)[1] = (long **)pppplVar11[1];
            *pppplVar11 = (long ***)&local_18;
            pppplVar11[1] = local_10;
            *local_10 = (long **)pppplVar11;
            local_10 = (long ***)pppplVar11;
          }
          goto LAB_00bf0044;
        }
        piVar8 = (int *)__errno();
      } while (*piVar8 == 4);
      if (*piVar8 != 10) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_00bf0044:
      pppplVar11 = pppplVar12;
      pppplVar10 = (long ****)local_18;
      pppplVar4 = (long ****)local_18;
      pppplVar5 = (long ****)local_10;
      lVar6 = local_8;
    } while (pppplVar1 != pppplVar12);
    while (pppplVar1 = pppplVar10, local_18 = (long ***)pppplVar4, local_10 = (long ***)pppplVar5,
          local_8 = lVar6, pppplVar1 != &local_18) {
      pppplVar10 = (long ****)*pppplVar1;
      uVar3 = *(uint *)(pppplVar1 + -3);
      *pppplVar1[1] = (long **)*pppplVar1;
      (*pppplVar1)[1] = (long **)pppplVar1[1];
      *pppplVar1 = (long ***)pppplVar1;
      pppplVar1[1] = (long ***)pppplVar1;
      if (((uVar3 >> 0xe & 1) != 0) &&
         (*(uint *)(pppplVar1 + -3) = uVar3 & 0xffffbfff, (uVar3 >> 0xd & 1) != 0)) {
        *(int *)(pppplVar1[-0xd] + 1) = *(int *)(pppplVar1[-0xd] + 1) + -1;
      }
      if (pppplVar1[-2] != (long ***)0x0) {
        uVar2 = *(uint *)(pppplVar1 + 2);
        uVar9 = 0;
        uVar3 = uVar2 & 0x7f;
        if ((uVar2 & 0x7f) == 0) {
          uVar9 = uVar2 >> 8 & 0xff;
        }
        if ((uVar2 + 1 & 0x7f) < 2) {
          uVar3 = 0;
        }
        (*(code *)pppplVar1[-2])(pppplVar1 + -0xe,uVar9,uVar3);
        pppplVar4 = (long ****)local_18;
        pppplVar5 = (long ****)local_10;
        lVar6 = local_8;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

