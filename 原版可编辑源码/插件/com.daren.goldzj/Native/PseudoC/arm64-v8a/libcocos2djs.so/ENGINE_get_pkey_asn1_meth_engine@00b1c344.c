
ENGINE * ENGINE_get_pkey_asn1_meth_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)engine_table_select(&DAT_01d39128,nid);
  return pEVar1;
}

