
void FUN_009234a4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
                    /* try { // try from 009234c4 to 00a234f7 has its CatchHandler @ 009235c4 */
  *puVar1 = &PTR_FUN_0169cd90;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

