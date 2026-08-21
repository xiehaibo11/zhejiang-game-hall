
undefined8 CMS_RecipientInfo_get0_pkey_ctx(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x28);
  }
  if (*param_1 == 0) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x30);
  }
  return 0;
}

