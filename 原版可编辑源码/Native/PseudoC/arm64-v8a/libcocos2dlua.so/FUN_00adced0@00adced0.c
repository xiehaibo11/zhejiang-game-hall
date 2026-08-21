
int FUN_00adced0(long param_1,SSL_SESSION *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  SSL_SESSION *ses;
  uchar *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if ((param_2 == (SSL_SESSION *)0x0) || (*(int *)(param_2->master_key + 0x24) == 0)) {
    iVar6 = 0;
  }
  else {
    if (param_3 != 0) {
      CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x360));
    }
    ses = (SSL_SESSION *)OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x20),param_2);
    if (ses == param_2) {
      ses = (SSL_SESSION *)OPENSSL_LH_delete(*(undefined8 *)(param_1 + 0x20),param_2);
      puVar4 = *(undefined8 **)(param_2->krb5_client_princ + 0x70);
      if (puVar4 != (undefined8 *)0x0) {
        puVar3 = param_2->krb5_client_princ + 0x68;
        puVar5 = *(undefined8 **)puVar3;
        if (puVar5 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)(param_1 + 0x38);
          puVar2 = (undefined8 *)(param_1 + 0x30);
          if (puVar4 == puVar1) {
            if (puVar5 == puVar2) {
              *puVar2 = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
            }
            else {
              *puVar1 = puVar5;
              puVar5[0x20] = puVar1;
            }
          }
          else if (puVar5 == puVar2) {
            *puVar2 = puVar4;
            puVar4[0x1f] = puVar2;
          }
          else {
            puVar4[0x1f] = puVar5;
            *(undefined8 **)(*(long *)puVar3 + 0x100) = puVar4;
          }
          puVar3[0] = '\0';
          puVar3[1] = '\0';
          puVar3[2] = '\0';
          puVar3[3] = '\0';
          puVar3[4] = '\0';
          puVar3[5] = '\0';
          puVar3[6] = '\0';
          puVar3[7] = '\0';
          param_2->krb5_client_princ[0x70] = '\0';
          param_2->krb5_client_princ[0x71] = '\0';
          param_2->krb5_client_princ[0x72] = '\0';
          param_2->krb5_client_princ[0x73] = '\0';
          param_2->krb5_client_princ[0x74] = '\0';
          param_2->krb5_client_princ[0x75] = '\0';
          param_2->krb5_client_princ[0x76] = '\0';
          param_2->krb5_client_princ[0x77] = '\0';
        }
      }
      iVar6 = 1;
    }
    else {
      iVar6 = 0;
    }
    param_2->krb5_client_princ[0] = '\x01';
    param_2->krb5_client_princ[1] = '\0';
    param_2->krb5_client_princ[2] = '\0';
    param_2->krb5_client_princ[3] = '\0';
    if (param_3 != 0) {
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x360));
    }
    if (iVar6 != 0) {
      SSL_SESSION_free(ses);
    }
    if (*(code **)(param_1 + 0x58) != (code *)0x0) {
      (**(code **)(param_1 + 0x58))(param_1,param_2);
    }
  }
  return iVar6;
}

