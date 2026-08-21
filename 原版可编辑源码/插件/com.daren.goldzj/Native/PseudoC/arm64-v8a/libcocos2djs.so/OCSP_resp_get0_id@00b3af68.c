
undefined8 OCSP_resp_get0_id(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(param_1 + 8) == 1) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
    *param_3 = 0;
    return 1;
  }
  if (*(int *)(param_1 + 8) == 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0;
    return 1;
  }
  return 0;
}

