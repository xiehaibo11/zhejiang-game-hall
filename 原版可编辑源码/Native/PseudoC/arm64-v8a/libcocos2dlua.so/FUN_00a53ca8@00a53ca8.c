
undefined8 FUN_00a53ca8(long param_1,ulong param_2)

{
  int iVar1;
  
                    /* try { // try from 00a53cac to 00b53cbf has its CatchHandler @ 00a53d1c */
  if ((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x670) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x670) + 0x3c7) != '\0')) {
    iVar1 = FUN_00a54d8c(param_1 + 0x618,"%s",&DAT_013c89f5);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x688) = 0xc;
      do {
                    /* try { // try from 00a53cfc to 00b53d03 has its CatchHandler @ 00a53d18 */
        iVar1 = FUN_00a54a20(param_1 + 0x618,1);
        if (iVar1 != 0) break;
                    /* try { // try from 00a53d04 to 00b53d37 has its CatchHandler @ 00a53be4 */
      } while (*(int *)(param_1 + 0x688) != 0);
    }
  }
  FUN_00a55180(param_1 + 0x618);
                    /* catch() { ... } // from try @ 00a53c50 with catch @ 00a53d18
                       catch() { ... } // from try @ 00a53cfc with catch @ 00a53d18 */
                    /* catch() { ... } // from try @ 00a53c34 with catch @ 00a53d1c
                       catch() { ... } // from try @ 00a53cac with catch @ 00a53d1c */
  FUN_00a57a6c(param_1,*(undefined4 *)(param_1 + 0x6ac));
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x690));
  *(undefined8 *)(param_1 + 0x690) = 0;
                    /* try { // try from 00a53d38 to 00b53d87 has its CatchHandler @ 00a53d38
                       catch() { ... } // from try @ 00a53d38 with catch @ 00a53d38
                       catch() { ... } // from try @ 00a53dd8 with catch @ 00a53d38
                       catch() { ... } // from try @ 00a53e58 with catch @ 00a53d38 */
  return 0;
}

