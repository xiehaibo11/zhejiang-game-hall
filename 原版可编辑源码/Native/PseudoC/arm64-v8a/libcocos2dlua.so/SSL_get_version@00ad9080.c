
char * SSL_get_version(SSL *s)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = s->version;
  if (iVar1 < 0xfefd) {
    pcVar2 = "TLSv1.2";
    switch(iVar1) {
    case 0x300:
      return "SSLv3";
    case 0x301:
      return "TLSv1";
    case 0x302:
      return "TLSv1.1";
    case 0x303:
      goto switchD_00ad90b4_caseD_303;
    default:
      if (iVar1 == 0x100) {
        return "DTLSv0.9";
      }
    }
  }
  else {
    if (iVar1 == 0xfefd) {
      return "DTLSv1.2";
    }
    if (iVar1 == 0xfeff) {
      return "DTLSv1";
    }
  }
  pcVar2 = "unknown";
switchD_00ad90b4_caseD_303:
  return pcVar2;
}

