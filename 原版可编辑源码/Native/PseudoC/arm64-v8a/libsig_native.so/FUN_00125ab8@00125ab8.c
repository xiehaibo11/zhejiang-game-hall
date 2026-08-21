
void FUN_00125ab8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  lVar1 = __strlen_chk("sizeof...(",0xb);
  FUN_0011bcc0(param_2,"sizeof...(","sizeof...(" + lVar1);
  local_38 = *(undefined8 *)(param_1 + 0x10);
  local_40 = 0x101011d;
  local_48 = &PTR_FUN_00137488;
  FUN_001228d8(&local_48,param_2);
  lVar1 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar1 + 9);
  return;
}

