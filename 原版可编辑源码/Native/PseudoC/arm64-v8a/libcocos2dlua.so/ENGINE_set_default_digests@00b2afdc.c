
int ENGINE_set_default_digests(ENGINE *e)

{
  int iVar1;
  undefined8 local_18;
  
  if ((*(code **)(e + 0x40) != (code *)0x0) &&
     (iVar1 = (**(code **)(e + 0x40))(e,0,&local_18,0), 0 < iVar1)) {
    iVar1 = engine_table_register(&DAT_01782ec0,&LAB_00b2af40,e,local_18,iVar1,1);
    return iVar1;
  }
  return 1;
}

