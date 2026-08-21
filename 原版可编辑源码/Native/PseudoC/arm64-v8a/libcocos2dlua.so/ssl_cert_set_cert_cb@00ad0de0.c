
void ssl_cert_set_cert_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x178) = param_2;
  *(undefined8 *)(param_1 + 0x180) = param_3;
  return;
}

