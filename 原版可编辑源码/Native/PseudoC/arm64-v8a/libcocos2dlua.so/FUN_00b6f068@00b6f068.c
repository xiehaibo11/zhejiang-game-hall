
undefined8 FUN_00b6f068(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  X509 *a;
  undefined8 uVar5;
  X509_NAME *pXVar6;
  long lVar7;
  uint uVar8;
  X509_CRL *a_00;
  int iVar9;
  int iVar10;
  X509_CRL *local_88;
  X509_CRL *local_80;
  X509_CRL *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  
  uVar8 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if ((uVar8 >> 2 & 1) != 0) {
    if ((uVar8 >> 3 & 1) == 0) {
      if (*(long *)(param_1 + 0xd8) != 0) {
        return 1;
      }
      iVar9 = 0;
    }
    else {
      iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      iVar9 = iVar3 + -1;
      if (iVar3 < 1) {
        return 1;
      }
    }
    iVar3 = 0;
    do {
      *(int *)(param_1 + 0xac) = iVar3;
                    /* try { // try from 00b6f0d4 to 00c6f11b has its CatchHandler @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f0d4 with catch @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f128 with catch @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f158 with catch @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f188 with catch @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f278 with catch @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f324 with catch @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f388 with catch @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f3ec with catch @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f450 with catch @ 00b6f0d4
                       catch() { ... } // from try @ 00b6f4b4 with catch @ 00b6f0d4 */
      local_88 = (X509_CRL *)0x0;
      a = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3);
      *(X509 **)(param_1 + 0xb8) = a;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if ((*(byte *)((long)&a[1].sig_alg + 1) >> 2 & 1) == 0) {
        iVar10 = 0;
        do {
          if (*(code **)(param_1 + 0x58) == (code *)0x0) {
            local_68 = 0;
                    /* try { // try from 00b6f128 to 00c6f14b has its CatchHandler @ 00b6f0d4 */
            local_6c = 0;
            local_80 = (X509_CRL *)0x0;
            local_78 = (X509_CRL *)0x0;
            pXVar6 = X509_get_issuer_name(a);
            local_70 = *(undefined4 *)(param_1 + 0xd4);
                    /* try { // try from 00b6f14c to 00c6f157 has its CatchHandler @ 00b6f558 */
                    /* try { // try from 00b6f158 to 00c6f17b has its CatchHandler @ 00b6f0d4 */
            iVar4 = FUN_00b70330(param_1,&local_78,&local_80,&local_68,&local_6c,&local_70,
                                 *(undefined8 *)(param_1 + 0x18));
            if (iVar4 == 0) {
                    /* try { // try from 00b6f17c to 00c6f187 has its CatchHandler @ 00b6f554 */
                    /* try { // try from 00b6f188 to 00c6f1ff has its CatchHandler @ 00b6f0d4 */
              lVar7 = (**(code **)(param_1 + 0x80))(param_1,pXVar6);
              if ((lVar7 != 0) || (local_78 == (X509_CRL *)0x0)) {
                FUN_00b70330(param_1,&local_78,&local_80,&local_68,&local_6c,&local_70,lVar7);
                OPENSSL_sk_pop_free(lVar7,X509_CRL_free);
                goto joined_r0x00b6f1cc;
              }
            }
            else {
joined_r0x00b6f1cc:
              if (local_78 == (X509_CRL *)0x0) {
                uVar5 = 0;
                goto LAB_00b6f2a4;
              }
            }
            *(undefined8 *)(param_1 + 0xc0) = local_68;
            *(undefined4 *)(param_1 + 0xd0) = local_6c;
            *(undefined4 *)(param_1 + 0xd4) = local_70;
            a_00 = local_80;
            local_88 = local_78;
          }
          else {
            uVar5 = (**(code **)(param_1 + 0x58))(param_1,&local_88,a);
            a_00 = (X509_CRL *)0x0;
            if ((int)uVar5 == 0) {
LAB_00b6f2a4:
              a_00 = (X509_CRL *)0x0;
              *(undefined4 *)(param_1 + 0xb0) = 3;
              iVar4 = (**(code **)(param_1 + 0x38))(uVar5,param_1);
              goto LAB_00b6f2d8;
            }
          }
                    /* try { // try from 00b6f200 to 00c6f20b has its CatchHandler @ 00b6f50c */
          *(X509_CRL **)(param_1 + 200) = local_88;
          iVar4 = (**(code **)(param_1 + 0x60))(param_1);
          if (iVar4 == 0) {
LAB_00b6f29c:
            iVar4 = 0;
            goto LAB_00b6f2d8;
          }
          if (a_00 != (X509_CRL *)0x0) {
            iVar4 = (**(code **)(param_1 + 0x60))(param_1,a_00);
            if (iVar4 != 0) {
              iVar4 = (**(code **)(param_1 + 0x68))(param_1,a_00,a);
              if (iVar4 == 2) {
                iVar4 = 2;
                goto LAB_00b6f26c;
              }
              if (iVar4 != 0) goto LAB_00b6f248;
            }
            goto LAB_00b6f29c;
          }
LAB_00b6f248:
          iVar4 = (**(code **)(param_1 + 0x68))(param_1,local_88,a);
          if (iVar4 == 0) goto LAB_00b6f2d8;
LAB_00b6f26c:
          X509_CRL_free(local_88);
                    /* try { // try from 00b6f278 to 00c6f30f has its CatchHandler @ 00b6f0d4 */
          X509_CRL_free(a_00);
          local_88 = (X509_CRL *)0x0;
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar10 == iVar2) {
            *(undefined4 *)(param_1 + 0xb0) = 3;
            iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
            break;
          }
          iVar10 = iVar2;
        } while (iVar2 != 0x807f);
        a_00 = (X509_CRL *)0x0;
LAB_00b6f2d8:
        X509_CRL_free(local_88);
        X509_CRL_free(a_00);
        *(undefined8 *)(param_1 + 200) = 0;
        if (iVar4 == 0) {
          return 0;
        }
      }
      bVar1 = iVar3 < iVar9;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
                    /* try { // try from 00b6f310 to 00c6f323 has its CatchHandler @ 00b6f504 */
  return 1;
}

