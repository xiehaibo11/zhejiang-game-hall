
void FUN_01007b48(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 01007b58 to 01107b67 has its CatchHandler @ 01007be0 */
  puVar1 = operator_new(0x18);
                    /* try { // try from 01007b68 to 01107c03 has its CatchHandler @ 01007b08 */
  *puVar1 = &PTR_FUN_01725798;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

