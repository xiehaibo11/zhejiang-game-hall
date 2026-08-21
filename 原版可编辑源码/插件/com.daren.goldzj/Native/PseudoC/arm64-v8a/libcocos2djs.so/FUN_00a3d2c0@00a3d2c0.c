
undefined8 FUN_00a3d2c0(long param_1,ulong param_2)

{
  int iVar1;
  
  if ((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x670) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x670) + 0x3c7) != '\0')) {
                    /* try { // try from 00a3d2e4 to 00b3d3c7 has its CatchHandler @ 00a3d184 */
    iVar1 = FUN_00a3e3a4(param_1 + 0x618,"%s",&DAT_018960c5);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x688) = 0xc;
      do {
        iVar1 = FUN_00a3e038(param_1 + 0x618,1);
        if (iVar1 != 0) break;
      } while (*(int *)(param_1 + 0x688) != 0);
    }
  }
  FUN_00a3e798(param_1 + 0x618);
  FUN_00a41084(param_1,*(undefined4 *)(param_1 + 0x6ac));
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x690));
  *(undefined8 *)(param_1 + 0x690) = 0;
                    /* catch() { ... } // from try @ 00a3d204 with catch @ 00a3d358 */
                    /* catch() { ... } // from try @ 00a3d1f8 with catch @ 00a3d35c */
  return 0;
}

