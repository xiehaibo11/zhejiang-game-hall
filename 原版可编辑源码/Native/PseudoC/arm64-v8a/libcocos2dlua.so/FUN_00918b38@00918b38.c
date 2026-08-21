
undefined8 FUN_00918b38(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  
                    /* try { // try from 00918b44 to 00a18bfb has its CatchHandler @ 00918b44
                       catch() { ... } // from try @ 00918b44 with catch @ 00918b44
                       catch() { ... } // from try @ 00918c7c with catch @ 00918b44 */
  lVar2 = auxiliar_checkgroup(param_1,"udp{any}",1);
  pcVar1 = "inet6";
  if (*(int *)(lVar2 + 0x20) != 10) {
    pcVar1 = "inet4";
  }
  lua_pushlstring(param_1,pcVar1,5);
  return 1;
}

