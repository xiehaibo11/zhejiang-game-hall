
void SSL_CTX_set_security_level(long param_1,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(param_1 + 0x120) + 0x1c0) = param_2;
                    /* try { // try from 00ad9de4 to 00bd9e2b has its CatchHandler @ 00ad9de4
                       catch() { ... } // from try @ 00ad9de4 with catch @ 00ad9de4
                       catch() { ... } // from try @ 00ad9e6c with catch @ 00ad9de4 */
  return;
}

