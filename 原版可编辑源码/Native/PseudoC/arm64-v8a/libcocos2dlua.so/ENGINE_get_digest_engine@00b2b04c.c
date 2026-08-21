
ENGINE * ENGINE_get_digest_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)engine_table_select(&DAT_01782ec0,nid);
  return pEVar1;
}

