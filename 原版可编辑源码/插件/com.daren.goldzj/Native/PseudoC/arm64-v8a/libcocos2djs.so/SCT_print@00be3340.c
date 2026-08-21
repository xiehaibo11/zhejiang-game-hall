
void SCT_print(int *param_1,BIO *param_2,uint param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ASN1_GENERALIZEDTIME *s;
  char *pcVar6;
  ulong uVar7;
  char acStack_64 [20];
  
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = CTLOG_STORE_get0_log_by_id
                      (param_4,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
  }
  BIO_printf(param_2,"%*sSigned Certificate Timestamp:",(ulong)param_3,&DAT_0189703a);
  uVar1 = param_3 + 4;
  BIO_printf(param_2,"\n%*sVersion   : ",(ulong)uVar1,&DAT_0189703a);
  if (*param_1 != 0) {
    BIO_printf(param_2,"unknown\n%*s",(ulong)(param_3 + 0x10),&DAT_0189703a);
    BIO_hex_string(param_2,param_3 + 0x10,0x10,*(undefined8 *)(param_1 + 2),param_1[4]);
    return;
  }
  BIO_printf(param_2,"v1 (0x0)");
  if (lVar4 != 0) {
    uVar5 = CTLOG_get0_name(lVar4);
    BIO_printf(param_2,"\n%*sLog       : %s",(ulong)uVar1,&DAT_0189703a,uVar5);
  }
  BIO_printf(param_2,"\n%*sLog ID    : ",(ulong)uVar1,&DAT_0189703a);
  iVar2 = param_3 + 0x10;
  BIO_hex_string(param_2,iVar2,0x10,*(undefined8 *)(param_1 + 6),param_1[8]);
  BIO_printf(param_2,"\n%*sTimestamp : ",(ulong)uVar1,&DAT_0189703a);
  uVar7 = *(ulong *)(param_1 + 10);
  s = ASN1_GENERALIZEDTIME_new();
  if (s != (ASN1_GENERALIZEDTIME *)0x0) {
    ASN1_GENERALIZEDTIME_adj(s,0,(int)(uVar7 / 86400000),(uVar7 % 86400000) / 1000);
    uVar5 = ASN1_STRING_get0_data(s);
    BIO_snprintf(acStack_64,0x14,"%.14s.%03dZ",uVar5,
                 (ulong)(uint)((int)uVar7 + (int)(uVar7 / 1000) * -1000));
    iVar3 = ASN1_GENERALIZEDTIME_set_string(s,acStack_64);
    if (iVar3 != 0) {
      ASN1_GENERALIZEDTIME_print(param_2,s);
    }
    ASN1_GENERALIZEDTIME_free(s);
  }
  BIO_printf(param_2,"\n%*sExtensions: ",(ulong)uVar1,&DAT_0189703a);
  if (*(long *)(param_1 + 0xe) == 0) {
    BIO_printf(param_2,"none");
  }
  else {
    BIO_hex_string(param_2,iVar2,0x10,*(undefined8 *)(param_1 + 0xc));
  }
  BIO_printf(param_2,"\n%*sSignature : ",(ulong)uVar1,&DAT_0189703a);
  iVar3 = SCT_get_signature_nid(param_1);
  if (iVar3 == 0) {
    BIO_printf(param_2,"%02X%02X",(ulong)*(byte *)(param_1 + 0x10),
               (ulong)*(byte *)((long)param_1 + 0x41));
  }
  else {
    pcVar6 = OBJ_nid2ln(iVar3);
    BIO_printf(param_2,"%s",pcVar6);
  }
  BIO_printf(param_2,"\n%*s            ",(ulong)uVar1,&DAT_0189703a);
  BIO_hex_string(param_2,iVar2,0x10,*(undefined8 *)(param_1 + 0x12),param_1[0x14]);
  return;
}

