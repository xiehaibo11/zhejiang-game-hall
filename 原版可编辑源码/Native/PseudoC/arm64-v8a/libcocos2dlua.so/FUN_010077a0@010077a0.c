
void FUN_010077a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
                    /* try { // try from 010077bc to 011077fb has its CatchHandler @ 01007740 */
  *puVar1 = &PTR_FUN_01725498;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

