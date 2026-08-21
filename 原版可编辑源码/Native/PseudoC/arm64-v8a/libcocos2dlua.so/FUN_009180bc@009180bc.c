
void FUN_009180bc(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 009180d8 to 00a18173 has its CatchHandler @ 00917fbc */
  lVar1 = auxiliar_checkclass(param_1,"tcp{client}",1);
  buffer_meth_send(param_1,lVar1 + 0x28);
  return;
}

