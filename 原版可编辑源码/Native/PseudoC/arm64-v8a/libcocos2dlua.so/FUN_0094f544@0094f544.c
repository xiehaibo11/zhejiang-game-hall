
void FUN_0094f544(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169d180;
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 0094f56c to 00a4f5b7 has its CatchHandler @ 0094f56c
                       catch() { ... } // from try @ 0094f56c with catch @ 0094f56c
                       catch() { ... } // from try @ 0094f5bc with catch @ 0094f56c */
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

