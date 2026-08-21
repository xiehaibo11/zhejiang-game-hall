
void FUN_008b7940(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_0169a830;
                    /* try { // try from 008b7968 to 009b797f has its CatchHandler @ 008b79d0 */
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

