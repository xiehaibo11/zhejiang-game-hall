
void FUN_00a1b940(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x928);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00a3557c(param_1,2,2);
  do {
    while (lVar1 = FUN_00a1b9e8(param_1,*puVar2,*(undefined8 *)(param_1 + 0x938),
                                *(undefined1 *)(param_1 + 0x3d1)), lVar1 != 0) {
      *(long *)(param_1 + 0x938) = lVar1;
      puVar2 = (undefined8 *)puVar2[1];
      if (puVar2 == (undefined8 *)0x0) goto LAB_00a1b9b4;
    }
    FUN_00a22d58(param_1,"ignoring failed cookie_init for %s\n",*puVar2);
    puVar2 = (undefined8 *)puVar2[1];
  } while (puVar2 != (undefined8 *)0x0);
LAB_00a1b9b4:
  FUN_00a16c3c(*(undefined8 *)(param_1 + 0x928));
  *(undefined8 *)(param_1 + 0x928) = 0;
  FUN_00a355d4(param_1,2);
  return;
}

