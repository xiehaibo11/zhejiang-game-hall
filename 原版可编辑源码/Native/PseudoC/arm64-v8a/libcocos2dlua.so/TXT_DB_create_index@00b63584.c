
int TXT_DB_create_index(TXT_DB *db,int field,qual *qual,LHASH_HASH_FN_TYPE hash,
                       LHASH_COMP_FN_TYPE cmp)

{
  int iVar1;
  int iVar2;
  long lVar3;
  OPENSSL_STRING *ppcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  
  if (field < db->num_fields) {
    lVar3 = OPENSSL_LH_new(hash,cmp);
    if (lVar3 == 0) {
      db->error = 1;
      iVar1 = 0;
    }
    else {
      iVar1 = OPENSSL_sk_num(db->data);
      if (0 < iVar1) {
        if (qual == (qual *)0x0) {
          iVar8 = 0;
          do {
            uVar6 = OPENSSL_sk_value(db->data,iVar8);
            lVar5 = OPENSSL_LH_insert(lVar3,uVar6);
            if (lVar5 != 0) goto LAB_00b63694;
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar1);
        }
        else {
          iVar8 = 0;
          do {
            ppcVar4 = (OPENSSL_STRING *)OPENSSL_sk_value(db->data,iVar8);
            iVar2 = (*qual)(ppcVar4);
            if ((iVar2 != 0) && (lVar5 = OPENSSL_LH_insert(lVar3,ppcVar4), lVar5 != 0)) {
LAB_00b63694:
              db->error = 2;
              iVar1 = OPENSSL_sk_find(db->data,lVar5);
              db->arg1 = (long)iVar1;
              db->arg2 = (long)iVar8;
              OPENSSL_LH_free(lVar3);
              return 0;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar1);
        }
      }
      uVar7 = -(ulong)((uint)field >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)field << 3;
      OPENSSL_LH_free(*(undefined8 *)((long)db->index + uVar7));
      iVar1 = 1;
      *(long *)((long)db->index + uVar7) = lVar3;
      *(qual **)((long)db->qual + uVar7) = qual;
    }
  }
  else {
    iVar1 = 0;
    db->error = 3;
  }
  return iVar1;
}

