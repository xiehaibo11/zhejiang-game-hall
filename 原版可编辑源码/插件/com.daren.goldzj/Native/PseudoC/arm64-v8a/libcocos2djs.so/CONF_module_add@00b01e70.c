
int CONF_module_add(char *name,undefined1 *ifunc,undefined1 *ffunc)

{
  long lVar1;
  
                    /* try { // try from 00b01e74 to 00c01f73 has its CatchHandler @ 00b01e74
                       catch() { ... } // from try @ 00b01e74 with catch @ 00b01e74
                       catch() { ... } // from try @ 00b01f80 with catch @ 00b01e74
                       catch() { ... } // from try @ 00b01fd4 with catch @ 00b01e74 */
  lVar1 = FUN_00b01ea8(0,name,ifunc,ffunc);
  return (int)(lVar1 != 0);
}

