
void FUN_01007974(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0100797c to 0110798b has its CatchHandler @ 010079f8 */
  puVar1 = operator_new(0x18);
                    /* try { // try from 0100798c to 01107a1b has its CatchHandler @ 01007938 */
  *puVar1 = &PTR_FUN_01725618;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

