
void FUN_0090defc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
                    /* try { // try from 0090df14 to 00a0df1b has its CatchHandler @ 0090e070 */
                    /* try { // try from 0090df1c to 00a0df93 has its CatchHandler @ 0090de18 */
  *puVar1 = &PTR_FUN_0169c0f0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

