
int EC_POINT_set_compressed_coordinates_GFp
              (EC_GROUP *group,EC_POINT *p,BIGNUM *x,int y_bit,BN_CTX *ctx)

{
  int iVar1;
  int line;
  byte *pbVar2;
  
  pbVar2 = *(byte **)group;
  if ((*(code **)(pbVar2 + 0x98) == (code *)0x0) && ((*pbVar2 & 1) == 0)) {
    iVar1 = 0x42;
    line = 0x1e;
  }
  else {
    if (pbVar2 == *(byte **)p) {
      if ((*pbVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b20aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (**(code **)(pbVar2 + 0x98))();
        return iVar1;
      }
      if (*(int *)(pbVar2 + 4) == 0x196) {
        iVar1 = ec_GFp_simple_set_compressed_coordinates();
        return iVar1;
      }
      iVar1 = ec_GF2m_simple_set_compressed_coordinates();
      return iVar1;
    }
    iVar1 = 0x65;
    line = 0x23;
  }
  ERR_put_error(0x10,0x7d,iVar1,"crypto/ec/ec_oct.c",line);
  return 0;
}

