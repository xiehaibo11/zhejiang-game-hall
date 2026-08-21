
void FUN_010b01fc(long param_1,long param_2,undefined8 *param_3)

{
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
                    /* try { // try from 010b0218 to 011b0477 has its CatchHandler @ 010b0218
                       catch() { ... } // from try @ 010b0218 with catch @ 010b0218
                       catch() { ... } // from try @ 010b0484 with catch @ 010b0218 */
    FT_Outline_Get_CBox(param_2 + 200,param_3);
    return;
  }
  return;
}

