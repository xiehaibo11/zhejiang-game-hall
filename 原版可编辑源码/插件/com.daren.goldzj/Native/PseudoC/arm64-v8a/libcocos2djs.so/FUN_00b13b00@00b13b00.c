
undefined8 FUN_00b13b00(EC_GROUP *param_1,EC_POINT *param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  int line;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = bn_copy_words(auStack_130,*(undefined8 *)(param_2 + 8),4);
    if (((iVar1 != 0) &&
        (iVar1 = bn_copy_words(auStack_150,*(undefined8 *)(param_2 + 0x10),4), iVar1 != 0)) &&
       (iVar1 = bn_copy_words(auStack_170,*(undefined8 *)(param_2 + 0x18),4), iVar1 != 0)) {
      ecp_nistz256_sqr_mont(&local_f0,auStack_170);
      ecp_nistz256_mul_mont(auStack_50,&local_f0,auStack_170);
      ecp_nistz256_sqr_mont(&local_f0,auStack_50);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(auStack_70,&local_f0,auStack_50);
      ecp_nistz256_sqr_mont(&local_f0,auStack_70);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(auStack_90,&local_f0,auStack_70);
      ecp_nistz256_sqr_mont(&local_f0,auStack_90);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(auStack_b0,&local_f0,auStack_90);
      ecp_nistz256_sqr_mont(&local_f0,auStack_b0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(auStack_d0,&local_f0,auStack_b0);
      ecp_nistz256_sqr_mont(&local_f0,auStack_d0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(&local_f0,&local_f0,auStack_170);
      iVar1 = 0x80;
      do {
        ecp_nistz256_sqr_mont(&local_f0,&local_f0);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      ecp_nistz256_mul_mont(&local_f0,&local_f0,auStack_d0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(&local_f0,&local_f0,auStack_d0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(&local_f0,&local_f0,auStack_b0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(&local_f0,&local_f0,auStack_90);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(&local_f0,&local_f0,auStack_70);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(&local_f0,&local_f0,auStack_50);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_sqr_mont(&local_f0,&local_f0);
      ecp_nistz256_mul_mont(&local_f0,&local_f0,auStack_170);
      uStack_108 = uStack_e8;
      local_110 = local_f0;
      uStack_f8 = uStack_d8;
      uStack_100 = uStack_e0;
      ecp_nistz256_sqr_mont(auStack_50,&local_110);
      ecp_nistz256_mul_mont(auStack_70,auStack_50,auStack_130);
      if (param_3 != 0) {
        ecp_nistz256_from_mont(auStack_b0,auStack_70);
        uVar2 = bn_set_words(param_3,auStack_b0,4);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
      }
      if (param_4 != 0) {
        ecp_nistz256_mul_mont(&local_110,&local_110,auStack_50);
        ecp_nistz256_mul_mont(auStack_90,&local_110,auStack_150);
        ecp_nistz256_from_mont(auStack_d0,auStack_90);
        uVar2 = bn_set_words(param_4,auStack_d0,4);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
      }
      return 1;
    }
    iVar1 = 0x92;
    line = 0x586;
  }
  else {
    iVar1 = 0x6a;
    line = 0x57f;
  }
  ERR_put_error(0x10,0xf0,iVar1,"crypto/ec/ecp_nistz256.c",line);
  return 0;
}

