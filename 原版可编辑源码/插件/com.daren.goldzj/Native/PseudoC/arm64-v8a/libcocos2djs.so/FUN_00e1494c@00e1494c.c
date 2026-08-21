
void FUN_00e1494c(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_2;
  if (param_3 == 4) {
    lVar2 = *(long *)(lVar1 + 0x160);
    lVar4 = *(long *)(lVar1 + 0x170);
    lVar5 = *(long *)(lVar1 + 0x180);
    lVar3 = lVar2;
    if (lVar2 <= lVar4) {
      lVar3 = lVar4;
    }
    if (lVar4 <= lVar2) {
      lVar2 = lVar4;
    }
    if (lVar3 <= lVar5) {
      lVar3 = lVar5;
    }
    if (lVar5 <= lVar2) {
      lVar2 = lVar5;
    }
    *param_1 = *param_1 - lVar3;
    param_1[2] = param_1[2] - lVar2;
    lVar3 = *(long *)(lVar1 + 0x158);
    lVar4 = *(long *)(lVar1 + 0x168);
    lVar2 = *(long *)(lVar1 + 0x178);
    lVar1 = lVar3;
    if (lVar4 <= lVar3) {
      lVar1 = lVar4;
    }
    if (lVar3 <= lVar4) {
      lVar3 = lVar4;
    }
    if (lVar2 <= lVar1) {
      lVar1 = lVar2;
    }
    if (lVar3 <= lVar2) {
      lVar3 = lVar2;
    }
    lVar3 = param_1[3] + lVar3;
    param_1[1] = lVar1 + param_1[1];
  }
  else {
    if (param_3 != 3) {
      return;
    }
    lVar2 = *(long *)(lVar1 + 0x158);
    lVar4 = *(long *)(lVar1 + 0x168);
    lVar5 = *(long *)(lVar1 + 0x178);
    lVar3 = lVar2;
    if (lVar2 <= lVar4) {
      lVar3 = lVar4;
    }
    if (lVar4 <= lVar2) {
      lVar2 = lVar4;
    }
    if (lVar3 <= lVar5) {
      lVar3 = lVar5;
    }
    if (lVar5 <= lVar2) {
      lVar2 = lVar5;
    }
    *param_1 = *param_1 - lVar3;
    param_1[2] = param_1[2] - lVar2;
    lVar3 = *(long *)(lVar1 + 0x160);
    lVar4 = *(long *)(lVar1 + 0x170);
    lVar2 = *(long *)(lVar1 + 0x180);
    lVar1 = lVar3;
    if (lVar3 <= lVar4) {
      lVar1 = lVar4;
    }
    if (lVar4 <= lVar3) {
      lVar3 = lVar4;
    }
    if (lVar1 <= lVar2) {
      lVar1 = lVar2;
    }
    if (lVar2 <= lVar3) {
      lVar3 = lVar2;
    }
    param_1[1] = param_1[1] - lVar1;
    lVar3 = param_1[3] - lVar3;
  }
  param_1[3] = lVar3;
  return;
}

