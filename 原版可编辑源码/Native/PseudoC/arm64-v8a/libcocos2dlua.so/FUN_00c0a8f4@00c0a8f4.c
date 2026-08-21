
undefined8 FUN_00c0a8f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  uVar1 = FUN_00bfba1c(lVar3);
  plVar2 = (long *)FUN_00c1c6dc(lVar3,*(undefined8 *)*param_1,uVar1);
  if (*plVar2 == -1) {
    *plVar2 = -0x1000000000001;
    if (*(ulong *)(*(long *)(lVar3 + 0x10) + 0x28) <= *(ulong *)(*(long *)(lVar3 + 0x10) + 0x20))
    goto LAB_00c0a978;
  }
  else if (*(ulong *)(*(long *)(lVar3 + 0x10) + 0x28) <= *(ulong *)(*(long *)(lVar3 + 0x10) + 0x20))
  {
LAB_00c0a978:
    FUN_00c19f80(lVar3);
    return uVar1;
  }
  return uVar1;
}

