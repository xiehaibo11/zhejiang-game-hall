
void FUN_00918174(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 00918174 to 00a181bf has its CatchHandler @ 00918174
                       catch() { ... } // from try @ 00918174 with catch @ 00918174
                       catch() { ... } // from try @ 009181dc with catch @ 00918174 */
  lVar1 = auxiliar_checkgroup(param_1,"tcp{any}",1);
  timeout_meth_settimeout(param_1,lVar1 + 0x2060);
  return;
}

