
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_RAND(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    if (*(long *)(e + 0x30) != 0) {
      engine_table_register(&DAT_01782ee0,&LAB_00b2b658,e,&DAT_013e0cf4,1,0);
    }
  }
  return;
}

