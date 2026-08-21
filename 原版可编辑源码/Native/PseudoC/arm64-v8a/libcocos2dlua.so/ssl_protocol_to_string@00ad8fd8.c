
char * ssl_protocol_to_string(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 0xfefd) {
    pcVar1 = "TLSv1.2";
    switch(param_1) {
    case 0x300:
      return "SSLv3";
    case 0x301:
      return "TLSv1";
    case 0x302:
      return "TLSv1.1";
    case 0x303:
      goto switchD_00ad9008_caseD_303;
    default:
      if (param_1 == 0x100) {
        return "DTLSv0.9";
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 00ad8fb8 with catch @ 00ad9018 */
                    /* catch() { ... } // from try @ 00ad8f9c with catch @ 00ad901c */
    if (param_1 == 0xfefd) {
      return "DTLSv1.2";
    }
    if (param_1 == 0xfeff) {
      return "DTLSv1";
    }
  }
  pcVar1 = "unknown";
switchD_00ad9008_caseD_303:
  return pcVar1;
}

