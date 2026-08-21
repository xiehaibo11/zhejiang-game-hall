
int EC_POINT_set_affine_coordinates_GFp(EC_GROUP *group,EC_POINT *p,BIGNUM *x,BIGNUM *y,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)group + 0x88);
  if (pcVar3 == (code *)0x0) {
    iVar1 = 0x42;
    iVar2 = 0x2b6;
    goto LAB_00b1f09c;
  }
  if (*(long *)group != *(long *)p) {
    iVar1 = 0x65;
    iVar2 = 699;
    goto LAB_00b1f09c;
  }
  iVar1 = (*pcVar3)(group,p,x,y,ctx);
  if (iVar1 == 0) {
    return 0;
  }
  pcVar3 = *(code **)(*(long *)group + 0xd0);
  if (pcVar3 == (code *)0x0) {
    iVar1 = 0x42;
    iVar2 = 0x34b;
LAB_00b1f080:
    ERR_put_error(0x10,0x77,iVar1,"crypto/ec/ec_lib.c",iVar2);
  }
  else {
    if (*(long *)group != *(long *)p) {
      iVar1 = 0x65;
      iVar2 = 0x34f;
      goto LAB_00b1f080;
    }
    iVar1 = (*pcVar3)(group,p,ctx);
    if (0 < iVar1) {
      return 1;
    }
  }
  iVar1 = 0x6b;
  iVar2 = 0x2c3;
LAB_00b1f09c:
  ERR_put_error(0x10,0x7c,iVar1,"crypto/ec/ec_lib.c",iVar2);
  return 0;
}

