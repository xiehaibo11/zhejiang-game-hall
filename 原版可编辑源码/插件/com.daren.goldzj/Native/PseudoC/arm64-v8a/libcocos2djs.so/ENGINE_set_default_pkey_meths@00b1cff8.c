
int ENGINE_set_default_pkey_meths(ENGINE *e)

{
  int iVar1;
  undefined8 local_18;
  
  if ((*(code **)(e + 0x48) != (code *)0x0) &&
     (iVar1 = (**(code **)(e + 0x48))(e,0,&local_18,0), 0 < iVar1)) {
    iVar1 = engine_table_register(&DAT_01d39158,&LAB_00b1cf5c,e,local_18,iVar1,1);
    return iVar1;
  }
  return 1;
}

