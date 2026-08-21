
char * OpenSSL_version(uint param_1)

{
  if (param_1 < 6) {
    return (&PTR_s_OpenSSL_1_1_0c_10_Nov_2016_016af040)[(int)param_1];
  }
  return "not available";
}

