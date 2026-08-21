
void FUN_009992b0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
                    /* try { // try from 009992cc to 00a992df has its CatchHandler @ 00999508 */
    FUN_009992b0(param_1,*param_2);
    FUN_009992b0(param_1,param_2[1]);
                    /* try { // try from 009992e0 to 00a992f3 has its CatchHandler @ 0099950c */
    operator_delete(param_2);
    return;
  }
  return;
}

