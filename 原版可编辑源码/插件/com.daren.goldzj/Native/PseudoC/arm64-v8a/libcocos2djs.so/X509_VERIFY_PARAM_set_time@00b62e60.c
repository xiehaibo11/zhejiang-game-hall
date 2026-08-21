
void X509_VERIFY_PARAM_set_time(X509_VERIFY_PARAM *param,time_t t)

{
  param->check_time = t;
                    /* catch() { ... } // from try @ 00b62e3c with catch @ 00b62e6c */
  param->flags = param->flags | 2;
  return;
}

