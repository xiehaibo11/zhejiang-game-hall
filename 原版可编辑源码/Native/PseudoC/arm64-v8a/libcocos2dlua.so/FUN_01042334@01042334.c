
undefined8 FUN_01042334(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x248) == 0) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x248) + 0x10);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x270) != 0) {
    return 0;
  }
  lVar1 = FUN_0104b1fc(lVar1,"user space");
  *(long *)(param_1 + 0x270) = lVar1;
  if (lVar1 != 0) {
    return 0;
  }
  _lws_log(1,"%s: OOM\n","lws_ensure_user_space");
  return 1;
}

