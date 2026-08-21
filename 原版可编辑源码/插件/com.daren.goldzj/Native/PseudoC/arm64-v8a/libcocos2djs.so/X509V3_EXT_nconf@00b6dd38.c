
X509_EXTENSION * X509V3_EXT_nconf(CONF *conf,X509V3_CTX *ctx,char *name,char *value)

{
  int iVar1;
  size_t sVar2;
  X509_EXTENSION *pXVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  
  sVar2 = strlen(value);
  if ((sVar2 < 9) || (iVar1 = strncmp(value,"critical,",9), iVar1 != 0)) {
    uVar6 = 0;
  }
  else {
    value = value + 8;
    do {
      value = value + 1;
      iVar1 = isspace((uint)(byte)*value);
    } while (iVar1 != 0);
    uVar6 = 1;
  }
  sVar2 = strlen(value);
  if (3 < sVar2) {
    lVar7 = 4;
    iVar1 = strncmp(value,"DER:",4);
    if (iVar1 == 0) {
      uVar5 = 1;
LAB_00b6de80:
      pbVar4 = (byte *)(value + lVar7 + -1);
      do {
        pbVar4 = pbVar4 + 1;
        iVar1 = isspace((uint)*pbVar4);
      } while (iVar1 != 0);
      pXVar3 = (X509_EXTENSION *)FUN_00b6dec0(name,pbVar4,uVar6,uVar5,ctx);
      return pXVar3;
    }
    if (4 < sVar2) {
      lVar7 = 5;
      iVar1 = strncmp(value,"ASN1:",5);
      if (iVar1 == 0) {
        uVar5 = 2;
        goto LAB_00b6de80;
      }
    }
  }
  iVar1 = OBJ_sn2nid(name);
  pXVar3 = (X509_EXTENSION *)FUN_00b6e064(conf,ctx,iVar1,uVar6,value);
  if (pXVar3 == (X509_EXTENSION *)0x0) {
    ERR_put_error(0x22,0x98,0x80,"crypto/x509v3/v3_conf.c",0x2f);
    ERR_add_error_data(4,"name=",name,", value=",value);
    pXVar3 = (X509_EXTENSION *)0x0;
  }
  return pXVar3;
}

