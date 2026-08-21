
ENGINE * ENGINE_get_cipher_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)engine_table_select(&DAT_01d39130,nid);
  return pEVar1;
}

