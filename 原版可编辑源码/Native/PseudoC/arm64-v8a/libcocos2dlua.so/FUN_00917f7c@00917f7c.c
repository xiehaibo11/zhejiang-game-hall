
void FUN_00917f7c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = auxiliar_checkclass(param_1,"tcp{client}",1);
                    /* catch() { ... } // from try @ 00917f48 with catch @ 00917fa8 */
  buffer_meth_getstats(param_1,lVar1 + 0x28);
  return;
}

