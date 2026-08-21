
int ENGINE_register_DSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x18) != 0) {
    iVar1 = engine_table_register(&DAT_01782ec8,&LAB_00b2b130,e,&DAT_013e0cd0,1,0);
    return iVar1;
  }
  return 1;
}

