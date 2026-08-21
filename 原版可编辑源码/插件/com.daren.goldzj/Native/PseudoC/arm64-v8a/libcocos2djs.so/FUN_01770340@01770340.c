
undefined4 FUN_01770340(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  do {
    if (param_1 == param_2) {
      return 1;
    }
    if (param_1[4] != param_3[4]) {
      return 0;
    }
    uVar5 = param_1[5];
    uVar4 = param_3[5];
    if (uVar5 != uVar4) {
      if ((uVar5 & 3) != 2) {
        return 0;
      }
      if ((uVar4 & 3) != 2) {
        return 0;
      }
      lVar7 = *(long *)(uVar5 + 6) - *(long *)(uVar5 - 2);
      uVar6 = lVar7 >> 3;
      if (uVar6 != *(long *)(uVar4 + 6) - *(long *)(uVar4 - 2) >> 3) {
        return 0;
      }
      if (lVar7 != 0) {
        uVar8 = 0;
        do {
          if (uVar6 == uVar8) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (*(long *)(*(long *)(uVar5 - 2) + uVar8 * 8) !=
              *(long *)(*(long *)(uVar4 - 2) + uVar8 * 8)) {
            return 0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
      }
    }
    plVar3 = (long *)param_1[1];
    if ((long *)param_1[1] == (long *)0x0) {
      plVar3 = param_1 + 2;
      if (*(long **)*plVar3 != param_1) {
        do {
          lVar7 = *plVar3;
          plVar3 = (long *)(lVar7 + 0x10);
          param_1 = (long *)*plVar3;
        } while (*param_1 != lVar7);
        goto LAB_01770424;
      }
      plVar2 = (long *)param_3[1];
      param_1 = (long *)*plVar3;
    }
    else {
      do {
        param_1 = plVar3;
        plVar3 = (long *)*param_1;
      } while ((long *)*param_1 != (long *)0x0);
LAB_01770424:
      plVar2 = (long *)param_3[1];
    }
    if (plVar2 == (long *)0x0) {
      plVar3 = param_3 + 2;
      bVar1 = *(long **)*plVar3 != param_3;
      param_3 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar7 = *plVar3;
          plVar3 = (long *)(lVar7 + 0x10);
          param_3 = (long *)*plVar3;
        } while (*(long *)*plVar3 != lVar7);
      }
    }
    else {
      do {
        param_3 = plVar2;
        plVar2 = (long *)*param_3;
      } while (plVar2 != (long *)0x0);
    }
  } while( true );
}

