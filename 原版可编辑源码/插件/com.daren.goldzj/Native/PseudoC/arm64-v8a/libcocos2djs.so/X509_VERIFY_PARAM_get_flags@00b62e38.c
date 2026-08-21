
ulong X509_VERIFY_PARAM_get_flags(X509_VERIFY_PARAM *param)

{
                    /* try { // try from 00b62e3c to 00c62e4b has its CatchHandler @ 00b62e6c */
  return param->flags;
}

