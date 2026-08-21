
CONF * NCONF_new(CONF_METHOD *meth)

{
  CONF *pCVar1;
  
  if (meth == (CONF_METHOD *)0x0) {
    meth = NCONF_default();
  }
  pCVar1 = (*meth->create)(meth);
  if (pCVar1 != (CONF *)0x0) {
    return pCVar1;
  }
                    /* catch() { ... } // from try @ 00b01394 with catch @ 00b0142c */
                    /* catch() { ... } // from try @ 00b013c0 with catch @ 00b01430 */
  ERR_put_error(0xe,0x6f,0x41,"crypto/conf/conf_lib.c",0xbc);
  return (CONF *)0x0;
}

