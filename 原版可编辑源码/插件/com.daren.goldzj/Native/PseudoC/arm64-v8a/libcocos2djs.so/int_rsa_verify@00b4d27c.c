
undefined4
int_rsa_verify(int param_1,uchar *param_2,uint param_3,undefined8 *param_4,ulong *param_5,
              uchar *param_6,long param_7,RSA *param_8)

{
  int iVar1;
  int iVar2;
  uchar *to;
  char *name;
  EVP_MD *md;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *local_68;
  int local_54;
  
  local_68 = (void *)0x0;
  local_54 = 0;
  iVar1 = RSA_size(param_8);
  if (iVar1 != param_7) {
    ERR_put_error(4,0x91,0x77,"crypto/rsa/rsa_sign.c",0x84);
    return 0;
  }
  to = CRYPTO_malloc((int)param_7,"crypto/rsa/rsa_sign.c",0x89);
  if (to == (uchar *)0x0) {
    iVar1 = 0x41;
    iVar3 = 0x8b;
    goto LAB_00b4d504;
  }
  iVar1 = RSA_public_decrypt((int)param_7,param_6,to,param_8,1);
  if (iVar1 < 1) {
LAB_00b4d508:
    iVar3 = 0;
  }
  else {
    if (param_1 == 0x72) {
      if (iVar1 == 0x24) {
        if (param_4 != (undefined8 *)0x0) {
          *(undefined4 *)(param_4 + 4) = *(undefined4 *)(to + 0x20);
          uVar6 = *(undefined8 *)(to + 0x10);
          uVar4 = 0x24;
          param_4[3] = *(undefined8 *)(to + 0x18);
          param_4[2] = uVar6;
          uVar7 = *(undefined8 *)(to + 8);
          uVar6 = *(undefined8 *)to;
LAB_00b4d344:
          iVar1 = 0;
          param_4[1] = uVar7;
          *param_4 = uVar6;
          *param_5 = uVar4;
          uVar5 = 1;
          goto LAB_00b4d510;
        }
        if (param_3 == 0x24) {
          iVar1 = memcmp(to,param_2,0x24);
          if (iVar1 == 0) {
LAB_00b4d5c4:
            iVar1 = 0;
            uVar5 = 1;
            goto LAB_00b4d510;
          }
          iVar1 = 0x68;
          iVar3 = 0xa9;
        }
        else {
          iVar1 = 0x83;
          iVar3 = 0xa4;
        }
      }
      else {
        iVar1 = 0x68;
        iVar3 = 0x9b;
      }
LAB_00b4d504:
      ERR_put_error(4,0x91,iVar1,"crypto/rsa/rsa_sign.c",iVar3);
      goto LAB_00b4d508;
    }
    if ((((param_1 == 0x5f) && (iVar1 == 0x12)) && (*to == '\x04')) && (to[1] == '\x10')) {
      if (param_4 != (undefined8 *)0x0) {
        uVar7 = *(undefined8 *)(to + 10);
        uVar6 = *(undefined8 *)(to + 2);
        uVar4 = 0x10;
        goto LAB_00b4d344;
      }
      if (param_3 == 0x10) {
        iVar1 = memcmp(param_2,to + 2,0x10);
        if (iVar1 == 0) goto LAB_00b4d5c4;
        iVar1 = 0x68;
        iVar3 = 0xbd;
      }
      else {
        iVar1 = 0x83;
        iVar3 = 0xb8;
      }
      goto LAB_00b4d504;
    }
    if (param_4 != (undefined8 *)0x0) {
      name = OBJ_nid2sn(param_1);
      md = EVP_get_digestbyname(name);
      if (md == (EVP_MD *)0x0) {
        iVar1 = 0x75;
        iVar3 = 0xca;
      }
      else {
        param_3 = EVP_MD_size(md);
        if ((ulong)param_3 <= (ulong)(long)iVar1) {
          param_2 = to + ((long)iVar1 - (ulong)param_3);
          goto LAB_00b4d490;
        }
        iVar1 = 0x8f;
        iVar3 = 0xd0;
      }
      goto LAB_00b4d504;
    }
LAB_00b4d490:
    iVar2 = FUN_00b4d19c(&local_68,&local_54,param_1,param_2,param_3);
    iVar3 = local_54;
    if (iVar2 != 0) {
      if ((local_54 == iVar1) && (iVar2 = memcmp(local_68,to,(long)iVar1), iVar2 == 0)) {
        if (param_4 != (undefined8 *)0x0) {
          memcpy(param_4,param_2,(ulong)param_3);
          *param_5 = (ulong)param_3;
        }
        uVar5 = 1;
        goto LAB_00b4d510;
      }
      ERR_put_error(4,0x91,0x68,"crypto/rsa/rsa_sign.c",0xdc);
    }
  }
  iVar1 = iVar3;
  uVar5 = 0;
LAB_00b4d510:
  CRYPTO_clear_free(local_68,(long)iVar1,"crypto/rsa/rsa_sign.c",0xea);
  CRYPTO_clear_free(to,param_7,"crypto/rsa/rsa_sign.c",0xeb);
  return uVar5;
}

