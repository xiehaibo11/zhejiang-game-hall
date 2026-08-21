
void ssl_cert_set_cert_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac166c with catch @ 00ac160c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ac17a4 with catch @ 00ac160c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ac18b8 with catch @ 00ac160c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ac19b0 with catch @ 00ac160c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ac1a40 with catch @ 00ac160c
                        */
  *(undefined8 *)(param_1 + 0x178) = param_2;
  *(undefined8 *)(param_1 + 0x180) = param_3;
  return;
}

