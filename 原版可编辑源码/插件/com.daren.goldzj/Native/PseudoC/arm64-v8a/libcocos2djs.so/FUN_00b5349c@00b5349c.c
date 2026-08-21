
undefined8 * FUN_00b5349c(char *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && (iVar1 = OPENSSL_sk_num(param_2), 0 < iVar1)) {
    if (param_1 == (char *)0x0) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar1);
        if (puVar3 != (undefined8 *)0x0) {
          return puVar3;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
      } while (iVar1 < iVar2);
    }
    else {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar1);
        if ((puVar3 != (undefined8 *)0x0) && (iVar2 = strcmp((char *)*puVar3,param_1), iVar2 == 0))
        {
          return puVar3;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
      } while (iVar1 < iVar2);
    }
  }
  puVar3 = (undefined8 *)SRP_get_default_gN(param_1);
  return puVar3;
}

