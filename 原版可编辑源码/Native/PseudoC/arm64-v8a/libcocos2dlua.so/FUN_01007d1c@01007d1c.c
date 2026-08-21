
void FUN_01007d1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 01007d30 to 01107d3f has its CatchHandler @ 01007d68 */
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_01725918;
                    /* try { // try from 01007d40 to 01107d7b has its CatchHandler @ 01007d08 */
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

