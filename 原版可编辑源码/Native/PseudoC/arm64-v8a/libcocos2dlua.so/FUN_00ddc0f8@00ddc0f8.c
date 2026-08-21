
void FUN_00ddc0f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
                    /* try { // try from 00ddc10c to 00edc123 has its CatchHandler @ 00ddd30c */
  *puVar1 = &PTR_FUN_016e2ba8;
  return;
}

