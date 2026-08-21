
void FUN_00dda9b0(void)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00dda9b8 to 00eda9c3 has its CatchHandler @ 00ddaa04 */
  puVar1 = operator_new(0x10);
                    /* try { // try from 00dda9c4 to 00edaa1f has its CatchHandler @ 00dda858 */
  *puVar1 = &PTR_FUN_016e2828;
  return;
}

