
int ENGINE_set_default_RAND(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x30) != 0) {
    iVar1 = engine_table_register(&DAT_01d39160,&LAB_00b1d1d8,e,&DAT_018b0704,1,1);
    return iVar1;
  }
  return 1;
}

