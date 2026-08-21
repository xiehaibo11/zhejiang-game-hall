
long FUN_00a2442c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  long local_20;
  int local_18;
  
  local_18 = 0;
  local_28 = 0;
  local_20 = 0;
  local_30 = 0;
  uStack_38 = param_2[3];
  local_40 = param_2[2];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  iVar1 = FUN_00a22dfc(&local_30,FUN_00a24350,param_1,&local_50);
  if ((iVar1 == -1) || (local_18 != 0)) {
    if (local_20 != 0) {
      (*(code *)PTR_free_01769a00)(local_30);
    }
    local_30 = 0;
  }
  else if (local_20 == 0) {
    local_30 = (*(code *)PTR_strdup_01769a10)(&DAT_013c996e);
  }
  else {
    *(undefined1 *)(local_30 + local_28) = 0;
  }
  return local_30;
}

