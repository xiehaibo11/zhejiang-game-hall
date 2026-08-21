
undefined8 FUN_009180f0(undefined8 param_1)

{
  int *piVar1;
  double dVar2;
  
  piVar1 = (int *)auxiliar_checkgroup(param_1,"tcp{any}",1);
  dVar2 = (double)luaL_checknumber(param_1,2);
                    /* catch() { ... } // from try @ 0091808c with catch @ 00918124 */
  *piVar1 = (int)dVar2;
                    /* catch() { ... } // from try @ 009180a4 with catch @ 00918128 */
  return 0;
}

