
void FUN_00a51d8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00a51878(param_1,"AUTHENTICATE %s %s",param_2,param_3);
    return;
  }
                    /* catch() { ... } // from try @ 00a51d24 with catch @ 00a51dac */
  FUN_00a51878(param_1,"AUTHENTICATE %s",param_2);
  return;
}

