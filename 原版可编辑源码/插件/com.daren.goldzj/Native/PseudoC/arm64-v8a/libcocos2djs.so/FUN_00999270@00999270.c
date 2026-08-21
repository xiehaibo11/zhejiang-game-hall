
void FUN_00999270(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00999270(param_1,*param_2);
    FUN_00999270(param_1,param_2[1]);
                    /* try { // try from 009992a0 to 00a992bb has its CatchHandler @ 00999540 */
    operator_delete(param_2);
    return;
  }
  return;
}

