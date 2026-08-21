
void FUN_00a0d3ac(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  long lStack_20;
  long local_18;
  
                    /* try { // try from 00a0d3b0 to 00b0d47f has its CatchHandler @ 00a0d300 */
  lStack_20 = 0;
  uStack_48 = param_4[1];
  local_50 = *param_4;
  uStack_38 = param_4[3];
  local_40 = param_4[2];
  local_28 = param_1;
  local_18 = param_2;
  iVar1 = FUN_00a0d414(&local_28,FUN_00a0e790,param_3,&local_50);
  if ((iVar1 != -1) && (local_18 != 0)) {
    *(undefined1 *)(local_28 - (ulong)(local_18 == lStack_20)) = 0;
  }
  return;
}

