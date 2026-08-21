
void FUN_00fd5714(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
                    /* try { // try from 00fd5730 to 010d5737 has its CatchHandler @ 00fd576c */
  *puVar1 = &PTR_FUN_01723e58;
                    /* try { // try from 00fd5738 to 010d5787 has its CatchHandler @ 00fd570c */
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

