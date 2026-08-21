
int EC_POINT_oct2point(EC_GROUP *group,EC_POINT *p,uchar *buf,size_t len,BN_CTX *ctx)

{
  int iVar1;
  int line;
  byte *pbVar2;
  
  pbVar2 = *(byte **)group;
  if ((*(code **)(pbVar2 + 0xa8) == (code *)0x0) && ((*pbVar2 & 1) == 0)) {
    iVar1 = 0x42;
    line = 0x7b;
  }
  else {
    if (pbVar2 == *(byte **)p) {
      if ((*pbVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b20c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (**(code **)(pbVar2 + 0xa8))();
        return iVar1;
      }
      if (*(int *)(pbVar2 + 4) == 0x196) {
        iVar1 = ec_GFp_simple_oct2point();
        return iVar1;
      }
      iVar1 = ec_GF2m_simple_oct2point();
      return iVar1;
    }
    iVar1 = 0x65;
    line = 0x7f;
  }
  ERR_put_error(0x10,0x7a,iVar1,"crypto/ec/ec_oct.c",line);
  return 0;
}

