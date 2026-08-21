
undefined8 ssl_cert_select_current(long *param_1,X509 *param_2)

{
  long *plVar1;
  int iVar2;
  X509 *a;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_2 != (X509 *)0x0) {
    plVar5 = param_1 + 4;
    a = (X509 *)*plVar5;
                    /* try { // try from 00ac13e0 to 00bc13e3 has its CatchHandler @ 00ac13f0 */
                    /* try { // try from 00ac13e4 to 00bc13e7 has its CatchHandler @ 00ac1044 */
                    /* try { // try from 00ac13e8 to 00bc13ef has its CatchHandler @ 00ac13f4 */
                    /* catch() { ... } // from try @ 00ac13e0 with catch @ 00ac13f0
                       try { // try from 00ac13f0 to 00bc14fb has its CatchHandler @ 00ac1044 */
                    /* catch() { ... } // from try @ 00ac1120 with catch @ 00ac13f4
                       catch() { ... } // from try @ 00ac13e8 with catch @ 00ac13f4 */
                    /* catch() { ... } // from try @ 00ac114c with catch @ 00ac13fc */
                    /* catch() { ... } // from try @ 00ac1264 with catch @ 00ac140c */
                    /* catch() { ... } // from try @ 00ac12b4 with catch @ 00ac141c */
                    /* catch() { ... } // from try @ 00ac11f8 with catch @ 00ac1430 */
    if (((((((a == param_2) && (plVar6 = plVar5, param_1[5] != 0)) ||
           ((plVar9 = param_1 + 9, (X509 *)*plVar9 == param_2 && (plVar6 = plVar9, param_1[10] != 0)
            ))) || ((plVar8 = param_1 + 0xe, (X509 *)*plVar8 == param_2 &&
                    (plVar6 = plVar8, param_1[0xf] != 0)))) ||
         ((plVar7 = param_1 + 0x13, (X509 *)*plVar7 == param_2 &&
          (plVar6 = plVar7, param_1[0x14] != 0)))) ||
        (((((plVar4 = param_1 + 0x18, (X509 *)*plVar4 == param_2 &&
            (plVar6 = plVar4, param_1[0x19] != 0)) ||
           ((plVar3 = param_1 + 0x1d, (X509 *)*plVar3 == param_2 &&
            (plVar6 = plVar3, param_1[0x1e] != 0)))) ||
          ((plVar1 = param_1 + 0x22, (X509 *)param_1[0x22] == param_2 &&
           (plVar6 = plVar1, param_1[0x23] != 0)))) ||
         (((param_1[5] != 0 &&
           ((a != (X509 *)0x0 && (iVar2 = X509_cmp(a,param_2), plVar6 = plVar5, iVar2 == 0)))) ||
          ((((param_1[10] != 0 &&
             (((X509 *)*plVar9 != (X509 *)0x0 &&
              (iVar2 = X509_cmp((X509 *)*plVar9,param_2), plVar6 = plVar9, iVar2 == 0)))) ||
            ((param_1[0xf] != 0 &&
             (((X509 *)*plVar8 != (X509 *)0x0 &&
              (iVar2 = X509_cmp((X509 *)*plVar8,param_2), plVar6 = plVar8, iVar2 == 0)))))) ||
           ((param_1[0x14] != 0 &&
            (((X509 *)*plVar7 != (X509 *)0x0 &&
             (iVar2 = X509_cmp((X509 *)*plVar7,param_2), plVar6 = plVar7, iVar2 == 0)))))))))))) ||
       (((param_1[0x19] != 0 &&
         (((X509 *)*plVar4 != (X509 *)0x0 &&
          (iVar2 = X509_cmp((X509 *)*plVar4,param_2), plVar6 = plVar4, iVar2 == 0)))) ||
        ((param_1[0x1e] != 0 &&
         (((X509 *)*plVar3 != (X509 *)0x0 &&
          (iVar2 = X509_cmp((X509 *)*plVar3,param_2), plVar6 = plVar3, iVar2 == 0)))))))) {
LAB_00ac155c:
      *param_1 = (long)plVar6;
      return 1;
    }
    if (param_1[0x23] != 0) {
      if ((X509 *)*plVar1 == (X509 *)0x0) {
        return 0;
      }
      iVar2 = X509_cmp((X509 *)*plVar1,param_2);
      plVar6 = plVar1;
      if (iVar2 == 0) goto LAB_00ac155c;
    }
  }
                    /* try { // try from 00ac1570 to 00bc1577 has its CatchHandler @ 00ac159c */
                    /* try { // try from 00ac1578 to 00bc160b has its CatchHandler @ 00ac14fc */
  return 0;
}

