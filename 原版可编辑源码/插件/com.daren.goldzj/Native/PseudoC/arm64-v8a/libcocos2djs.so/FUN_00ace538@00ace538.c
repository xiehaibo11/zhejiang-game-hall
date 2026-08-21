
void FUN_00ace538(SSL_SESSION *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uchar *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
                    /* try { // try from 00ace558 to 00bce563 has its CatchHandler @ 00ace598 */
  if ((param_2[1] != 0) &&
     (param_2[1] <=
      *(long *)(param_1->krb5_client_princ + 0x30) + *(long *)(param_1->krb5_client_princ + 0x38)))
  {
    return;
  }
  OPENSSL_LH_delete(param_2[2],param_1);
  puVar5 = *(undefined8 **)(param_1->krb5_client_princ + 0x70);
  lVar3 = *param_2;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = param_1->krb5_client_princ + 0x68;
    puVar6 = *(undefined8 **)puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)(lVar3 + 0x38);
      puVar2 = (undefined8 *)(lVar3 + 0x30);
      if (puVar5 == puVar1) {
        if (puVar6 == puVar2) {
          *puVar2 = 0;
          *(undefined8 *)(lVar3 + 0x38) = 0;
        }
        else {
          *puVar1 = puVar6;
          puVar6[0x20] = puVar1;
        }
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ace558 with catch @ 00ace598
                        */
        if (puVar6 == puVar2) {
          *puVar2 = puVar5;
          puVar5[0x1f] = puVar2;
        }
        else {
          puVar5[0x1f] = puVar6;
          *(undefined8 **)(*(long *)puVar4 + 0x100) = puVar5;
        }
      }
      puVar4[0] = '\0';
      puVar4[1] = '\0';
      puVar4[2] = '\0';
      puVar4[3] = '\0';
      puVar4[4] = '\0';
      puVar4[5] = '\0';
      puVar4[6] = '\0';
      puVar4[7] = '\0';
      param_1->krb5_client_princ[0x70] = '\0';
      param_1->krb5_client_princ[0x71] = '\0';
      param_1->krb5_client_princ[0x72] = '\0';
      param_1->krb5_client_princ[0x73] = '\0';
      param_1->krb5_client_princ[0x74] = '\0';
      param_1->krb5_client_princ[0x75] = '\0';
      param_1->krb5_client_princ[0x76] = '\0';
      param_1->krb5_client_princ[0x77] = '\0';
      lVar3 = *param_2;
    }
  }
  param_1->krb5_client_princ[0] = '\x01';
  param_1->krb5_client_princ[1] = '\0';
  param_1->krb5_client_princ[2] = '\0';
  param_1->krb5_client_princ[3] = '\0';
  if (*(code **)(lVar3 + 0x58) != (code *)0x0) {
    (**(code **)(lVar3 + 0x58))(lVar3,param_1);
  }
  SSL_SESSION_free(param_1);
  return;
}

