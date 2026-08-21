
char * udp_strerror(int param_1)

{
  char *pcVar1;
  
  if (param_1 == -2) {
                    /* try { // try from 00918aac to 00a18af7 has its CatchHandler @ 00918aac
                       catch() { ... } // from try @ 00918aac with catch @ 00918aac
                       catch() { ... } // from try @ 00918afc with catch @ 00918aac */
    return "refused";
  }
  pcVar1 = (char *)socket_strerror();
  return pcVar1;
}

