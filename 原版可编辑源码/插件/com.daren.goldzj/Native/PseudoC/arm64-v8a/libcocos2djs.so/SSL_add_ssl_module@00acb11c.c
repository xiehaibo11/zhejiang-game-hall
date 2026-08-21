
int SSL_add_ssl_module(void)

{
  int iVar1;
  
                    /* try { // try from 00acb134 to 00bcb16b has its CatchHandler @ 00acb278 */
  iVar1 = CONF_module_add("ssl_conf",&DAT_00acb138,FUN_00acb40c);
  return iVar1;
}

