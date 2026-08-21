
long TXT_DB_write(BIO *out,TXT_DB *db)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BUF_MEM *str;
  undefined8 *puVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  size_t len;
  long lVar10;
  size_t sVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
LAB_00b55400:
    lVar10 = -1;
  }
  else {
    iVar1 = OPENSSL_sk_num(db->data);
    if (iVar1 < 1) {
      lVar10 = 0;
    }
    else {
      iVar3 = db->num_fields;
      len = (size_t)iVar3;
      uVar12 = 0;
      lVar10 = 0;
      if (iVar3 < 1) {
        do {
          OPENSSL_sk_value(db->data,uVar12 & 0xffffffff);
          iVar3 = BUF_MEM_grow_clean(str,len);
          if (iVar3 == 0) goto LAB_00b55400;
          pcVar8 = str->data;
          pcVar8[-1] = '\n';
          lVar14 = (long)pcVar8 - (long)str->data;
          iVar3 = BIO_write(out,str->data,(int)lVar14);
          if (lVar14 != iVar3) goto LAB_00b55400;
          uVar12 = uVar12 + 1;
          lVar10 = lVar14 + lVar10;
        } while ((long)uVar12 < (long)iVar1);
      }
      else {
        do {
          puVar4 = (undefined8 *)OPENSSL_sk_value(db->data,uVar12 & 0xffffffff);
          lVar14 = 0;
          sVar11 = len;
          puVar13 = puVar4;
          do {
            if ((char *)*puVar13 != (char *)0x0) {
              sVar5 = strlen((char *)*puVar13);
              lVar14 = sVar5 + lVar14;
            }
            sVar11 = sVar11 - 1;
            puVar13 = puVar13 + 1;
          } while (sVar11 != 0);
          iVar2 = BUF_MEM_grow_clean(str,(long)(iVar3 + (int)lVar14 * 2));
          if (iVar2 == 0) goto LAB_00b55400;
          sVar11 = 0;
          pcVar8 = str->data;
          do {
            pcVar6 = pcVar8;
            pcVar8 = (char *)puVar4[sVar11];
            if (pcVar8 != (char *)0x0) {
              do {
                cVar9 = *pcVar8;
                if (cVar9 == '\t') {
                  pcVar7 = pcVar6 + 1;
                  *pcVar6 = '\\';
                  cVar9 = *pcVar8;
                }
                else {
                  pcVar7 = pcVar6;
                  if (cVar9 == '\0') break;
                }
                pcVar8 = pcVar8 + 1;
                pcVar6 = pcVar7 + 1;
                *pcVar7 = cVar9;
              } while( true );
            }
            sVar11 = sVar11 + 1;
            *pcVar6 = '\t';
            pcVar8 = pcVar6 + 1;
          } while (sVar11 != len);
          *pcVar6 = '\n';
          lVar14 = (long)(pcVar6 + 1) - (long)str->data;
          iVar2 = BIO_write(out,str->data,(int)lVar14);
          if (lVar14 != iVar2) goto LAB_00b55400;
          uVar12 = uVar12 + 1;
          lVar10 = lVar14 + lVar10;
        } while ((long)uVar12 < (long)iVar1);
      }
    }
  }
  BUF_MEM_free(str);
  return lVar10;
}

