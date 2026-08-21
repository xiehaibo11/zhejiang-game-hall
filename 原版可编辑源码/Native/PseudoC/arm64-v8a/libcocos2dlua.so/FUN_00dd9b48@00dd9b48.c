
void FUN_00dd9b48(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
                    /* try { // try from 00dd9b60 to 00ed9b67 has its CatchHandler @ 00dd9c8c */
  *puVar1 = &PTR_FUN_016e2598;
  return;
}

