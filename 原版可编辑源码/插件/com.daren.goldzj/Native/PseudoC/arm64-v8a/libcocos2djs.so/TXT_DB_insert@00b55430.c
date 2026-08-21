
int TXT_DB_insert(TXT_DB *db,OPENSSL_STRING *value)

{
  int iVar1;
  OPENSSL_STRING *ppcVar2;
  lhash_st_OPENSSL_STRING **pplVar3;
  long lVar4;
  
  if (0 < db->num_fields) {
    lVar4 = 0;
    do {
      pplVar3 = db->index;
      if (pplVar3[lVar4] != (lhash_st_OPENSSL_STRING *)0x0) {
        if (db->qual[lVar4] != (_func_4786 *)0x0) {
          iVar1 = (*db->qual[lVar4])(value);
          if (iVar1 == 0) goto LAB_00b55494;
          pplVar3 = db->index;
        }
        ppcVar2 = (OPENSSL_STRING *)OPENSSL_LH_retrieve(pplVar3[lVar4],value);
        if (ppcVar2 != (OPENSSL_STRING *)0x0) {
          db->error = 2;
          db->arg1 = lVar4;
          db->arg_row = ppcVar2;
          return 0;
        }
      }
LAB_00b55494:
      lVar4 = lVar4 + 1;
    } while (lVar4 < db->num_fields);
  }
  iVar1 = OPENSSL_sk_push(db->data,value);
  if (iVar1 == 0) {
    db->error = 1;
    iVar1 = 0;
  }
  else {
    if (0 < db->num_fields) {
      lVar4 = 0;
      do {
        pplVar3 = db->index;
        if (pplVar3[lVar4] != (lhash_st_OPENSSL_STRING *)0x0) {
          if (db->qual[lVar4] != (_func_4786 *)0x0) {
            iVar1 = (*db->qual[lVar4])(value);
            if (iVar1 == 0) goto LAB_00b554f8;
            pplVar3 = db->index;
          }
          OPENSSL_LH_insert(pplVar3[lVar4],value);
        }
LAB_00b554f8:
        lVar4 = lVar4 + 1;
      } while (lVar4 < db->num_fields);
    }
    iVar1 = 1;
  }
  return iVar1;
}

