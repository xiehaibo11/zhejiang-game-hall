
char * socket_strerror(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 1) {
                    /* try { // try from 0091a660 to 00a1a673 has its CatchHandler @ 0091a6f8 */
    pcVar1 = (char *)io_strerror(param_1);
    return pcVar1;
  }
                    /* try { // try from 0091a62c to 00a1a65f has its CatchHandler @ 0091a72c */
  switch(param_1) {
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
    goto switchD_0091a650_caseD_63;
  case 0x67:
  case 0x68:
    return "closed";
  case 0x6a:
    return "already connected";
  case 0x6e:
    return "timeout";
  case 0x6f:
    return "connection refused";
  default:
    if (param_1 == 0xd) {
                    /* try { // try from 0091a678 to 00a1a6ab has its CatchHandler @ 0091a6fc */
      return "permission denied";
    }
switchD_0091a650_caseD_63:
    pcVar1 = strerror(param_1);
    return pcVar1;
  }
}

