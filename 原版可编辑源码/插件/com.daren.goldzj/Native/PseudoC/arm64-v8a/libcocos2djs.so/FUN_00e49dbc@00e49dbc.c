
undefined8 FUN_00e49dbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x328);
  if (*(long *)(*(long *)(param_1 + 8) + 0x98) == 0) {
    uVar1 = 0;
    puVar3 = (undefined8 *)(lVar2 + 0x98);
  }
  else {
    puVar3 = &local_28;
    uVar1 = FUN_00e153f4(lVar2,&local_28);
  }
  *(undefined8 *)(param_1 + 0x130) = *puVar3;
  return uVar1;
}

