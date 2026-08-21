
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_DSA(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    if (*(long *)(e + 0x18) != 0) {
      engine_table_register(&DAT_01d39148,&LAB_00b1ccb0,e,&DAT_018b06e0,1,0);
    }
  }
  return;
}

