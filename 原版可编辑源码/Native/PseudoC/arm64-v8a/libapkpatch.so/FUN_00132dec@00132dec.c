
void FUN_00132dec(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x1734) < 9) {
    if (*(int *)(param_1 + 0x1734) < 1) goto LAB_00132e4c;
    lVar2 = *(long *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x10);
    uVar1 = *(undefined1 *)(param_1 + 0x1730);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar2) = *(undefined1 *)(param_1 + 0x1730);
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = *(undefined1 *)(param_1 + 0x1731);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x28) = lVar2 + 1;
  *(undefined1 *)(lVar3 + lVar2) = uVar1;
LAB_00132e4c:
  *(undefined2 *)(param_1 + 0x1730) = 0;
  *(undefined4 *)(param_1 + 0x1734) = 0;
  return;
}

