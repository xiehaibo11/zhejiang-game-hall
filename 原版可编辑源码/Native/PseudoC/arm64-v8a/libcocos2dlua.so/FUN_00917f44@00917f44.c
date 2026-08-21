
void FUN_00917f44(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 00917f48 to 00a17f53 has its CatchHandler @ 00917fa8 */
                    /* try { // try from 00917f54 to 00a17fbb has its CatchHandler @ 00917e64 */
  lVar1 = auxiliar_checkgroup(param_1,"tcp{any}",1);
  inet_meth_getsockname(param_1,lVar1,*(undefined4 *)(lVar1 + 0x2078));
  return;
}

