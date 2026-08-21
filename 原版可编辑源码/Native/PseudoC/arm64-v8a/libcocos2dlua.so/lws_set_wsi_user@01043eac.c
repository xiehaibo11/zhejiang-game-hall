
void lws_set_wsi_user(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x2f4) >> 5 & 1) == 0) {
    _lws_log(1,"%s: Cannot set internally-allocated user_space\n","lws_set_wsi_user");
    return;
  }
  *(undefined8 *)(param_1 + 0x270) = param_2;
  return;
}

