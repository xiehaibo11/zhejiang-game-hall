
void lws_vfs_file_open(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *local_28;
  
  local_28 = &DAT_0189703a;
  puVar1 = (undefined8 *)FUN_00aa050c(param_1,param_2,&local_28);
  (*(code *)*puVar1)(param_1,param_2,local_28,param_3);
  return;
}

