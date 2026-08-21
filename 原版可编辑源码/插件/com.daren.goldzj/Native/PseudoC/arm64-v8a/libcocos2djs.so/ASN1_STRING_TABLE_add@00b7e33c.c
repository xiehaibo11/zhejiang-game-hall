
int ASN1_STRING_TABLE_add(int param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *ptr;
  undefined8 uVar3;
  int local_78 [10];
  
  if ((DAT_01d3b350 != 0) || (DAT_01d3b350 = OPENSSL_sk_new(&LAB_00b7e52c), DAT_01d3b350 != 0)) {
    local_78[0] = param_1;
    iVar1 = OPENSSL_sk_find(DAT_01d3b350,local_78);
    if (iVar1 < 0) {
      puVar2 = OBJ_bsearch_(local_78,&DAT_018c2ec8,0x17,0x28,(cmp *)&LAB_00b7e51c);
    }
    else {
      puVar2 = (undefined4 *)OPENSSL_sk_value(DAT_01d3b350,iVar1);
    }
    if ((puVar2 != (undefined4 *)0x0) && ((*(byte *)(puVar2 + 8) & 1) != 0)) {
joined_r0x00b7e4d8:
      if (-1 < param_2) {
        *(long *)(puVar2 + 2) = param_2;
      }
      if (-1 < param_3) {
        *(long *)(puVar2 + 4) = param_3;
      }
      if (param_4 != 0) {
        *(ulong *)(puVar2 + 6) = param_4;
      }
      if (param_5 != 0) {
        *(ulong *)(puVar2 + 8) = param_5 | 1;
      }
      return 1;
    }
    ptr = (undefined4 *)CRYPTO_zalloc(0x28,"crypto/asn1/a_strnid.c",0xca);
    if (ptr != (undefined4 *)0x0) {
      iVar1 = OPENSSL_sk_push(DAT_01d3b350,ptr);
      if (iVar1 != 0) {
        if (puVar2 == (undefined4 *)0x0) {
          *(undefined8 *)(ptr + 2) = 0xffffffffffffffff;
          *(undefined8 *)(ptr + 4) = 0xffffffffffffffff;
          *(undefined8 *)(ptr + 8) = 1;
          puVar2 = ptr;
        }
        else {
          *ptr = *puVar2;
          uVar3 = *(undefined8 *)(puVar2 + 2);
          *(undefined8 *)(ptr + 4) = *(undefined8 *)(puVar2 + 4);
          *(undefined8 *)(ptr + 2) = uVar3;
          *(undefined8 *)(ptr + 6) = *(undefined8 *)(puVar2 + 6);
          *(ulong *)(ptr + 8) = *(ulong *)(puVar2 + 8) | 1;
          puVar2 = ptr;
        }
        goto joined_r0x00b7e4d8;
      }
      CRYPTO_free(ptr);
    }
  }
  ERR_put_error(0xd,0x81,0x41,"crypto/asn1/a_strnid.c",0xe6);
  return 0;
}

