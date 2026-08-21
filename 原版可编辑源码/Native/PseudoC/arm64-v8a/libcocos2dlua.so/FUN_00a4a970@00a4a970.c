
void FUN_00a4a970(undefined8 param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00a4a98c to 00b4aac3 has its CatchHandler @ 00a4a8d8 */
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_017699f8)(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}

