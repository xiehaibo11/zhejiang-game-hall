
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
LAB_00ad0d30:
      *param_1 = (long)plVar6;
      return 1;
    }
    if (param_1[0x23] != 0) {
      if ((X509 *)*plVar1 == (X509 *)0x0) {
        return 0;
      }
      iVar2 = X509_cmp((X509 *)*plVar1,param_2);
      plVar6 = plVar1;
      if (iVar2 == 0) goto LAB_00ad0d30;
    }
  }
  return 0;
}

