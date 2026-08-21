
void FUN_00a0ecc8(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 *local_18;
  
                    /* try { // try from 00a0eccc to 00b0ecd7 has its CatchHandler @ 00a0ed80 */
  uStack_28 = param_3[3];
  local_30 = param_3[2];
                    /* try { // try from 00a0ece0 to 00b0ecf7 has its CatchHandler @ 00a0edac */
  uStack_38 = param_3[1];
  local_40 = *param_3;
  local_18 = param_1;
                    /* try { // try from 00a0ecf8 to 00b0ee3f has its CatchHandler @ 00a0eb50 */
  FUN_00a0d414(&local_18,FUN_00a0eb94,param_2,&local_40);
  *local_18 = 0;
  return;
}

