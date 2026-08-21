
undefined8 FUN_00de6228(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if ((0 < *(int *)(param_1 + 0xc)) && (0 < *(int *)(param_1 + 0x10))) {
    lVar3 = *(long *)(param_1 + 0x38);
    iVar1 = (**(code **)(lVar3 + 0x1d8))(param_1,lVar3);
    if (*(code **)(lVar3 + 0x1e0) != (code *)0x0) {
      (**(code **)(lVar3 + 0x1e0))(param_1,lVar3,iVar1);
    }
    uVar2 = 1;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + iVar1;
  }
  return uVar2;
}

