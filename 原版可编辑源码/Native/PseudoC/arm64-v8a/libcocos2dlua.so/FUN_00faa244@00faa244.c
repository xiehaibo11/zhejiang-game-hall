
void FUN_00faa244(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00faa258 to 010aa25f has its CatchHandler @ 00faa390 */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_01723508;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

