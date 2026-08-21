
void FUN_008f9b1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 008f9b20 to 009f9b37 has its CatchHandler @ 008f9bdc */
  puVar1 = operator_new(0x18);
                    /* try { // try from 008f9b38 to 009f9b6f has its CatchHandler @ 008f9a48 */
  *puVar1 = &PTR_FUN_0169bd08;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

