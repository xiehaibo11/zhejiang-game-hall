
void FUN_00df87b8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_016e7c80;
                    /* try { // try from 00df87e0 to 00ef87f3 has its CatchHandler @ 00df9048 */
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

