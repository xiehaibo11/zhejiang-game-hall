
undefined8 FUN_00a399d0(long param_1,ulong param_2)

{
  int iVar1;
  
  if (((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x670) != 0)) &&
      (*(char *)(*(long *)(param_1 + 0x670) + 0x3c7) != '\0')) &&
     (iVar1 = FUN_00a3ae90(param_1,"LOGOUT"), iVar1 == 0)) {
                    /* try { // try from 00a39a0c to 00b39aef has its CatchHandler @ 00a3982c */
    *(undefined4 *)(param_1 + 0x688) = 0xe;
    do {
      iVar1 = FUN_00a3e038(param_1 + 0x618,1);
      if (iVar1 != 0) break;
    } while (*(int *)(param_1 + 0x688) != 0);
  }
  FUN_00a3e798(param_1 + 0x618);
  FUN_00a41084(param_1,*(undefined4 *)(param_1 + 0x6a4));
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6c0));
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6c8));
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  return 0;
}

