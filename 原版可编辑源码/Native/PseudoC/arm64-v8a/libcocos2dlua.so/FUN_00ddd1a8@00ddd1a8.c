
void FUN_00ddd1a8(void)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00ddd1ac to 00edd1b3 has its CatchHandler @ 00ddd200 */
                    /* try { // try from 00ddd1b4 to 00edd1bb has its CatchHandler @ 00ddd270 */
  puVar1 = operator_new(0x10);
                    /* try { // try from 00ddd1bc to 00edd1c3 has its CatchHandler @ 00ddd1fc */
  *puVar1 = &PTR_FUN_016e2c28;
                    /* try { // try from 00ddd1c4 to 00edd1cb has its CatchHandler @ 00ddd1f8 */
  return;
}

