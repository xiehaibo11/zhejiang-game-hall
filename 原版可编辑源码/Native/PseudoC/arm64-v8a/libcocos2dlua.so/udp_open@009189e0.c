
undefined8 udp_open(undefined8 param_1)

{
                    /* catch() { ... } // from try @ 0091894c with catch @ 009189e4 */
                    /* catch() { ... } // from try @ 00918964 with catch @ 009189e8 */
  auxiliar_newclass(param_1,"udp{connected}",&PTR_DAT_017693c8);
                    /* catch() { ... } // from try @ 00918918 with catch @ 00918a18 */
  auxiliar_newclass(param_1,"udp{unconnected}",&PTR_DAT_017693c8);
  auxiliar_add2group(param_1,"udp{connected}","udp{any}");
  auxiliar_add2group(param_1,"udp{unconnected}","udp{any}");
  auxiliar_add2group(param_1,"udp{connected}","select{able}");
  auxiliar_add2group(param_1,"udp{unconnected}","select{able}");
  luaL_openlib(param_1,0,&PTR_DAT_017694f8,0);
  return 0;
}

