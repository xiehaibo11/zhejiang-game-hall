
ulong i2o_SCT_LIST(undefined8 param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *local_48;
  
  local_48 = (undefined1 *)0x0;
  if (param_2 == (long *)0x0) {
    bVar1 = false;
LAB_00b1251c:
    puVar8 = local_48;
    iVar2 = OPENSSL_sk_num(param_1);
    if (iVar2 < 1) {
      uVar9 = 2;
joined_r0x00b125b4:
      if (param_2 != (long *)0x0) {
        puVar8 = (undefined1 *)*param_2;
        *puVar8 = (char)(uVar9 - 2 >> 8);
        puVar8[1] = (char)(uVar9 - 2);
        if (!bVar1) {
          *param_2 = *param_2 + uVar9;
        }
      }
      goto LAB_00b12738;
    }
    if (param_2 == (long *)0x0) {
      iVar2 = 0;
      uVar9 = 2;
      do {
        piVar6 = (int *)OPENSSL_sk_value(param_1,iVar2);
        iVar3 = SCT_is_complete();
        if (iVar3 == 0) {
          ERR_put_error(0x32,0x6b,0x6a,"crypto/ct/ct_oct.c",0xce);
          CRYPTO_free((void *)0x0);
          goto LAB_00b126f8;
        }
        if (*piVar6 == 0) {
          lVar7 = *(long *)(piVar6 + 0xe) + *(long *)(piVar6 + 0x14) + 0x2f;
          iVar3 = (int)lVar7;
        }
        else {
          lVar7 = *(long *)(piVar6 + 4);
          iVar3 = (int)lVar7;
        }
        if (iVar3 == -1) goto LAB_00b126f8;
        uVar9 = uVar9 + ((lVar7 << 0x20) + 0x200000000 >> 0x20);
        iVar2 = iVar2 + 1;
        iVar3 = OPENSSL_sk_num(param_1);
      } while (iVar2 < iVar3);
LAB_00b12664:
      if (uVar9 >> 0x10 == 0) goto joined_r0x00b125b4;
    }
    else {
      local_48 = puVar8 + 2;
      uVar5 = OPENSSL_sk_value(param_1,0);
      iVar2 = i2o_SCT(uVar5,&local_48);
      if (iVar2 != -1) {
        iVar3 = 1;
        uVar9 = 2;
        do {
          puVar8[1] = (char)iVar2;
          *puVar8 = (char)((uint)iVar2 >> 8);
          uVar9 = uVar9 + (long)(iVar2 + 2);
          iVar2 = OPENSSL_sk_num(param_1);
          puVar8 = local_48;
          if (iVar2 <= iVar3) goto LAB_00b12664;
          local_48 = local_48 + 2;
          uVar5 = OPENSSL_sk_value(param_1,iVar3);
          iVar2 = i2o_SCT(uVar5,&local_48);
          iVar3 = iVar3 + 1;
        } while (iVar2 != -1);
      }
    }
LAB_00b126f8:
    if (bVar1) {
      CRYPTO_free((void *)*param_2);
      *param_2 = 0;
    }
  }
  else {
    pvVar4 = (void *)*param_2;
    if (pvVar4 != (void *)0x0) {
      bVar1 = false;
LAB_00b12508:
      local_48 = (undefined1 *)((long)pvVar4 + 2);
      goto LAB_00b1251c;
    }
    iVar2 = i2o_SCT_LIST(param_1,0);
    if (iVar2 == -1) {
      iVar2 = 0x69;
      iVar3 = 0x14f;
    }
    else {
      pvVar4 = CRYPTO_malloc(iVar2,"crypto/ct/ct_oct.c",0x152);
      *param_2 = (long)pvVar4;
      if (pvVar4 != (void *)0x0) {
        bVar1 = true;
        goto LAB_00b12508;
      }
      iVar2 = 0x41;
      iVar3 = 0x153;
    }
    ERR_put_error(0x32,0x6c,iVar2,"crypto/ct/ct_oct.c",iVar3);
  }
  uVar9 = 0xffffffff;
LAB_00b12738:
  return uVar9 & 0xffffffff;
}

