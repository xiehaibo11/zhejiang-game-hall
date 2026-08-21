
/* WARNING: Removing unreachable block (ram,0x00be74ac) */

int FUN_00be732c(BIO *param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  BIO *b;
  uint uVar3;
  void *local_78;
  int local_6c;
  uchar *local_68;
  
  puVar2 = (uint *)BIO_get_data();
  b = BIO_next(param_1);
  if ((((param_2 == (void *)0x0) || ((int)param_3 < 0)) || (puVar2 == (uint *)0x0)) ||
     (b == (BIO *)0x0)) {
    return 0;
  }
  local_6c = 0;
  local_78 = param_2;
LAB_00be73b0:
  uVar3 = *puVar2;
joined_r0x00be73b8:
  if (uVar3 < 5) {
LAB_00be73f0:
    switch((long)&switchD_00be73fc::switchdataD_018e08c8 +
           (long)(int)(&switchD_00be73fc::switchdataD_018e08c8)[uVar3]) {
    case 0xbe7400:
      goto switchD_00be73fc_caseD_be7400;
    case 0xbe743c:
      iVar1 = ASN1_object_size(0,param_3,puVar2[9]);
      puVar2[6] = iVar1 - param_3;
      if ((int)puVar2[4] < (int)(iVar1 - param_3)) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buflen <= ctx->bufsize","crypto/asn1/bio_asn1.c",0xb5);
      }
      local_68 = *(uchar **)(puVar2 + 2);
      ASN1_put_object(&local_68,0,param_3,puVar2[9],puVar2[8]);
      uVar3 = 3;
      puVar2[7] = param_3;
      *puVar2 = 3;
      goto LAB_00be73f0;
    case 0xbe7464:
      iVar1 = BIO_write(b,(void *)(*(long *)(puVar2 + 2) + (long)(int)puVar2[5]),puVar2[6]);
      if (iVar1 < 1) break;
      uVar3 = puVar2[6];
      puVar2[6] = uVar3 - iVar1;
      if (uVar3 - iVar1 == 0) goto code_r0x00be7498;
      puVar2[5] = puVar2[5] + iVar1;
      goto LAB_00be73b0;
    case 0xbe74b0:
      iVar1 = FUN_00be7934(param_1,puVar2,*(undefined8 *)(puVar2 + 0xc),2);
      if (0 < iVar1) goto LAB_00be73b0;
      break;
    case 0xbe74d4:
      uVar3 = puVar2[7];
      if ((int)param_3 <= (int)puVar2[7]) {
        uVar3 = param_3;
      }
      iVar1 = BIO_write(b,local_78,uVar3);
      if (iVar1 < 1) goto LAB_00be73b0;
      uVar3 = puVar2[7];
      param_3 = param_3 - iVar1;
      local_6c = iVar1 + local_6c;
      local_78 = (void *)((long)local_78 + (long)iVar1);
      puVar2[7] = uVar3 - iVar1;
      if (uVar3 - iVar1 == 0) {
        *puVar2 = 2;
      }
      if (param_3 != 0) goto LAB_00be73b0;
    }
    BIO_clear_flags(param_1,0xf);
    BIO_copy_next_retry(param_1);
    if (0 < local_6c) {
      return local_6c;
    }
    return iVar1;
  }
  goto LAB_00be7554;
code_r0x00be7498:
  uVar3 = 4;
  puVar2[5] = 0;
  *puVar2 = 4;
  goto LAB_00be73f0;
switchD_00be73fc_caseD_be7400:
  if ((*(code **)(puVar2 + 10) != (code *)0x0) &&
     (iVar1 = (**(code **)(puVar2 + 10))(param_1,puVar2 + 0x12,puVar2 + 0x14,puVar2 + 0x16),
     iVar1 == 0)) {
LAB_00be7554:
    BIO_clear_flags(param_1,0xf);
    return 0;
  }
  uVar3 = 1;
  if ((int)puVar2[0x14] < 1) {
    uVar3 = 2;
  }
  *puVar2 = uVar3;
  goto joined_r0x00be73b8;
}

