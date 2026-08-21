
void cpArbiterUnthread(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar2 = (long *)(param_1 + 0x38);
  lVar4 = *plVar2;
  lVar3 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    plVar6 = (long *)(lVar5 + 0x90);
    if (*(long *)(lVar5 + 0x90) == param_1) goto LAB_011722a0;
  }
  else {
    plVar6 = (long *)(lVar3 + 0x38);
    if (*(long *)(lVar3 + 0x28) != lVar5) {
      plVar6 = (long *)(lVar3 + 0x48);
    }
LAB_011722a0:
    *plVar6 = lVar4;
  }
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x38;
    if (*(long *)(lVar4 + 0x28) != lVar5) {
      lVar1 = lVar4 + 0x48;
    }
    *(long *)(lVar1 + 8) = lVar3;
  }
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != lVar3) {
    plVar2 = (long *)(param_1 + 0x48);
  }
  lVar4 = *plVar2;
  lVar5 = plVar2[1];
  if (lVar5 == 0) {
    plVar6 = (long *)(lVar3 + 0x90);
    if (*(long *)(lVar3 + 0x90) != param_1) goto LAB_01172308;
  }
  else {
    plVar6 = (long *)(lVar5 + 0x38);
    if (*(long *)(lVar5 + 0x28) != lVar3) {
      plVar6 = (long *)(lVar5 + 0x48);
    }
  }
  *plVar6 = lVar4;
LAB_01172308:
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x38;
    if (*(long *)(lVar4 + 0x28) != lVar3) {
      lVar1 = lVar4 + 0x48;
    }
    *(long *)(lVar1 + 8) = lVar5;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  return;
}

