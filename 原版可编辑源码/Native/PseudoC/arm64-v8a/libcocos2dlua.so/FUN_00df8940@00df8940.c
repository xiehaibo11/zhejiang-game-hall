
void FUN_00df8940(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00df8940 to 00ef8a0f has its CatchHandler @ 00df9008 */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_016e7d00;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

