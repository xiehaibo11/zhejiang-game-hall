
void FUN_00a64bdc(long param_1,undefined8 param_2)

{
                    /* try { // try from 00a64bdc to 00b64e43 has its CatchHandler @ 00a64bdc
                       catch() { ... } // from try @ 00a64bdc with catch @ 00a64bdc
                       catch() { ... } // from try @ 00a64ec4 with catch @ 00a64bdc */
  FUN_00a54a20(param_1 + 0x618,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x6c8) == 0;
  return;
}

