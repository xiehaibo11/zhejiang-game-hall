
undefined8 FUN_00a5cb88(void)

{
  OPENSSL_load_builtin_modules();
                    /* try { // try from 00a5cb94 to 00b5cc43 has its CatchHandler @ 00a5cec4 */
  ENGINE_load_builtin_engines();
  CONF_modules_load_file((char *)0x0,(char *)0x0,0x30);
  return 1;
}

