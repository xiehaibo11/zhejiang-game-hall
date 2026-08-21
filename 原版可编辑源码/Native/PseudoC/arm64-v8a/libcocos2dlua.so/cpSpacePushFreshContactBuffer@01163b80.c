
void cpSpacePushFreshContactBuffer(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    piVar3 = calloc(1,0x7fd8);
    cpArrayPush(uVar2,piVar3);
    *piVar3 = iVar1;
    *(int **)(piVar3 + 2) = piVar3;
  }
  else {
    piVar3 = *(int **)(lVar4 + 8);
    if ((uint)(iVar1 - *piVar3) <= *(uint *)(param_1 + 0x20)) {
      uVar2 = *(undefined8 *)(param_1 + 0x98);
      piVar3 = calloc(1,0x7fd8);
      cpArrayPush(uVar2,piVar3);
      *piVar3 = iVar1;
      uVar2 = *(undefined8 *)(lVar4 + 8);
      piVar3[4] = 0;
      *(undefined8 *)(piVar3 + 2) = uVar2;
      *(int **)(lVar4 + 8) = piVar3;
      goto LAB_01163c3c;
    }
    *piVar3 = iVar1;
    if (piVar3 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(piVar3 + 2);
    }
    *(undefined8 *)(piVar3 + 2) = uVar2;
  }
  piVar3[4] = 0;
LAB_01163c3c:
  *(int **)(param_1 + 0x80) = piVar3;
  return;
}

