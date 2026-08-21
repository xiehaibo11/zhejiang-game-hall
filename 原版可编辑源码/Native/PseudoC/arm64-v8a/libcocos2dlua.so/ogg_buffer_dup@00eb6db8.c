
void ogg_buffer_dup(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1 != (long *)0x0) {
    plVar4 = (long *)0x0;
    plVar5 = (long *)0x0;
    do {
      lVar3 = *(long *)(*param_1 + 0x18);
      plVar1 = *(long **)(lVar3 + 8);
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
      if (plVar1 == (long *)0x0) {
        plVar1 = malloc(0x20);
      }
      else {
        *(long *)(lVar3 + 8) = plVar1[3];
      }
      plVar1[1] = 0;
      plVar1[2] = 0;
      plVar1[3] = 0;
      plVar2 = plVar1;
      if (plVar4 != (long *)0x0) {
        plVar4[3] = (long)plVar1;
        plVar2 = plVar5;
      }
      lVar3 = *param_1;
      plVar1[1] = param_1[1];
      *plVar1 = lVar3;
      plVar1[2] = param_1[2];
      param_1 = (long *)param_1[3];
      plVar4 = plVar1;
      plVar5 = plVar2;
    } while (param_1 != (long *)0x0);
    for (; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[3]) {
      *(int *)(*plVar2 + 0x10) = *(int *)(*plVar2 + 0x10) + 1;
    }
  }
  return;
}

