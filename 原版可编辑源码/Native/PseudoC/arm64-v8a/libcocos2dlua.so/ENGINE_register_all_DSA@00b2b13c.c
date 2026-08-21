
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_DSA(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    if (*(long *)(e + 0x18) != 0) {
      engine_table_register(&DAT_01782ec8,&LAB_00b2b130,e,&DAT_013e0cd0,1,0);
    }
  }
  return;
}

