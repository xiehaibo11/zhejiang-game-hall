
ulong lws_server_get_canonical_hostname(ulong param_1,long param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_2 + 100) >> 2 & 1) == 0) {
                    /* try { // try from 01055990 to 01155a2f has its CatchHandler @ 01055990
                       catch() { ... } // from try @ 01055990 with catch @ 01055990
                       catch() { ... } // from try @ 01055a3c with catch @ 01055990 */
    uVar1 = gethostname((char *)(param_1 + 0xbd8),0x7f);
    return (ulong)uVar1;
  }
  return param_1;
}

