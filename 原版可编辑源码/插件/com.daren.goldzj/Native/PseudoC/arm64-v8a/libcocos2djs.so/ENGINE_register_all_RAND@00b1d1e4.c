
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_RAND(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    if (*(long *)(e + 0x30) != 0) {
      engine_table_register(&DAT_01d39160,&LAB_00b1d1d8,e,&DAT_018b0704,1,0);
    }
  }
  return;
}

