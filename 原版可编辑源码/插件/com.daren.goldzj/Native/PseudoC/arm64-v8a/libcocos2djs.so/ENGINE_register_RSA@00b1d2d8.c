
int ENGINE_register_RSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x10) != 0) {
    iVar1 = engine_table_register(&DAT_01d39168,&LAB_00b1d314,e,&DAT_018b0708,1,0);
    return iVar1;
  }
  return 1;
}

