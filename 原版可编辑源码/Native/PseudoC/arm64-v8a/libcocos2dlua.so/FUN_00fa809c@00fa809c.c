
void FUN_00fa809c(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00fa80ac to 010a80bb has its CatchHandler @ 00fa813c */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_017231e8;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

