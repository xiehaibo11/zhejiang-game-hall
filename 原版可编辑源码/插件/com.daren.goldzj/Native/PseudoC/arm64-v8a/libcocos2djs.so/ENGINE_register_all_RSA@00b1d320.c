
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_RSA(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    if (*(long *)(e + 0x10) != 0) {
      engine_table_register(&DAT_01d39168,&LAB_00b1d314,e,&DAT_018b0708,1,0);
    }
  }
  return;
}

