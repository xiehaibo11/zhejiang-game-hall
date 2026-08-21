
char * OCSP_cert_status_str(long s)

{
  if ((ulong)s < 3) {
    return *(char **)((&PTR_DAT_016beee0)[s] + 8);
  }
  return "(UNKNOWN)";
}

