
void FUN_00a0ed64(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[3];
  local_20 = param_3[2];
                    /* catch() { ... } // from try @ 00a0eccc with catch @ 00a0ed80 */
  uStack_28 = param_3[1];
  local_30 = *param_3;
  FUN_00a0d414(param_1,fputc,param_2,&local_30);
                    /* catch() { ... } // from try @ 00a0ecc0 with catch @ 00a0ed98 */
                    /* catch() { ... } // from try @ 00a0ec20 with catch @ 00a0ed9c */
  return;
}

