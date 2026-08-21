
void FUN_011ade44(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(lVar3 + 0x340);
  if (plVar2 != (long *)0x0) {
    do {
      if ((int)plVar2[8] <= *(int *)(param_1 + 0x80)) {
        if (*(int *)(param_1 + 0x80) <= (int)plVar2[8]) break;
        plVar2 = plVar2 + 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb;
  if ((uVar1 >> 3 & 1) != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
  }
  **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(*(long *)(param_1 + 0x70) + 8) = *(undefined8 *)(param_1 + 0x78);
  FUN_011ad530(plVar2,*(undefined8 *)(param_1 + 8));
  return;
}

