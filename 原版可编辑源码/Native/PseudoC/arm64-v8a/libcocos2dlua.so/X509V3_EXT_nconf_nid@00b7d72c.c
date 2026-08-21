
X509_EXTENSION * X509V3_EXT_nconf_nid(CONF *conf,X509V3_CTX *ctx,int ext_nid,char *value)

{
  int iVar1;
  size_t sVar2;
  X509_EXTENSION *pXVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  
  sVar2 = strlen(value);
  if ((sVar2 < 9) || (iVar1 = strncmp(value,"critical,",9), iVar1 != 0)) {
    uVar7 = 0;
  }
  else {
    value = value + 8;
    do {
      value = value + 1;
      iVar1 = isspace((uint)(byte)*value);
    } while (iVar1 != 0);
    uVar7 = 1;
  }
  sVar2 = strlen(value);
  if (3 < sVar2) {
    lVar8 = 4;
    iVar1 = strncmp(value,"DER:",4);
    if (iVar1 == 0) {
      uVar6 = 1;
LAB_00b7d824:
      pbVar5 = (byte *)(value + lVar8 + -1);
      do {
        pbVar5 = pbVar5 + 1;
        iVar1 = isspace((uint)*pbVar5);
      } while (iVar1 != 0);
      pcVar4 = OBJ_nid2sn(ext_nid);
      pXVar3 = (X509_EXTENSION *)FUN_00b7d340(pcVar4,pbVar5,uVar7,uVar6,ctx);
      return pXVar3;
    }
    if (4 < sVar2) {
      lVar8 = 5;
      iVar1 = strncmp(value,"ASN1:",5);
      if (iVar1 == 0) {
        uVar6 = 2;
        goto LAB_00b7d824;
      }
    }
  }
  pXVar3 = (X509_EXTENSION *)FUN_00b7d4e4(conf,ctx,ext_nid,uVar7,value);
  return pXVar3;
}

