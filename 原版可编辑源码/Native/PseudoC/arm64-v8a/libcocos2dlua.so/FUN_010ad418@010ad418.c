
void FUN_010ad418(long param_1,long param_2,undefined8 *param_3)

{
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
                    /* try { // try from 010ad434 to 011ad4bf has its CatchHandler @ 010ad434
                       catch() { ... } // from try @ 010ad434 with catch @ 010ad434
                       catch() { ... } // from try @ 010ad4cc with catch @ 010ad434 */
    FT_Outline_Get_CBox(param_2 + 200,param_3);
    return;
  }
  return;
}

