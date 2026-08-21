
void FUN_00da1f94(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x270);
  iVar2 = *(int *)(lVar3 + 0x20);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(*(long *)(param_1 + 0x268) + 0x24) =
       *(int *)(*(long *)(param_1 + 0x268) + 0x24) + (iVar1 >> 3);
  *(undefined4 *)(lVar3 + 0x20) = 0;
  return;
}

