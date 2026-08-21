
void FUN_00a22d94(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  long lStack_20;
  long local_18;
  
  lStack_20 = 0;
  uStack_48 = param_4[1];
  local_50 = *param_4;
  uStack_38 = param_4[3];
  local_40 = param_4[2];
  local_28 = param_1;
  local_18 = param_2;
  iVar1 = FUN_00a22dfc(&local_28,FUN_00a24178,param_3,&local_50);
                    /* try { // try from 00a22dd4 to 00b22de3 has its CatchHandler @ 00a22e34 */
  if ((iVar1 != -1) && (local_18 != 0)) {
                    /* try { // try from 00a22de4 to 00b22e6b has its CatchHandler @ 00a22d84 */
    *(undefined1 *)(local_28 - (ulong)(local_18 == lStack_20)) = 0;
  }
  return;
}

