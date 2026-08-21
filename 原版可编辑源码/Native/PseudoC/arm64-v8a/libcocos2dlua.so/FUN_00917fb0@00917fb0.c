
void FUN_00917fb0(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 00917fbc to 00a18057 has its CatchHandler @ 00917fbc
                       catch() { ... } // from try @ 00917fbc with catch @ 00917fbc
                       catch() { ... } // from try @ 009180d8 with catch @ 00917fbc */
  lVar1 = auxiliar_checkclass(param_1,"tcp{client}",1);
  buffer_meth_setstats(param_1,lVar1 + 0x28);
  return;
}

