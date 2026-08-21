
void cpArbiterGetBodies(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  
  bVar3 = *(char *)(param_1 + 0x88) != '\0';
  plVar1 = (long *)(param_1 + 0x18);
  if (bVar3) {
    plVar1 = (long *)(param_1 + 0x20);
  }
  plVar2 = (long *)(param_1 + 0x20);
  if (bVar3) {
    plVar2 = (long *)(param_1 + 0x18);
  }
  lVar4 = *plVar2;
  *param_2 = *(undefined8 *)(*plVar1 + 0x10);
  *param_3 = *(undefined8 *)(lVar4 + 0x10);
  return;
}

