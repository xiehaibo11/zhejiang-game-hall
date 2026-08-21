
long lws_adjust_protocol_psds(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x248);
  *(long *)(lVar2 + 0x10) = param_2;
  lVar1 = *(long *)(param_1 + 0x270);
  if (((lVar2 != 0) && (param_2 != 0)) && (lVar1 == 0)) {
    lVar1 = FUN_0104b1fc(param_2,"user space");
    *(long *)(param_1 + 0x270) = lVar1;
    if (lVar1 == 0) {
      _lws_log(1,"%s: OOM\n","lws_ensure_user_space");
      return 0;
    }
  }
  return lVar1;
}

