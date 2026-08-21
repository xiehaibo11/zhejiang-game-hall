
undefined8 lws_callback_on_writable_all_protocol_vhost(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x188);
  if ((uVar1 <= param_2) && (param_2 < uVar1 + (long)*(int *)(param_1 + 0x1dc) * 0x38)) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x1a8) + (param_2 - uVar1 >> 3) * 0x6db6db6db6db6db8)
        ; lVar2 != 0; lVar2 = *(long *)(lVar2 + 600)) {
      lws_callback_on_writable(lVar2);
    }
    return 0;
  }
  _lws_log(1,"%s: protocol %p is not from vhost %p (%p - %p)\n",
           "lws_callback_on_writable_all_protocol_vhost",param_2,uVar1,param_1);
  return 0xffffffff;
}

