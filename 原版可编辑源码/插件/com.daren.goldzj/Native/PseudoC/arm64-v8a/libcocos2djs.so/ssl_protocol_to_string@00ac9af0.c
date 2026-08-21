
char * ssl_protocol_to_string(int param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00ac9af4 to 00bc9af7 has its CatchHandler @ 00ac9b48 */
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
      goto switchD_00ac9b20_caseD_303;
    default:
      if (param_1 == 0x100) {
        return "DTLSv0.9";
      }
    }
  }
  else {
                    /* try { // try from 00ac9b38 to 00bc9b3b has its CatchHandler @ 00ac9b40 */
    if (param_1 == 0xfefd) {
      return "DTLSv1.2";
    }
                    /* try { // try from 00ac9b3c to 00bc9b8b has its CatchHandler @ 00ac99dc */
                    /* catch() { ... } // from try @ 00ac9b38 with catch @ 00ac9b40 */
                    /* catch() { ... } // from try @ 00ac9a40 with catch @ 00ac9b44
                       catch() { ... } // from try @ 00ac9ac0 with catch @ 00ac9b44 */
    if (param_1 == 0xfeff) {
                    /* catch() { ... } // from try @ 00ac9af4 with catch @ 00ac9b48 */
      return "DTLSv1";
    }
  }
  pcVar1 = "unknown";
switchD_00ac9b20_caseD_303:
  return pcVar1;
}

