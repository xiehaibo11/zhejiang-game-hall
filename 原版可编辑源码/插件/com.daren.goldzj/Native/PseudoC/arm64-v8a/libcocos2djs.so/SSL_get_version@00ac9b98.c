
char * SSL_get_version(SSL *s)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = s->version;
  if (iVar1 < 0xfefd) {
                    /* try { // try from 00ac9bac to 00bc9baf has its CatchHandler @ 00ac9bec */
    pcVar2 = "TLSv1.2";
    switch(iVar1) {
    case 0x300:
      return "SSLv3";
    case 0x301:
      return "TLSv1";
    case 0x302:
      return "TLSv1.1";
    case 0x303:
      goto switchD_00ac9bcc_caseD_303;
    default:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac9c78 with catch @ 00ac9c00
                        */
      if (iVar1 == 0x100) {
        return "DTLSv0.9";
      }
    }
  }
  else {
    if (iVar1 == 0xfefd) {
      return "DTLSv1.2";
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac9bac with catch @ 00ac9bec
                        */
    if (iVar1 == 0xfeff) {
      return "DTLSv1";
    }
  }
  pcVar2 = "unknown";
switchD_00ac9bcc_caseD_303:
                    /* try { // try from 00ac9c40 to 00bc9c43 has its CatchHandler @ 00ac9df0 */
  return pcVar2;
}

