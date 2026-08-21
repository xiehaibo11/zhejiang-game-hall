
void FUN_009e6b3c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 009e6b44 to 00ae6b97 has its CatchHandler @ 009e6a04 */
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_016a08c8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

