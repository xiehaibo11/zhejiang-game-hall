
void EC_KEY_set_default_method(undefined **param_1)

{
  PTR_PTR_01d20228 = (undefined *)&PTR_s_OpenSSL_EC_KEY_method_01c76080;
  if (param_1 != (undefined **)0x0) {
    PTR_PTR_01d20228 = (undefined *)param_1;
  }
  return;
}

