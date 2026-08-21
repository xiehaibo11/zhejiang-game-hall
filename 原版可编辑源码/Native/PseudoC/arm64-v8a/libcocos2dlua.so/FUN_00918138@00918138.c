
void FUN_00918138(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = auxiliar_checkgroup(param_1,"tcp{any}",1);
                    /* catch() { ... } // from try @ 00918058 with catch @ 00918158 */
  opt_meth_setoption(param_1,&PTR_s_keepalive_01402e5b_0xa_01769318,uVar1);
  return;
}

