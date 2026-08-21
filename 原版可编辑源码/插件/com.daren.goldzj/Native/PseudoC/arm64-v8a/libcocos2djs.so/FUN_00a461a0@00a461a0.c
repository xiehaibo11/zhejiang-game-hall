
undefined8 FUN_00a461a0(void)

{
  OPENSSL_load_builtin_modules();
  ENGINE_load_builtin_engines();
  CONF_modules_load_file((char *)0x0,(char *)0x0,0x30);
  return 1;
}

