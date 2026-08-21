
void FUN_008b7a38(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 008b7a44 to 009b7a5b has its CatchHandler @ 008b7aac */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_0169a8b0;
                    /* try { // try from 008b7a5c to 009b7ac7 has its CatchHandler @ 008b79ec */
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

