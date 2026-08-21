
undefined4 FUN_00b2bb70(long param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (param_2 == 1) {
    *puVar2 = param_4;
  }
  else {
    if (param_2 == 7) {
      piVar3 = *(int **)(*(long *)(param_1 + 0x10) + 0x20);
      iVar1 = HMAC_Init_ex((HMAC_CTX *)puVar2[4],*(void **)(piVar3 + 2),*piVar3,(EVP_MD *)*puVar2,
                           *(ENGINE **)(param_1 + 8));
    }
    else {
      if (param_2 != 6) {
        return 0xfffffffe;
      }
      if (param_3 < -1) {
        return 0;
      }
      if (0 < param_3 && param_4 == (void *)0x0) {
        return 0;
      }
      iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)(puVar2 + 1),param_4,param_3);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

