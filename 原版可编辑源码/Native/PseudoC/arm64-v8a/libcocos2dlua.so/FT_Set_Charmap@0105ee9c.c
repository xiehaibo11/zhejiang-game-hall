
undefined8 FT_Set_Charmap(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_40 [8];
  long local_38;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != (long *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x50);
    if (puVar5 == (undefined8 *)0x0) {
      return 0x26;
    }
                    /* catch() { ... } // from try @ 0105ee20 with catch @ 0105eecc */
    if (*param_2 != 0) {
      plVar2 = *(long **)(*param_2 + 0xb0);
      pcVar4 = *(code **)(*plVar2 + 0x40);
      if ((((pcVar4 != (code *)0x0) &&
           (puVar3 = (undefined8 *)(*pcVar4)(plVar2,"tt-cmaps"), puVar3 != (undefined8 *)0x0)) &&
          (iVar1 = (*(code *)*puVar3)(param_2,auStack_40), iVar1 == 0)) && (local_38 == 0xe)) {
        return 6;
      }
    }
    if (0 < *(int *)(param_1 + 0x48)) {
      puVar3 = puVar5;
      do {
        puVar6 = puVar3 + 1;
        if ((long *)*puVar3 == param_2) {
          *(long **)(param_1 + 0xa8) = param_2;
          return 0;
        }
        puVar3 = puVar6;
      } while (puVar6 < puVar5 + *(int *)(param_1 + 0x48));
    }
    return 6;
  }
  return 0x26;
}

