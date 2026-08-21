
void FUN_00918088(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 0091808c to 00a1809f has its CatchHandler @ 00918124 */
                    /* try { // try from 009180a4 to 00a180d7 has its CatchHandler @ 00918128 */
  lVar1 = auxiliar_checkclass(param_1,"tcp{client}",1);
  buffer_meth_receive(param_1,lVar1 + 0x28);
  return;
}

