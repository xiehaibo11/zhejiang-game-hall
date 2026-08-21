
int ENGINE_register_RSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x10) != 0) {
    iVar1 = engine_table_register(&DAT_01782ee8,&LAB_00b2b794,e,&DAT_013e0cf8,1,0);
    return iVar1;
  }
  return 1;
}

