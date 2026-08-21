
undefined4 CMS_RecipientInfo_kari_decrypt(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  void *ptr;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  void *local_38;
  
  local_38 = (void *)0x0;
  iVar2 = **(int **)(param_3 + 8);
  uVar5 = *(undefined8 *)(*(int **)(param_3 + 8) + 2);
  iVar1 = cms_env_asn1_ctrl(param_2,1);
  if (iVar1 == 0) {
    ptr = (void *)0x0;
  }
  else {
    iVar2 = FUN_00b9ddb4(&local_38,&local_40,uVar5,(long)iVar2,*(undefined8 *)(param_2 + 8),0);
    ptr = local_38;
    if (iVar2 != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x18);
      CRYPTO_clear_free(*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28),
                        "crypto/cms/cms_kari.c",0xf6);
      ptr = (void *)0x0;
      *(void **)(lVar4 + 0x20) = local_38;
      *(undefined8 *)(lVar4 + 0x28) = local_40;
      uVar3 = 1;
      local_38 = (void *)0x0;
      goto LAB_00b9dd8c;
    }
  }
  uVar3 = 0;
LAB_00b9dd8c:
  CRYPTO_free(ptr);
  return uVar3;
}

