
void FUN_008ecd34(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
                    /* try { // try from 008ecd4c to 009ecd77 has its CatchHandler @ 008ece0c */
  *puVar1 = &PTR_FUN_0169b948;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}

