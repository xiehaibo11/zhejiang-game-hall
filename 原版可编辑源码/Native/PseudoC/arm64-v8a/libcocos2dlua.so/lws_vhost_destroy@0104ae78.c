
void lws_vhost_destroy(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)thunk_FUN_0104b1cc(0,0x18,"deferred free");
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0104aed8(param_1);
    *puVar1 = *(undefined8 *)(*(long *)(param_1 + 0x150) + 0x848);
    lVar2 = lws_now_secs();
    puVar1[1] = lVar2 + 5;
    puVar1[2] = param_1;
    *(undefined8 **)(*(long *)(param_1 + 0x150) + 0x848) = puVar1;
  }
  return;
}

