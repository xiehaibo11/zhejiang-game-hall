
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_DH(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    if (*(long *)(e + 0x20) != 0) {
      engine_table_register(&DAT_01782eb8,&LAB_00b2add0,e,&DAT_013e0cb0,1,0);
    }
  }
  return;
}

