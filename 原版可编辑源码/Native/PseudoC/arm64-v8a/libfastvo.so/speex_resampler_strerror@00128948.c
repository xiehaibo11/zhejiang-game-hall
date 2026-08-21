
char * speex_resampler_strerror(uint param_1)

{
  if (param_1 < 5) {
    return (&PTR_s_Success__00136c87_1_0014ba10)[(int)param_1];
  }
  return "Unknown error. Bad error code or strange version mismatch.";
}

