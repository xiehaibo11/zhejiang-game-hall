
void FUN_009d4a00(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 009d4a08 to 00ad4d47 has its CatchHandler @ 009cee70 */
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169f7a0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

