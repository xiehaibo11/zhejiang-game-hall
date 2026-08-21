
int SSL_add_ssl_module(void)

{
  int iVar1;
  
  iVar1 = CONF_module_add("ssl_conf",&LAB_00af5318,FUN_00af55ec);
  return iVar1;
}

