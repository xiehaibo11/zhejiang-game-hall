
void FUN_00ab5748(long param_1)

{
  int iVar1;
  
  iVar1 = lws_service_adjust_timeout
                    (*(undefined8 *)(param_1 + -0x590),1,*(undefined1 *)(param_1 + 0x142));
  if (iVar1 == 0) {
    _lws_plat_service_tsi
              (*(undefined8 *)(param_1 + -0x590),0xffffffff,*(undefined1 *)(param_1 + 0x142));
    iVar1 = lws_service_adjust_timeout
                      (*(undefined8 *)(param_1 + -0x590),1,*(undefined1 *)(param_1 + 0x142));
    if (iVar1 == 0) {
      return;
    }
  }
  uv_idle_stop(param_1);
  return;
}

