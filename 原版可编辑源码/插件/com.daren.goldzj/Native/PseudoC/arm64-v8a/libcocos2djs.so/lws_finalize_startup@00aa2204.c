
undefined8 lws_finalize_startup(long param_1)

{
  undefined1 auStack_1e0 [92];
  undefined4 local_184;
  undefined4 local_180;
  
  local_180 = *(undefined4 *)(param_1 + 0xc64);
  local_184 = *(undefined4 *)(param_1 + 0xc68);
  if ((*(byte *)(param_1 + 0xc79) >> 5 & 1) != 0) {
    lws_plat_drop_app_privileges(auStack_1e0);
  }
  return 0;
}

