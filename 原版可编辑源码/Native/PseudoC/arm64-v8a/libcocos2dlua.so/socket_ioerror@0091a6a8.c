
char * socket_ioerror(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
                    /* try { // try from 0091a6ac to 00a1a747 has its CatchHandler @ 0091a574 */
  if (param_2 < 1) {
    pcVar1 = (char *)io_strerror(param_2);
    return pcVar1;
  }
  switch(param_2) {
  case 0x62:
    return "address already in use";
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x69:
  case 0x6b:
  case 0x6c:
  case 0x6d:
    goto switchD_0091a6d8_caseD_63;
  case 0x67:
  case 0x68:
    return "closed";
  case 0x6a:
    return "already connected";
  case 0x6e:
    return "timeout";
  case 0x6f:
                    /* catch() { ... } // from try @ 0091a62c with catch @ 0091a72c */
    return "connection refused";
  default:
    if (param_2 == 0xd) {
                    /* catch() { ... } // from try @ 0091a660 with catch @ 0091a6f8 */
                    /* catch() { ... } // from try @ 0091a678 with catch @ 0091a6fc */
      return "permission denied";
    }
switchD_0091a6d8_caseD_63:
    pcVar1 = strerror(param_2);
    return pcVar1;
  }
}

