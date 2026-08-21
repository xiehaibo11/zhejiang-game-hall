
void FUN_00919178(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = auxiliar_checkgroup(param_1,"udp{any}",1);
  opt_meth_setoption(param_1,&PTR_s_dontroute_01769528,uVar1);
  return;
}

