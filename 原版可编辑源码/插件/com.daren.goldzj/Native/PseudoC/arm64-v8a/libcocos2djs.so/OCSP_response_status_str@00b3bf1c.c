
char * OCSP_response_status_str(long s)

{
  if (6 < (ulong)s) {
    return "(UNKNOWN)";
  }
  if ((0x6fU >> (ulong)((uint)s & 0x1f) & 1) == 0) {
    return "(UNKNOWN)";
  }
  return *(char **)((&PTR_DAT_01c83f50)[s] + 8);
}

