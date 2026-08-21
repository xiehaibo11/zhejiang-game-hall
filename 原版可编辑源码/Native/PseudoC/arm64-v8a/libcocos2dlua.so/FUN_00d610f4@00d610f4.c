
void FUN_00d610f4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
                    /* try { // try from 00d6110c to 00e61113 has its CatchHandler @ 00d61584 */
  *puVar1 = &PTR_FUN_016d5ec8;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

