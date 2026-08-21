
ulong do_dtls1_write(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,uint param_4,
                    int param_5)

{
  undefined1 *__dest;
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  EVP_MD *pEVar6;
  EVP_CIPHER *cipher;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined1 *local_90;
  undefined1 *local_88;
  
  if (param_1[0xfd] != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: 0","ssl/record/rec_layer_d1.c",999);
  }
  if ((*(int *)(*(long *)(param_1 + 0x24) + 0xf4) != 0) &&
     (uVar5 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1), (int)uVar5 < 1)) {
    return uVar5;
  }
  if (param_5 == 0 && param_4 == 0) {
    return 0;
  }
  if (((*(long *)(param_1 + 0x5e) == 0) || (*(long *)(param_1 + 0x4e) == 0)) ||
     (pEVar6 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x50)), pEVar6 == (EVP_MD *)0x0)) {
    iVar3 = 0;
  }
  else {
    pEVar6 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x50));
    iVar3 = EVP_MD_size(pEVar6);
    if (iVar3 < 0) {
      return 0xffffffff;
    }
  }
  puVar7 = *(undefined1 **)(param_1 + 0xf6);
  *puVar7 = (char)param_2;
  if ((**(int **)(param_1 + 2) == 0x1ffff) && (param_1[0x7c] != 0x100)) {
    *(undefined2 *)(puVar7 + 1) = 0xfffe;
  }
  else {
    puVar7[1] = (char)((uint)*param_1 >> 8);
    puVar7[2] = (char)*param_1;
  }
  puVar1 = puVar7 + 0xd;
  local_a4 = param_2;
  if (*(EVP_CIPHER_CTX **)(param_1 + 0x4e) != (EVP_CIPHER_CTX *)0x0) {
    cipher = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x4e));
    uVar5 = EVP_CIPHER_flags(cipher);
    uVar2 = (uint)uVar5 & 0xf0007;
    if (uVar2 - 6 < 2) {
      iVar8 = 8;
      goto LAB_00ac86d4;
    }
    if (uVar2 == 2) {
      iVar4 = EVP_CIPHER_CTX_iv_length(*(EVP_CIPHER_CTX **)(param_1 + 0x4e));
      iVar8 = 0;
      if (1 < iVar4) {
        iVar8 = iVar4;
      }
      goto LAB_00ac86d4;
    }
  }
  iVar8 = 0;
LAB_00ac86d4:
  __dest = puVar1 + iVar8;
  local_a0 = param_4;
  local_90 = __dest;
  local_88 = param_3;
  if (*(long *)(param_1 + 0x4a) == 0) {
    memcpy(__dest,param_3,(ulong)param_4);
    local_88 = __dest;
  }
  else {
    iVar4 = ssl3_do_compress(param_1,auStack_a8);
    if (iVar4 == 0) {
      ERR_put_error(0x14,0xf5,0x8d,"ssl/record/rec_layer_d1.c",0x43a);
      return 0xffffffff;
    }
  }
  if (iVar3 != 0) {
    iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                      (param_1,auStack_a8,puVar1 + (local_a0 + iVar8),1);
    if (iVar4 < 0) {
      return 0xffffffff;
    }
    local_a0 = local_a0 + iVar3;
  }
  if (iVar8 != 0) {
    local_a0 = local_a0 + iVar8;
  }
  local_90 = puVar1;
  local_88 = puVar1;
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 0xc0))(param_1,auStack_a8,1,1);
  if (iVar3 < 1) {
    return 0xffffffff;
  }
  puVar7[3] = *(undefined1 *)(*(long *)(param_1 + 0x44a) + 3);
  puVar7[4] = *(undefined1 *)(*(long *)(param_1 + 0x44a) + 2);
  *(undefined2 *)(puVar7 + 9) = *(undefined2 *)((long)param_1 + 0x111e);
  *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((long)param_1 + 0x111a);
  puVar7[0xb] = (char)(local_a0 >> 8);
  puVar7[0xc] = (char)local_a0;
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(1,0,0x100,puVar7,0xd,param_1,*(undefined8 *)(param_1 + 0x2a));
  }
  local_a0 = local_a0 + 0xd;
  local_a4 = param_2;
  ssl3_record_sequence_update(param_1 + 0x446);
  if (param_5 == 0) {
    param_1[0xfd] = local_a0;
    param_1[0xfc] = 0;
    param_1[0x43f] = param_4;
    *(undefined1 **)(param_1 + 0x442) = param_3;
    param_1[0x440] = param_2;
    param_1[0x441] = param_4;
    uVar5 = ssl3_write_pending(param_1,param_2,param_3,param_4);
    return uVar5;
  }
  return (ulong)local_a0;
}

