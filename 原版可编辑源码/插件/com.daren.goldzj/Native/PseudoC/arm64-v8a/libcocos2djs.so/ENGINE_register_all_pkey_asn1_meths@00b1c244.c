
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_pkey_asn1_meths(void)

{
  int iVar1;
  ENGINE *e;
  undefined8 local_28;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    if ((*(code **)(e + 0x50) != (code *)0x0) &&
       (iVar1 = (**(code **)(e + 0x50))(e,0,&local_28,0), 0 < iVar1)) {
      engine_table_register(&DAT_01d39128,&LAB_00b1c238,e,local_28,iVar1,0);
    }
  }
  return;
}

