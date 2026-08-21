
undefined8 FUN_00918afc(undefined8 param_1)

{
                    /* try { // try from 00918afc to 00a18b43 has its CatchHandler @ 00918aac */
  auxiliar_checkgroup(param_1,"udp{any}",1);
  lua_pushboolean(param_1,0);
                    /* catch() { ... } // from try @ 00918af8 with catch @ 00918b30 */
  return 1;
}

