
void FUN_00918c0c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = auxiliar_checkgroup(param_1,"udp{any}",1);
                    /* try { // try from 00918c30 to 00a18c43 has its CatchHandler @ 00918cc8 */
  inet_meth_getsockname(param_1,lVar1,*(undefined4 *)(lVar1 + 0x20));
  return;
}

