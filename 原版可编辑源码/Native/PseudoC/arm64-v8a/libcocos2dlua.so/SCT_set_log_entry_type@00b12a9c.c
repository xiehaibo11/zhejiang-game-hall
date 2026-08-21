
undefined8 SCT_set_log_entry_type(long param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_2 < 2) {
    *(uint *)(param_1 + 0x58) = param_2;
    return 1;
  }
  ERR_put_error(0x32,0x66,0x66,"crypto/ct/ct_sct.c",0x45);
  return 0;
}

