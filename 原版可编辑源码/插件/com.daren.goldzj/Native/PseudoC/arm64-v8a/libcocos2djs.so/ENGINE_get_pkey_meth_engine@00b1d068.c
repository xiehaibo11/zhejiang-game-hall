
ENGINE * ENGINE_get_pkey_meth_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)engine_table_select(&DAT_01d39158,nid);
  return pEVar1;
}

