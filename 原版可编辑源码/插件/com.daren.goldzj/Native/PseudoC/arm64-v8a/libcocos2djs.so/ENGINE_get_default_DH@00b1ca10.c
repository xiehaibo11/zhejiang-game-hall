
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_default_DH(void)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)engine_table_select(&DAT_01d39138,1);
  return pEVar1;
}

