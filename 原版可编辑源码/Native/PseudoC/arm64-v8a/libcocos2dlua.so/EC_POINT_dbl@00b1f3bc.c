
int EC_POINT_dbl(EC_GROUP *group,EC_POINT *r,EC_POINT *a,BN_CTX *ctx)

{
  int iVar1;
  int line;
  long lVar2;
  
  lVar2 = *(long *)group;
  if (*(code **)(lVar2 + 0xb8) == (code *)0x0) {
    iVar1 = 0x42;
    line = 0x31b;
  }
  else {
    if ((lVar2 == *(long *)r) && (lVar2 == *(long *)a)) {
                    /* WARNING: Could not recover jumptable at 0x00b1f430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(lVar2 + 0xb8))();
      return iVar1;
    }
    iVar1 = 0x65;
    line = 799;
  }
  ERR_put_error(0x10,0x73,iVar1,"crypto/ec/ec_lib.c",line);
  return 0;
}

