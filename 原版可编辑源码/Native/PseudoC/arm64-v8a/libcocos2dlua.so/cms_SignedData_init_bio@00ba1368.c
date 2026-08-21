
BIO * cms_SignedData_init_bio(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  BIO *append;
  BIO *a;
  long *plVar5;
  
                    /* catch() { ... } // from try @ 00ba10d4 with catch @ 00ba1374 */
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x16) {
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
      if (*(int *)(plVar5[2] + 0x10) != 0) {
        iVar1 = OPENSSL_sk_num(plVar5[3]);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            piVar3 = (int *)OPENSSL_sk_value(plVar5[3],iVar1);
            iVar2 = *piVar3;
            if (iVar2 == 2) {
              if (*plVar5 < 3) {
                *plVar5 = 3;
              }
            }
            else if (iVar2 == 3) {
              if (*plVar5 < 4) {
                *plVar5 = 4;
              }
            }
            else {
                    /* try { // try from 00ba13ec to 00ca1477 has its CatchHandler @ 00ba13ec
                       catch() { ... } // from try @ 00ba13ec with catch @ 00ba13ec
                       catch() { ... } // from try @ 00ba1480 with catch @ 00ba13ec */
              if ((iVar2 == 4) && (*plVar5 < 5)) {
                *plVar5 = 5;
              }
            }
            iVar1 = iVar1 + 1;
            iVar2 = OPENSSL_sk_num(plVar5[3]);
          } while (iVar1 < iVar2);
        }
        iVar1 = OPENSSL_sk_num(plVar5[4]);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            piVar3 = (int *)OPENSSL_sk_value(plVar5[4],iVar1);
            if ((*piVar3 == 1) && (*plVar5 < 5)) {
              *plVar5 = 5;
            }
                    /* try { // try from 00ba1478 to 00ca147f has its CatchHandler @ 00ba14e4 */
            iVar1 = iVar1 + 1;
                    /* try { // try from 00ba1480 to 00ca14ff has its CatchHandler @ 00ba13ec */
            iVar2 = OPENSSL_sk_num(plVar5[4]);
          } while (iVar1 < iVar2);
        }
        iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)plVar5[2]);
        if ((iVar1 != 0x15) && (*plVar5 < 3)) {
          *plVar5 = 3;
        }
        iVar1 = OPENSSL_sk_num(plVar5[5]);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            plVar4 = (long *)OPENSSL_sk_value(plVar5[5],iVar1);
                    /* catch() { ... } // from try @ 00ba1478 with catch @ 00ba14e4 */
            if (*(int *)plVar4[1] == 1) {
              if (*plVar4 < 3) {
                *plVar4 = 3;
              }
              if (*plVar5 < 3) {
                *plVar5 = 3;
              }
            }
            else if (*plVar4 < 1) {
              *plVar4 = 1;
            }
            iVar1 = iVar1 + 1;
            iVar2 = OPENSSL_sk_num(plVar5[5]);
          } while (iVar1 < iVar2);
        }
        if (*plVar5 < 1) {
                    /* try { // try from 00ba1540 to 00ca16fb has its CatchHandler @ 00ba1540
                       catch() { ... } // from try @ 00ba1540 with catch @ 00ba1540
                       catch() { ... } // from try @ 00ba1704 with catch @ 00ba1540
                       catch() { ... } // from try @ 00ba1738 with catch @ 00ba1540
                       catch() { ... } // from try @ 00ba1778 with catch @ 00ba1540 */
          *plVar5 = 1;
        }
      }
      iVar1 = OPENSSL_sk_num(plVar5[1]);
      if (0 < iVar1) {
        iVar1 = 0;
        a = (BIO *)0x0;
        while( true ) {
          OPENSSL_sk_value(plVar5[1],iVar1);
          append = (BIO *)cms_DigestAlgorithm_init_bio();
          if (append == (BIO *)0x0) break;
          if (a != (BIO *)0x0) {
            BIO_push(a,append);
            append = a;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(plVar5[1]);
          a = append;
          if (iVar2 <= iVar1) {
            return append;
          }
        }
        BIO_free_all(a);
      }
    }
  }
  else {
    ERR_put_error(0x2e,0x85,0x6c,"crypto/cms/cms_sd.c",0x1a);
  }
  return (BIO *)0x0;
}

