
void FUN_00a02ee0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_016a1ae0;
                    /* try { // try from 00a02eec to 00b02feb has its CatchHandler @ 00a02eec
                       catch() { ... } // from try @ 00a02eec with catch @ 00a02eec
                       catch() { ... } // from try @ 00a0306c with catch @ 00a02eec */
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

