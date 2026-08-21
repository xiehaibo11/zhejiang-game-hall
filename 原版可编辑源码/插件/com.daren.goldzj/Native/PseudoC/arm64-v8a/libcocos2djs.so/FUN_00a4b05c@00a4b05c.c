
undefined8 FUN_00a4b05c(long *param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00a4b064 to 00b4b0b7 has its CatchHandler @ 00a4b064
                       catch() { ... } // from try @ 00a4b064 with catch @ 00a4b064
                       catch() { ... } // from try @ 00a4b228 with catch @ 00a4b064 */
  puVar1 = *(undefined8 **)(*param_1 + 0x218);
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)PTR_free_01d1b748)(puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      close(*(int *)(puVar1 + 2));
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}

