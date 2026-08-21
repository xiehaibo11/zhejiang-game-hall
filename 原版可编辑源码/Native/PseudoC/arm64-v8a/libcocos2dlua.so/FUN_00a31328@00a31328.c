
void FUN_00a31328(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x928);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00a4bf64(param_1,2,2);
  do {
    while (lVar1 = FUN_00a313d0(param_1,*puVar2,*(undefined8 *)(param_1 + 0x938),
                                *(undefined1 *)(param_1 + 0x3d1)), lVar1 != 0) {
      *(long *)(param_1 + 0x938) = lVar1;
      puVar2 = (undefined8 *)puVar2[1];
      if (puVar2 == (undefined8 *)0x0) goto LAB_00a3139c;
    }
    FUN_00a38740(param_1,"ignoring failed cookie_init for %s\n",*puVar2);
    puVar2 = (undefined8 *)puVar2[1];
  } while (puVar2 != (undefined8 *)0x0);
LAB_00a3139c:
  FUN_00a2c624(*(undefined8 *)(param_1 + 0x928));
  *(undefined8 *)(param_1 + 0x928) = 0;
  FUN_00a4bfbc(param_1,2);
  return;
}

