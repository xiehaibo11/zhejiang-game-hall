
undefined8 tcp_open(undefined8 param_1)

{
  auxiliar_newclass(param_1,"tcp{master}",&PTR_DAT_017690f8);
  auxiliar_newclass(param_1,"tcp{client}",&PTR_DAT_017690f8);
  auxiliar_newclass(param_1,"tcp{server}",&PTR_DAT_017690f8);
  auxiliar_add2group(param_1,"tcp{master}","tcp{any}");
  auxiliar_add2group(param_1,"tcp{client}","tcp{any}");
  auxiliar_add2group(param_1,"tcp{server}","tcp{any}");
  luaL_openlib(param_1,0,&DAT_01769278,0);
  return 0;
}

