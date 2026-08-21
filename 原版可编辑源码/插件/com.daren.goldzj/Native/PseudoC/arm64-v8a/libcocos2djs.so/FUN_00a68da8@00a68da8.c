
void FUN_00a68da8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
                    /* try { // try from 00a68dc0 to 00b68ea3 has its CatchHandler @ 00a68c60 */
  *puVar1 = &PTR_FUN_01c6e8b8;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

