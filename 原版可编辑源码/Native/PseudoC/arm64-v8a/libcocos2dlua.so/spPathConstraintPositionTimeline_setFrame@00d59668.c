
void spPathConstraintPositionTimeline_setFrame
               (undefined4 param_1,undefined4 param_2,long param_3,int param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x20);
  *(undefined4 *)(lVar1 + (long)(param_4 << 1) * 4) = param_1;
  *(undefined4 *)(lVar1 + ((long)param_4 << 3 | 4U)) = param_2;
  return;
}

