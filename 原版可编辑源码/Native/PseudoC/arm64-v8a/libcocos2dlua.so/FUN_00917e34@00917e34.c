
undefined8 FUN_00917e34(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00917d48 with catch @ 00917e48 */
  lVar2 = auxiliar_checkgroup(param_1,"tcp{any}",1);
                    /* try { // try from 00917e64 to 00a17f47 has its CatchHandler @ 00917e64
                       catch() { ... } // from try @ 00917e64 with catch @ 00917e64
                       catch() { ... } // from try @ 00917f54 with catch @ 00917e64 */
  pcVar1 = "inet6";
  if (*(int *)(lVar2 + 0x2078) != 10) {
    pcVar1 = "inet4";
  }
  lua_pushlstring(param_1,pcVar1,5);
  return 1;
}

