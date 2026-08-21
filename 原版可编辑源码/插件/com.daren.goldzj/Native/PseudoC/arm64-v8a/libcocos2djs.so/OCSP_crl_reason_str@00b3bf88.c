
char * OCSP_crl_reason_str(long s)

{
  if (8 < (ulong)s) {
    return "(UNKNOWN)";
  }
  if ((0x17fU >> (ulong)((uint)s & 0x1f) & 1) == 0) {
    return "(UNKNOWN)";
  }
  return *(char **)((&PTR_DAT_01c83fb0)[s] + 8);
}

