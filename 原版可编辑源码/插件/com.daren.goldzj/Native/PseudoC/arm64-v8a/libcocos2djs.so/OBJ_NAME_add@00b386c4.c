
int OBJ_NAME_add(char *name,int type,char *data)

{
  int iVar1;
  uint *ptr;
  int *ptr_00;
  long lVar2;
  
  if (DAT_01d3ac98 == 0) {
    CRYPTO_mem_ctrl(3);
    DAT_01d3ac98 = OPENSSL_LH_new(FUN_00b38354,&LAB_00b383bc);
    CRYPTO_mem_ctrl(2);
    if (DAT_01d3ac98 != 0) goto LAB_00b38724;
LAB_00b387d0:
    iVar1 = 0;
  }
  else {
LAB_00b38724:
    ptr = CRYPTO_malloc(0x18,"crypto/objects/o_names.c",0xc5);
    if (ptr == (uint *)0x0) {
      return 0;
    }
    *ptr = type & 0xffff7fff;
    ptr[1] = type & 0x8000;
    *(char **)(ptr + 2) = name;
    *(char **)(ptr + 4) = data;
    ptr_00 = (int *)OPENSSL_LH_insert(DAT_01d3ac98,ptr);
    if (ptr_00 == (int *)0x0) {
      iVar1 = OPENSSL_LH_error(DAT_01d3ac98);
      if (iVar1 != 0) {
        CRYPTO_free(ptr);
        goto LAB_00b387d0;
      }
    }
    else {
      if ((DAT_01d3aca0 != 0) && (iVar1 = OPENSSL_sk_num(), *ptr_00 < iVar1)) {
        lVar2 = OPENSSL_sk_value(DAT_01d3aca0);
        (**(code **)(lVar2 + 0x10))(*(undefined8 *)(ptr_00 + 2),*ptr_00,*(undefined8 *)(ptr_00 + 4))
        ;
      }
      CRYPTO_free(ptr_00);
    }
    iVar1 = 1;
  }
  return iVar1;
}

