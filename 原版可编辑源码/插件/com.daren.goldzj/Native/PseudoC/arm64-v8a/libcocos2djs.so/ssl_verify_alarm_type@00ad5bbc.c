
undefined4 ssl_verify_alarm_type(long param_1)

{
  if (param_1 - 1U < 0x46) {
    return *(undefined4 *)(&DAT_018a4ae0 + (param_1 - 1U) * 4);
  }
  return 0x2e;
}

