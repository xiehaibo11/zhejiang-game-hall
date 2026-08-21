
void FUN_009262a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169cee0;
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 009262d0 to 00a2636b has its CatchHandler @ 00926180 */
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

