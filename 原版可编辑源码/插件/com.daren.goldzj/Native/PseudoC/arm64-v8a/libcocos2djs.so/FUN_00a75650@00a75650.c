
undefined8 * FUN_00a75650(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00a75658 to 00b7569b has its CatchHandler @ 00a757e8 */
  puVar1 = operator_new(0x70);
  *puVar1 = &PTR_FUN_01c6eed0;
  FUN_00a758e0(puVar1 + 1,param_1 + 8);
  return puVar1;
}

