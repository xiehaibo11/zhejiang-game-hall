
int ENGINE_register_DH(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x20) != 0) {
    iVar1 = engine_table_register(&DAT_01d39138,&LAB_00b1c950,e,&DAT_018b06c0,1,0);
    return iVar1;
  }
  return 1;
}

