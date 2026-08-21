
void FUN_00917ed0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = auxiliar_checkgroup(param_1,"tcp{any}",1);
  opt_meth_getoption(param_1,&PTR_s_keepalive_01402e5b_0xa_017692b8,uVar1);
  return;
}

