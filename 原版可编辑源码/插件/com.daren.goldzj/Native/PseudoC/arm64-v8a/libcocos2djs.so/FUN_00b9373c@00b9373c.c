
bool FUN_00b9373c(CONF *param_1)

{
  if (param_1 != (CONF *)0x0) {
    _CONF_free_data(param_1);
  }
  return param_1 != (CONF *)0x0;
}

