
undefined8 FT_Set_Charmap(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long *plVar7;
  undefined1 auStack_50 [8];
  long local_48;
  
  if (param_1 == 0) {
    uVar3 = 0x23;
  }
  else {
    uVar3 = 0x26;
    if ((param_2 != (long *)0x0) && (plVar7 = *(long **)(param_1 + 0x50), plVar7 != (long *)0x0)) {
      if (0 < *(int *)(param_1 + 0x48)) {
        plVar1 = plVar7 + *(int *)(param_1 + 0x48);
        do {
          if ((long *)*plVar7 == param_2) {
            if (*param_2 == 0) {
LAB_00e17a24:
              *(long *)(param_1 + 0xa8) = *plVar7;
              return 0;
            }
            plVar4 = *(long **)(*param_2 + 0xb0);
            pcVar6 = *(code **)(*plVar4 + 0x40);
            if ((((pcVar6 == (code *)0x0) ||
                 (puVar5 = (undefined8 *)(*pcVar6)(plVar4,"tt-cmaps"), puVar5 == (undefined8 *)0x0))
                || (iVar2 = (*(code *)*puVar5)(param_2,auStack_50), iVar2 != 0)) ||
               (local_48 != 0xe)) goto LAB_00e17a24;
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 < plVar1);
      }
      uVar3 = 6;
    }
  }
  return uVar3;
}

