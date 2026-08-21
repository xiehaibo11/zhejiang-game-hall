
int EC_POINT_add(EC_GROUP *group,EC_POINT *r,EC_POINT *a,EC_POINT *b,BN_CTX *ctx)

{
  int iVar1;
  int line;
  long lVar2;
  
  lVar2 = *(long *)group;
  if (*(code **)(lVar2 + 0xb0) == (code *)0x0) {
    iVar1 = 0x42;
    line = 0x30c;
  }
  else {
    if (((lVar2 == *(long *)r) && (lVar2 == *(long *)a)) && (lVar2 == *(long *)b)) {
                    /* WARNING: Could not recover jumptable at 0x00b0ff38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(lVar2 + 0xb0))();
      return iVar1;
    }
    iVar1 = 0x65;
    line = 0x311;
  }
  ERR_put_error(0x10,0x70,iVar1,"crypto/ec/ec_lib.c",line);
  return 0;
}

