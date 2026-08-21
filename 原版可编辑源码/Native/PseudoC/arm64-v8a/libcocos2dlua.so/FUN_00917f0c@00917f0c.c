
void FUN_00917f0c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = auxiliar_checkgroup(param_1,"tcp{any}",1);
  inet_meth_getpeername(param_1,lVar1,*(undefined4 *)(lVar1 + 0x2078));
  return;
}

