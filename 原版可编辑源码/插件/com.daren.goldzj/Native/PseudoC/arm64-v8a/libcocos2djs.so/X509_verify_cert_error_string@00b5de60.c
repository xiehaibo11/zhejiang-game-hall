
char * X509_verify_cert_error_string(long n)

{
  if ((uint)n < 0x49) {
    return *(char **)(&DAT_01c85770 +
                     (-((ulong)n >> 0x1f & 1) & 0xfffffff800000000 | (n & 0xffffffffU) << 3));
  }
  return "unknown certificate verification error";
}

