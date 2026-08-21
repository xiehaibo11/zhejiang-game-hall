
void X509_POLICY_NODE_print(BIO *out,X509_POLICY_NODE *node,int indent)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ASN1_INTEGER *aint;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  
  puVar12 = *(uint **)node;
  BIO_printf(out,"%*sPolicy: ",(ulong)(uint)indent,&DAT_0189703a);
  i2a_ASN1_OBJECT(out,*(ASN1_OBJECT **)(puVar12 + 2));
  BIO_puts(out,"\n");
  uVar1 = indent + 2;
  pcVar7 = "Critical";
  if ((*puVar12 & 0x10) == 0) {
    pcVar7 = "Non Critical";
  }
  BIO_printf(out,"%*s%s\n",(ulong)uVar1,&DAT_0189703a,pcVar7);
  lVar8 = *(long *)(puVar12 + 4);
  if (lVar8 == 0) {
    BIO_printf(out,"%*sNo Qualifiers\n",(ulong)uVar1,&DAT_0189703a);
    return;
  }
  iVar3 = OPENSSL_sk_num(lVar8);
  if (0 < iVar3) {
    iVar3 = 0;
    uVar2 = indent + 4;
    do {
      uVar9 = (ulong)uVar1;
      puVar6 = (undefined8 *)OPENSSL_sk_value(lVar8,iVar3);
      iVar4 = OBJ_obj2nid((ASN1_OBJECT *)*puVar6);
      if (iVar4 == 0xa5) {
        BIO_printf(out,"%*sUser Notice:\n",uVar9,&DAT_0189703a);
        puVar6 = (undefined8 *)puVar6[1];
        plVar13 = (long *)*puVar6;
        if (plVar13 != (long *)0x0) {
          BIO_printf(out,"%*sOrganization: %s\n",(ulong)uVar2,&DAT_0189703a,
                     *(undefined8 *)(*plVar13 + 8));
          iVar4 = OPENSSL_sk_num(plVar13[1]);
          pcVar7 = "s";
          if (iVar4 < 2) {
            pcVar7 = "";
          }
          BIO_printf(out,"%*sNumber%s: ",(ulong)uVar2,&DAT_0189703a,pcVar7);
          iVar4 = OPENSSL_sk_num(plVar13[1]);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              aint = (ASN1_INTEGER *)OPENSSL_sk_value(plVar13[1],iVar4);
              if (iVar4 != 0) {
                BIO_puts(out,", ");
              }
              pcVar7 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,aint);
              BIO_puts(out,pcVar7);
              CRYPTO_free(pcVar7);
              iVar4 = iVar4 + 1;
              iVar5 = OPENSSL_sk_num(plVar13[1]);
            } while (iVar4 < iVar5);
          }
          BIO_puts(out,"\n");
        }
        lVar11 = puVar6[1];
        if (lVar11 != 0) {
          uVar10 = *(undefined8 *)(lVar11 + 8);
          uVar9 = (ulong)uVar2;
          pcVar7 = "%*sExplicit Text: %s\n";
          goto LAB_00b6f83c;
        }
      }
      else if (iVar4 == 0xa4) {
        pcVar7 = "%*sCPS: %s\n";
        uVar10 = *(undefined8 *)(puVar6[1] + 8);
LAB_00b6f83c:
        BIO_printf(out,pcVar7,uVar9,&DAT_0189703a,uVar10);
      }
      else {
        BIO_printf(out,"%*sUnknown Qualifier: ",(ulong)uVar2,&DAT_0189703a);
        i2a_ASN1_OBJECT(out,(ASN1_OBJECT *)*puVar6);
        BIO_puts(out,"\n");
      }
      iVar3 = iVar3 + 1;
      iVar4 = OPENSSL_sk_num(lVar8);
    } while (iVar3 < iVar4);
  }
  return;
}

