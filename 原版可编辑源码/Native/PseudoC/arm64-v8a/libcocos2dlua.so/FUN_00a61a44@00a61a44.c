
undefined8 FUN_00a61a44(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x218);
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 00a61a68 to 00b61a73 has its CatchHandler @ 00a61af0 */
    (*(code *)PTR_free_01769a00)(puVar1[1]);
                    /* try { // try from 00a61a74 to 00b61b27 has its CatchHandler @ 00a619f0 */
    *puVar1 = 0;
    puVar1[1] = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      close(*(int *)(puVar1 + 2));
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}

