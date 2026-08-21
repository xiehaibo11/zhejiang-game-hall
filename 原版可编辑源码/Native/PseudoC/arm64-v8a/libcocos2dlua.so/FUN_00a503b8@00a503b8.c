
undefined8 FUN_00a503b8(long param_1,ulong param_2)

{
  int iVar1;
  
  if (((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x670) != 0)) &&
      (*(char *)(*(long *)(param_1 + 0x670) + 0x3c7) != '\0')) &&
     (iVar1 = FUN_00a51878(param_1,"LOGOUT"), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x688) = 0xe;
    do {
      iVar1 = FUN_00a54a20(param_1 + 0x618,1);
      if (iVar1 != 0) break;
    } while (*(int *)(param_1 + 0x688) != 0);
  }
  FUN_00a55180(param_1 + 0x618);
  FUN_00a57a6c(param_1,*(undefined4 *)(param_1 + 0x6a4));
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6c0));
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6c8));
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  return 0;
}

