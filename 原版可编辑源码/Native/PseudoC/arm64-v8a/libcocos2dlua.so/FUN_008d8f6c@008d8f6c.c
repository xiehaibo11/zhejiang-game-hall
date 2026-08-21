
void FUN_008d8f6c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 008d8f78 to 009d8f83 has its CatchHandler @ 008d922c */
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169b528;
                    /* try { // try from 008d8f90 to 009d8fa7 has its CatchHandler @ 008d9174 */
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

