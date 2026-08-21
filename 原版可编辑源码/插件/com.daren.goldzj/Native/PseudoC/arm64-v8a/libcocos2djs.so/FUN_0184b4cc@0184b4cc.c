
void FUN_0184b4cc(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (((char)plVar2[1] == '\n') && (lVar7 = plVar2[2], *(char *)(lVar7 + 8) == '\a')) {
    pcVar5 = *(char **)(lVar7 + 0x10);
    pcVar1 = *(char **)(lVar7 + 0x18);
    if ((long)pcVar1 - (long)pcVar5 == 0xb) {
      if (pcVar5 != pcVar1) {
        pcVar8 = "objc_object";
        do {
          if (*pcVar5 != *pcVar8) goto LAB_0184b54c;
          pcVar5 = pcVar5 + 1;
          pcVar8 = pcVar8 + 1;
        } while (pcVar1 != pcVar5);
      }
      return;
    }
  }
LAB_0184b54c:
  if (*(char *)((long)plVar2 + 10) != '\0') {
    if (*(char *)((long)plVar2 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if ((uVar3 & 1) != 0) goto LAB_0184b598;
      plVar2 = *(long **)(param_1 + 0x10);
    }
    if ((*(char *)((long)plVar2 + 0xb) != '\0') &&
       ((*(char *)((long)plVar2 + 0xb) != '\x02' ||
        (uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2), (uVar3 & 1) == 0))))
    goto LAB_0184b5e8;
  }
LAB_0184b598:
  lVar7 = param_2[1];
  uVar3 = lVar7 + 1;
  if (uVar3 < (ulong)param_2[2]) {
    pvVar4 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    param_2[2] = uVar3;
    pvVar4 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar4 + lVar7) = 0x29;
  param_2[1] = param_2[1] + 1;
LAB_0184b5e8:
                    /* WARNING: Could not recover jumptable at 0x0184b600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}

