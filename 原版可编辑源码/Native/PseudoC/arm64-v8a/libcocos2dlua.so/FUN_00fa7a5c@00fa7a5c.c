
void FUN_00fa7a5c(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00fa7a6c to 010a7a83 has its CatchHandler @ 00fa7ad8 */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_01723110;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

