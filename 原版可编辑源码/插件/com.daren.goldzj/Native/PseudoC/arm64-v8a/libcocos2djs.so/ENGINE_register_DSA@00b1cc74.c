
int ENGINE_register_DSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x18) != 0) {
    iVar1 = engine_table_register(&DAT_01d39148,&LAB_00b1ccb0,e,&DAT_018b06e0,1,0);
    return iVar1;
  }
  return 1;
}

