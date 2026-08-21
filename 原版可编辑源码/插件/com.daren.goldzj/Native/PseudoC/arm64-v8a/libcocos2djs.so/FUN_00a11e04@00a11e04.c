
void FUN_00a11e04(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x60) != 0) &&
     ((*(long *)(param_1 + 0x8c50) != 0 || (*(long *)(param_1 + 0x8c58) != 0)))) {
    lVar3 = *(long *)(param_1 + 0x8c90);
    iVar1 = FUN_00a1620c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x80),param_1 + 0x8c60);
    if (iVar1 == 0) goto LAB_00a11e88;
    FUN_00a22d58(param_1,"Internal error clearing splay node = %d\n",iVar1);
    lVar2 = *(long *)(lVar3 + 0x18);
    while (lVar2 != 0) {
      FUN_00a34074(lVar3,*(undefined8 *)(lVar3 + 8),0);
LAB_00a11e88:
      lVar2 = *(long *)(lVar3 + 0x18);
    }
    *(long *)(param_1 + 0x8c50) = 0;
    *(undefined8 *)(param_1 + 0x8c58) = 0;
  }
  return;
}

