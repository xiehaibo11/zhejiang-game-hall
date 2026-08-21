
void FUN_00918bd4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = auxiliar_checkclass(param_1,"udp{connected}",1);
                    /* try { // try from 00918bfc to 00a18c2f has its CatchHandler @ 00918cfc */
  inet_meth_getpeername(param_1,lVar1,*(undefined4 *)(lVar1 + 0x20));
  return;
}

