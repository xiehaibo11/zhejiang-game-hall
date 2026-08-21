
int ENGINE_set_default_DH(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x20) != 0) {
    iVar1 = engine_table_register(&DAT_01782eb8,&LAB_00b2add0,e,&DAT_013e0cb0,1,1);
    return iVar1;
  }
  return 1;
}

