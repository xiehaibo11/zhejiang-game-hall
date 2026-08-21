
int EC_POINTs_make_affine(EC_GROUP *group,size_t num,EC_POINT **points,BN_CTX *ctx)

{
  int iVar1;
  int line;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xe8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    iVar1 = 0x42;
    line = 0x376;
LAB_00b1f5ec:
    ERR_put_error(0x10,0x88,iVar1,"crypto/ec/ec_lib.c",line);
    return 0;
  }
  if (num != 0) {
    uVar2 = 0;
    do {
      if (*(long *)group != *(long *)points[uVar2]) {
        iVar1 = 0x65;
        line = 0x37b;
        goto LAB_00b1f5ec;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < num);
  }
                    /* WARNING: Could not recover jumptable at 0x00b1f5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  return iVar1;
}

