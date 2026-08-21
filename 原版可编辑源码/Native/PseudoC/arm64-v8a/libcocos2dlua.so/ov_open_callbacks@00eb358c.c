
void ov_open_callbacks(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
                    /* try { // try from 00eb358c to 00fb35e3 has its CatchHandler @ 00eb3560 */
  iVar1 = FUN_00eb35d8();
  if (iVar1 != 0) {
    return;
  }
                    /* catch() { ... } // from try @ 00eb3584 with catch @ 00eb35c8 */
  FUN_00eb3700(param_2);
  return;
}

