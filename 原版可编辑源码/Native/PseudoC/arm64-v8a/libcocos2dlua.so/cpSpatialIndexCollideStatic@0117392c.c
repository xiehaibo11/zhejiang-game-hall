
void cpSpatialIndexCollideStatic(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((param_2 != (long *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), 0 < iVar1)) {
    local_50 = param_1[1];
    plStack_48 = param_2;
    local_40 = param_3;
    uStack_38 = param_4;
    (**(code **)(*param_1 + 0x10))(param_1,FUN_011739a8,&local_50);
  }
  return;
}

