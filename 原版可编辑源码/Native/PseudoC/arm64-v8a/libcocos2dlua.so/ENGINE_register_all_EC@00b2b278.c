
void ENGINE_register_all_EC(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    if (*(long *)(e + 0x28) != 0) {
      engine_table_register(&DAT_01782ed0,&LAB_00b2b26c,e,&DAT_013e0cd4,1,0);
    }
  }
  return;
}

