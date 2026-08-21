
void FUN_0094f2d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0094f2d0 to 00a4f2f7 has its CatchHandler @ 0094f410 */
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169cf70;
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 0094f2f8 to 00a4f3f3 has its CatchHandler @ 0094f1d0 */
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

