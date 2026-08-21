
size_t EC_POINT_point2oct(EC_GROUP *group,EC_POINT *p,point_conversion_form_t form,uchar *buf,
                         size_t len,BN_CTX *ctx)

{
  size_t sVar1;
  int reason;
  int line;
  byte *pbVar2;
  
  pbVar2 = *(byte **)group;
  if ((*(code **)(pbVar2 + 0xa0) == (code *)0x0) && ((*pbVar2 & 1) == 0)) {
    reason = 0x42;
    line = 0x5d;
  }
  else {
    if (pbVar2 == *(byte **)p) {
      if ((*pbVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b11758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        sVar1 = (**(code **)(pbVar2 + 0xa0))();
        return sVar1;
      }
      if (*(int *)(pbVar2 + 4) == 0x196) {
        sVar1 = ec_GFp_simple_point2oct();
        return sVar1;
      }
      sVar1 = ec_GF2m_simple_point2oct(group,p,form);
      return sVar1;
    }
    reason = 0x65;
    line = 0x61;
  }
  ERR_put_error(0x10,0x7b,reason,"crypto/ec/ec_oct.c",line);
  return 0;
}

