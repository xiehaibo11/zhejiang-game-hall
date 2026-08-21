
ENGINE * ENGINE_get_digest_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)engine_table_select(&DAT_01d39140,nid);
  return pEVar1;
}

