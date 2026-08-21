
void FUN_00df64f4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_016e75c8;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00df6528 to 00ef652b has its CatchHandler @ 00df66c8 */
  return;
}

