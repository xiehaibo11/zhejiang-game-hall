
void lua_setlocal(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long local_8;
  
  local_8 = 0;
  puVar1 = (undefined8 *)FUN_00bfc474(param_1,*(undefined4 *)(param_2 + 0x238),&local_8,param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (local_8 != 0) {
    *puVar1 = *(undefined8 *)(lVar2 + -8);
  }
  *(long *)(param_1 + 0x28) = lVar2 + -8;
  return;
}

