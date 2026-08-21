
int ENGINE_register_RAND(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x30) != 0) {
    iVar1 = engine_table_register(&DAT_01782ee0,&LAB_00b2b658,e,&DAT_013e0cf4,1,0);
    return iVar1;
  }
  return 1;
}

