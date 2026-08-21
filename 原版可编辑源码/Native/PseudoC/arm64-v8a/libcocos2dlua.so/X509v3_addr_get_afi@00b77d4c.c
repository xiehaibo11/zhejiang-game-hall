
undefined2 X509v3_addr_get_afi(long *param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  
  uVar1 = 0;
  if (param_1 != (long *)0x0) {
    if (*param_1 == 0) {
      return 0;
    }
    puVar2 = *(undefined1 **)(*param_1 + 8);
    if (puVar2 == (undefined1 *)0x0) {
      return 0;
    }
    uVar1 = CONCAT11(*puVar2,puVar2[1]);
  }
  return uVar1;
}

