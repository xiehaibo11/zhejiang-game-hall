
char * OCSP_cert_status_str(long s)

{
  if ((ulong)s < 3) {
    return *(char **)((&PTR_DAT_01c83f90)[s] + 8);
  }
  return "(UNKNOWN)";
}

