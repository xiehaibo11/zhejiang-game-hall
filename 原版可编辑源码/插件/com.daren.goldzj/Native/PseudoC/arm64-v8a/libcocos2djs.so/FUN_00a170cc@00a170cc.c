
void FUN_00a170cc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(param_2 + 0x718);
  if (lVar3 != 0) {
    for (plVar1 = (long *)**(long **)(lVar3 + 0x10); plVar1 != (long *)0x0;
        plVar1 = (long *)plVar1[2]) {
      if (*plVar1 == param_2) {
        FUN_00a34074(*(long **)(lVar3 + 0x10),plVar1,0);
        *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + -1;
        *(undefined8 *)(param_2 + 0x718) = 0;
        lVar2 = *(long *)(lVar3 + 8);
        goto joined_r0x00a17170;
      }
    }
    lVar2 = *(long *)(lVar3 + 8);
joined_r0x00a17170:
    if ((lVar2 == 0) && (param_1 != 0)) {
      FUN_00a34954(param_1,auStack_48);
      do {
        plVar1 = (long *)FUN_00a34964(auStack_48);
        if (plVar1 == (long *)0x0) goto joined_r0x00a17174;
      } while (*plVar1 != lVar3);
      FUN_00a345c4(param_1,plVar1[1],plVar1[2]);
    }
joined_r0x00a17174:
    if (param_1 != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
    }
  }
  return;
}

