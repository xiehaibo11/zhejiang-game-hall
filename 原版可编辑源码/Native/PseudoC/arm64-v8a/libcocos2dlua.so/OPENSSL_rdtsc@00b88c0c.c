
undefined8 OPENSSL_rdtsc(void)

{
  undefined8 uVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b88bf0 with catch @ 00b88c18
                        */
  if (((byte)OPENSSL_armcap_P >> 1 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b88ad4 with catch @ 00b88c1c
                        */
    return 0;
  }
  uVar1 = _armv7_tick();
  return uVar1;
}

